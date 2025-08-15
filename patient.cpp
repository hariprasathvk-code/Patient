#include <iostream>
#include <string>
#include <cctype>
#include <limits>
using namespace std;


void registerPatient() {

}

void availableNurse() {
    
}

void availableDoctor() {
    
}

void needFollowUp() {
    
}

void needMedication() {
    
}

int main() {
    cout << "=== Patient Flow ===\n";

    cout << "Patient arrives.\n";

    // Registration loop
    while (!askYesNo("Is patient registered?")) {
        registerPatient();
    }

    
    availableNurse();     
    availableDoctor();    
    needFollowUp();       
    needMedication();     

    // Termination
    cout << "Patient leaves. (End)\n";
    return 0;
}
