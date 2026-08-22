# ATM Banking System
A basic ATM Banking System made using C++ and Qt Creator as a mini project for learning Object-Oriented Programming.

## About the Project
This project is a simple GUI-based ATM application. It allows the user to log in and perform basic banking operations through buttons.
The project was made using Qt Widgets and C++17.

## Features

* Login using username and PIN
* Check account balance
* Deposit money
* Withdraw money
* Change PIN
* Logout
* Exit the application

## OOP Concepts Used

* Classes and Objects
* Encapsulation
* Functions
* Conditional Statements
* Static Data Members

## Project Files

```text
ATM/
├── ATM.pro
├── main.cpp
├── account.h
├── account.cpp
├── mainwindow.h
├── mainwindow.cpp
└── mainwindow.ui

```

## File Description

* `ATM.pro` – Qt qmake project file
* `main.cpp` – Starts the application
* `account.h` – Contains the Account class
* `account.cpp` – Contains the Account class implementation
* `mainwindow.h` – Main window class declaration
* `mainwindow.cpp` – Handles the application logic
* `mainwindow.ui` – User interface created using Qt Designer

## Default Login
Username: `nirmay`
PIN: `1234`
Starting Balance: ₹50,000

## Requirements

* Qt Creator
* Qt 5 or Qt 6
* C++17 compiler

## How to Run

1. Open Qt Creator.
2. Open the `ATM.pro` file.
3. Select a suitable Qt kit.
4. Build the project.
5. Run the application.

## Limitations
This is a basic educational project, so it currently uses a single account and the account data is reset when the application is restarted.

## Future Improvements
Some possible improvements are:

* Add support for multiple accounts
* Store account information permanently
* Add transaction history
* Improve PIN security
* Add more ATM features

## Purpose
This project was created as an OOP mini project to understand how classes, objects, functions, encapsulation and static data members can be used in a GUI application.

## Author
Nirmay Tripathi
