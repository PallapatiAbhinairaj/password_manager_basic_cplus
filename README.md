# Password_Manager_Basic_Cplus
SecurePass is a simple command-line password manager built using C++, designed to securely store and retrieve user passwords for different websites. The project demonstrates core concepts of file handling, user input validation, menu-driven programming, and basic modular code structure using functions.

# SecurePass – Password Manager in C++
A simple command-line password manager built using C++, designed for beginners to understand the basics of file handling, user input validation, and modular programming.
This project allows users to securely (and locally) store passwords for different websites using a .txt file. It also provides an option to view all stored passwords.

📌 Table of Contents
        Features
        How It Works
        How to Use
        Technologies Used
        Folder Structure
        Future Improvements
        Disclaimer

✅ Features
    📝 Add a password for a site or service
    👁️ View saved passwords
    📁 Stores passwords locally in a .txt file
    🚫 Appends new passwords without overwriting old ones
    🚨 Error handling for file access and input validation
    🧱 Modular code with reusable functions

⚙️ How It Works
    The program uses a simple menu-driven interface that gives users 3 options:

                    Password Manager
                    1. Add Password
                    2. View Password
                    3. Exit

Enter your choice:
🔑 1. Add Password
The user is prompted to enter a site name and password

These details are saved in Passwords.txt using ofstream in append mode (ios::app)

📂 2. View Passwords
The program reads from Passwords.txt using ifstream
It displays all saved site-password pairs on the terminal

❌ 3. Exit
Exits the program cleanly

# Technologies Used
  Component	Description
  Language	C++ (C++17 Standard)
  File Handling	ifstream, ofstream
  Error Handling	cerr, cin.fail()
  Build Tool	g++ via MSYS2 / MinGW / WSL
  IDE	Visual Studio Code
  Version Control	Git & GitHub


🚀 Future Improvements
🔐 Encrypt saved passwords (e.g., SHA-256 + XOR)
👁️ Mask input while entering passwords
📦 Use structured file format like JSON or CSV
🌐 Add cloud storage or database integration
💻 GUI version using Qt or Electron

⚠️ Disclaimer
This project is for educational purposes only. The stored passwords are not encrypted and are saved in plain text. Do not use this application to store any real, personal, or sensitive data.

