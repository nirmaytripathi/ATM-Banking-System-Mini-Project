# ATM Banking System (Qt / C++)

A simple desktop ATM simulator built with **Qt Widgets** and **C++17**, created as a mini project to demonstrate core **Object-Oriented Programming (OOP)** concepts in C++.

## Overview

The application simulates a basic ATM interface with login, balance check, deposit, withdrawal, and PIN-change functionality, all driven by a single `Account` class and a `QStackedWidget`-based UI.

## Features

- **Login** — Authenticate using a username and PIN.
- **Check Balance** — View the current account balance.
- **Deposit** — Add funds to the account (with input validation).
- **Withdraw** — Remove funds, with checks for invalid amounts and insufficient balance.
- **Change PIN** — Update the PIN after verifying the old one.
- **Logout / Exit** — Return to the login screen or quit the app (with a confirmation prompt).

## OOP Concepts Demonstrated

 This project uses some basic C++ concepts: 
- Classes and objects 
- Encapsulation 
- Functions 
- Conditional statements 
- Static data members 

## Project Structure

```
ATM/
├── ATM.pro            # Qt project file
├── main.cpp            # Application entry point
├── account.h            # Account class declaration
├── account.cpp           # Account class definition (static members)
├── mainwindow.h          # MainWindow class declaration
├── mainwindow.cpp         # MainWindow class definition (UI logic/slots)
└── mainwindow.ui          # Qt Designer UI layout (login, menu, PIN pages)
```

## Class Reference

### `Account`
Represents the bank account data (static, single-account model).

| Member | Type | Description |
|---|---|---|
| `username` | `QString` | Static account username |
| `balance` | `float` | Static current balance |
| `pin` | `QString` | Static account PIN |

### `MainWindow`
Handles the UI and user interactions via Qt's `QStackedWidget` (login page, menu page, change-PIN page).

Key slots:
- `on_pushButton_login_clicked()`
- `on_pushButton_checkBalance_clicked()`
- `on_pushButton_deposit_clicked()`
- `on_pushButton_withdraw_clicked()`
- `on_pushButton_changePin_clicked()` / `on_pushButton_setNewPin_clicked()` / `on_pushButton_pinReturn_clicked()`
- `on_pushButton_logout_clicked()`
- `on_pushButton_exit_clicked()`

## Default Credentials

| Field | Value |
|---|---|
| Username | `nirmay` |
| PIN | `1234` |
| Starting Balance | ₹50,000.00 |

## Requirements

- Qt 5 or Qt 6 (Qt Widgets module)
- A C++17-compatible compiler
- Qt Creator (recommended) or `qmake` + `make`

## Build & Run

### Using Qt Creator
1. Open `ATM.pro` in Qt Creator.
2. Select a configured kit.
3. Build and run (`Ctrl+R`).

### Using the command line
```bash
qmake ATM.pro
make
./ATM
```

## Possible Improvements

- Support multiple accounts (replace static members with per-instance objects).
- Persist account data to a file or database instead of resetting on restart.
- Add transaction history logging.
- Hash/encrypt the PIN instead of storing it as plain text.
- Add input validation for the PIN change form (e.g., numeric-only, fixed length).

## License

This project is intended for educational purposes as a demonstration of OOP principles in C++/Qt.

