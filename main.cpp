#include <iostream>
#include "Patient.h"
#include "Hospital.h"

using namespace std;

int main()
{
    Patient patient;
    Hospital hospital;

    cout << "====================================\\n";
    cout << "   HOSPITAL PATIENT BILLING SYSTEM\\n";
    cout << "====================================\\n";

    patient.inputPatientDetails();
    hospital.inputHospitalDetails();

    patient.calculateBill(hospital);

    patient.displayPatientDetails();
    hospital.displayHospitalBill();
    hospital.displayTotalBill();

    cout << "\\nBilling completed successfully.\\n";

    return 0;
}
