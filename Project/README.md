# Medicine Tracker in C++

This is a simple and purposeful console-based medicine tracker built using C++. It allows you to add, view, update, and delete medicine records, helping you stay on top of your medication schedule using a lightweight text-based system.

This is my first C++ project, created to practice file handling, classes, condition checks, and user interaction in C++.

## Features

- Add new medicine records with name, dosage, time, and default status  
- View all saved medicines in a clean and organized table format  
- Update the status of a specific medicine to “Taken” or leave as “Not Taken”  
- Delete any medicine record with confirmation before removal  
- Handles basic input validation and accepts lowercase responses for consistency  
- Stores and retrieves data from a file to preserve it across sessions  
- Replaces the original file with updated content after every modification  

## How to Run

**Compile:**  
`g++ medicine_tracker.cpp -o medicine_tracker`  

**Run:**  
`./medicine_tracker`

## File Used

**Medicine_Tracker.txt**

Each medicine record is stored in the following format:  
`Name|Dosage|Time|Status|`

**Example:**  
`Paracetamol|500mg|Morning|Not Taken|`

## Important Note

The program uses a simple file format to read and write records.  
Avoid editing the text file manually, as it may cause unexpected behavior.  
All changes should be made through the program.

---

**Author:** Lakshmithra  
**Created on:** 31 July 2025
