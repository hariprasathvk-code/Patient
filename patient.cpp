#include <iostream>
#include <string>
#include <cctype>
#include <limits>
using namespace std;

bool askYesNo(const string &q) {
    while (true) {
        cout << q << " (y/n): ";
        string s;
        if (!(cin >> s)) return false;
        if (!s.empty()) {
            char c = tolower(s[0]);
            if (c == 'y') return true;
            if (c == 'n') return false;
        }
        cout << "Please enter y or n.\n";
    }
}
y
void registerPatient() {
    cout << "Registering patient...\n";
    cout << "Patient registered successfully.\n";
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
