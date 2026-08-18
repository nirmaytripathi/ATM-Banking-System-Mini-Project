#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QApplication>
#include "account.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->page_login);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//LOGIN PAGE
void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString pin = ui->lineEdit_pin->text();

    if (username == Account::username && pin == Account::pin) {
        ui->lineEdit_pin->clear();
        ui->stackedWidget->setCurrentWidget(ui->page_menu);
    } else {
        QMessageBox::critical(this, "Login Failed", "Username Or Password Incorrect!");
    }
}

//MENU PAGE
void MainWindow::on_pushButton_logout_clicked()
{
    ui->lineEdit_username->clear();
    ui->lineEdit_pin->clear();
    ui->stackedWidget->setCurrentWidget(ui->page_login);
}

//BALANCE
void MainWindow::on_pushButton_checkBalance_clicked()
{
    ui->label_balance->setText("₹ " +  QString::number(Account::balance));
}

//DEPOSIT
void MainWindow::on_pushButton_deposit_clicked()
{
    float amount = ui->lineEdit_amount->text().toFloat();
    if (amount <= 0) {
        QMessageBox::warning(this, "Invalid Amount", "Please Enter a Valid Amount");
        return;
    }
    Account::balance += amount;
    QMessageBox::information(this, "Deposit Successful", "Amount Deposited Successfully!");
    ui->lineEdit_amount->clear();
}

//WITHDRAW
void MainWindow::on_pushButton_withdraw_clicked()
{
    float amount = ui->lineEdit_amount->text().toFloat();
    if (amount <= 0) {
        QMessageBox::warning(this, "Invalid Amount", "Enter a Valid Amount");
        return;
    }
    if (amount > Account::balance) {
        QMessageBox::warning(this, "Invalid Amount", "Insufficient Balance!");
        return;
    }
    Account::balance -= amount;
    QMessageBox::information(this, "Withdrawl Successful", "Please Collect Your Amount!");
    ui->lineEdit_amount->clear();
}

//LOGOUT
void MainWindow::on_pushButton_changePin_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_pin);
}

//QUIT
void MainWindow::on_pushButton_exit_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit", "Are you sure you want to exit?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
}

//CHANGE PIN PAGE
void MainWindow::on_pushButton_pinReturn_clicked()
{
    ui->lineEdit_oldPin->clear();
    ui->lineEdit_newPin->clear();
    ui->stackedWidget->setCurrentWidget(ui->page_menu);
}

//SET PIN
void MainWindow::on_pushButton_setNewPin_clicked()
{
    QString oldPin = ui->lineEdit_oldPin->text();
    QString newPin = ui->lineEdit_newPin->text();

    if (oldPin != Account::pin) {
        QMessageBox::warning(this, "Error", "Incorrect Old PIN!");
        return;
    }
    if (newPin.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please Enter a New PIN!");
        return;
    }
    Account::pin = newPin;
    QMessageBox::information(this, "Success", "PIN Changed Successfully!");
    ui->lineEdit_oldPin->clear();
    ui->lineEdit_newPin->clear();
    ui->stackedWidget->setCurrentWidget(ui->page_menu);
}
