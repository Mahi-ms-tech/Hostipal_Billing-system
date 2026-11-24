#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Hospital;

class Patient
{
private:
    int patient_id;
    std::string name;
    int age;
    int number_of_days;

public:
    void inputPatientDetails();
    void displayPatientDetails() const;

    // This member function is allowed to access Hospital's private members.
    void calculateBill(Hospital& hospital) const;
};

#endif
