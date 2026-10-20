 Library Management System

 Project Description

The Library Management System is a console-based application developed using the C programming language. It helps manage book records in a library through a simple menu-driven interface.

 Features

- Add Book: Add a new book with its ID, title, author, and quantity.
- Display Books: Display the details of all available books.
- Search Book: Search for a book using its ID.
- Update Book: Modify the title, author, and quantity of an existing book.
- Delete Book: Delete a book record using its ID.
- Exit: Close the application.

 Technologies Used

- Programming Language: C
- Header Files: "stdio.h", "string.h"
- Data Structure: Structure ("struct Book") and Array
- Storage: In-memory storage using a global array

 Book Details

Each book record contains:

- Book ID
- Book Title
- Author Name
- Quantity

 How to Compile and Run

Step 1: Compile

If you have GCC installed, open a terminal in the project folder and run:

gcc Library.c -o Library

Step 2: Run

On Windows:

Library.exe

On Linux or macOS:

./Library

Replace "Library.c" with your actual C source filename if it is different.

 Menu Options

===== LIBRARY MANAGEMENT SYSTEM =====
1. Add Book
2. Display All Books
3. Search Book by ID
4. Update Book
5. Delete Book
6. Exit

Choose an option from the menu and follow the instructions displayed on the screen.

 Limitations

- Book records are stored in an array in memory.
- Records are lost when the program terminates.
- The program can store up to 100 book records.
- Each book ID should be unique for correct searching and updating.

 Objective

The objective of this project is to demonstrate the use of structures, arrays, functions, loops, conditional statements, and basic record management in C programming.

 Author

Gokul3575

 Thank you for visiting my Library Management System project!
