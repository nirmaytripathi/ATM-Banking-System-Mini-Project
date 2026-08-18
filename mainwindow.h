#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    // ---- Login page ----
    void on_pushButton_login_clicked();

    // ---- Menu page ----
    void on_pushButton_logout_clicked();
    void on_pushButton_checkBalance_clicked();
    void on_pushButton_deposit_clicked();
    void on_pushButton_withdraw_clicked();
    void on_pushButton_changePin_clicked();
    void on_pushButton_exit_clicked();

    // ---- Change PIN page ----
    void on_pushButton_pinReturn_clicked();
    void on_pushButton_setNewPin_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
