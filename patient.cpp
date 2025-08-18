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

void registerPatient() {
    cout << "Registering patient...\n";
    cout << "Patient registered successfully.\n";
}

void availableNurse() {
    while (!askYesNo("Is nurse available?")) {
        cout << "Waiting for available nurse...\n";
    }
    cout << "Nurse is available.\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
    cout << "Recording health condition...\n";
    string notes;
    getline(cin, notes);
    cout << "Health condition recorded.\n";
}

void availableDoctor() {
    while (!askYesNo("Is doctor available?")) {
        cout << "Waiting for available doctor...\n";
    }
    cout << "Doctor is available.\n";
    cout << "Assigning patient to doctor...\n";
    cout << "Patient assigned.\n";
}


void needFollowUp() {
    while (askYesNo("Is follow-up needed?")) {
        cout << "Arranging appointment...\n";
        cout << "Appointment arranged.\n";
       
    }
    cout << "No follow-up needed. Proceed to Medication check.\n";
}


void needMedication() {
    if (askYesNo("Is medication needed?")) {
        cout << "Giving patient prescription...\n";
        cout << "Prescription given.\n";
    } else {
        cout << "No medication needed.\n";
    }
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
