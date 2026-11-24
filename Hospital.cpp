#include <iostream>
#include "Hospital.h"

using namespace std;

Hospital::Hospital()
{
    room_charges = 0.0f;
    medical_charges = 0.0f;
    medicine_charges = 0.0f;
    total_bill = 0.0f;
}

void Hospital::inputHospitalDetails()
{
    cout << "\\nEnter room charges per day: ";
    cin >> room_charges;

    cout << "Enter medical charges: ";
    cin >> medical_charges;

    cout << "Enter medicine charges: ";
    cin >> medicine_charges;

    if (room_charges < 0 || medical_charges < 0 || medicine_charges < 0)
    {
        cout << "Charges cannot be negative. Please enter the charges again.\\n";
        inputHospitalDetails();
    }
}

void Hospital::displayHospitalBill() const
{
    cout << "\\n----- Hospital Charges -----\\n";
    cout << "Room charges per day : Rs. " << room_charges << '\\n';
    cout << "Medical charges      : Rs. " << medical_charges << '\\n';
    cout << "Medicine charges     : Rs. " << medicine_charges << '\\n';
}

void Hospital::displayTotalBill() const
{
    cout << "\\nTotal Hospital Bill  : Rs. " << total_bill << '\\n';
}
