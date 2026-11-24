# Hospital Patient Billing System (C++)

A console-based C++ mini-project that collects patient details, accepts hospital charges, and calculates the patient's total hospital bill.

## Features

- Accepts patient ID, name, age, and number of hospital days.
- Accepts room charges per day, medical charges, and medicine charges.
- Calculates the total bill.
- Displays patient details and a billing summary.
- Uses a friend member function to demonstrate controlled access to private members across classes.

## Bill calculation

`Total Bill = (Room Charges Per Day × Number Of Days) + Medical Charges + Medicine Charges`

## OOP concepts demonstrated

- Classes and objects
- Encapsulation using private data members
- Member functions
- Forward declarations
- Friend member functions between two classes
- Header files and separate implementation files

## Project files

```text
Hospital_Patient_Billing_System/
├── main.cpp
├── Patient.h
├── Patient.cpp
├── Hospital.h
├── Hospital.cpp
├── README.md
└── .gitignore
```

## Requirements

- A C++ compiler such as g++.
- C++11 or later.

## Compile and run

Open a terminal in this project directory and run:

```bash
g++ -std=c++11 main.cpp Patient.cpp Hospital.cpp -o hospital_billing
```

Run on Linux/macOS:

```bash
./hospital_billing
```

Run on Windows PowerShell:

```powershell
.\hospital_billing.exe
```

## Example calculation

Suppose the inputs are:

- Number of hospital days: 3
- Room charges per day: Rs. 1000
- Medical charges: Rs. 1500
- Medicine charges: Rs. 500

Then:

`Total Bill = (1000 × 3) + 1500 + 500 = Rs. 5000`

## Note

This is an educational mini-project. It is a single-patient, console-based billing example and does not represent a production hospital billing or patient-record system.
