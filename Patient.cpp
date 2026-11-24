#include <iostream>
#include <limits>
#include "Patient.h"

using namespace std;

void Patient::inputPatientDetails()
{
    cout << "Enter patient ID: ";
    cin >> patient_id;

    cout << "Enter patient name: ";
    getline(cin >> ws, name);

    cout << "Enter patient age: ";
    cin >> age;

    cout << "Enter number of days in hospital: ";
    cin >> number_of_days;

    while (cin.fail() || age <= 0 || number_of_days <= 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\\n');

        cout << "\\nInvalid input. Please enter valid details.\\n";

        cout << "Enter patient age: ";
        cin >> age;

        cout << "Enter number of days in hospital: ";
        cin >> number_of_days;
    }
}

void Patient::displayPatientDetails() const
{
    cout << "\\n----- Patient Details -----\\n";
    cout << "Patient ID       : " << patient_id << '\\n';
    cout << "Patient Name     : " << name << '\\n';
    cout << "Age              : " << age << '\\n';
    cout << "Number of Days   : " << number_of_days << '\\n';
}
