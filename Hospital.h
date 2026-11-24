#ifndef HOSPITAL_H
#define HOSPITAL_H

class Patient;

class Hospital
{
private:
    float room_charges;
    float medical_charges;
    float medicine_charges;
    float total_bill;

public:
    Hospital();

    void inputHospitalDetails();
    void displayHospitalBill() const;
    void displayTotalBill() const;

    // Only this Patient member function receives access to Hospital's private data.
    friend void Patient::calculateBill(Hospital& hospital) const;
};

#endif
