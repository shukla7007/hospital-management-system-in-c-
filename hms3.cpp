#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Patient {
    int bed_number;
    string name;
    string address;
    int age;
    string gender;
    string mjdis;
};
class PatientDatabase {
    private:
        vector<Patient> patients;
    public:
        void add_patient(Patient p);
        void delete_patient(int bed_number);
        void search_patient(int bed_number);
        void display_all_patients();
};

void PatientDatabase::add_patient(Patient p) {
    patients.push_back(p);
    cout << "Patient record added successfully!" << endl;
}

void PatientDatabase::delete_patient(int bed_number) {
    for (auto it = patients.begin(); it != patients.end(); it++) {
        if (it->bed_number == bed_number) {
            patients.erase(it);
            cout << "Patient record deleted successfully!" << endl;
            return;
        }
    }
    cout << "Patient record not found!" << endl;
}

void PatientDatabase::search_patient(int bed_number) {
    for (auto p : patients) {
        if (p.bed_number == bed_number) {
            cout << "Bed Number: " << p.bed_number << endl;
            cout << "Name: " << p.name << endl;
            cout << "Address: " << p.address << endl;
            cout << "Age: " << p.age << endl;
            cout << "Gender: " << p.gender << endl;
            cout << "Any major disease suffered earlier: " << p.mjdis << endl;

            return;
        }
    }
    cout << "Patient record not found!" << endl;
}

void PatientDatabase::display_all_patients() {
    for (auto p : patients) {
        cout << "Bed Number: " << p.bed_number << endl;
        cout << "Name: " << p.name << endl;
        cout << "Address: " << p.address << endl;
        cout << "Age: " << p.age << endl;
        cout << "Gender: " << p.gender << endl;
        cout << "Any major disease suffered earlier: " << p.mjdis << endl;
        cout << endl;
    }
}

int main() {
    PatientDatabase db;
    int choice;
    
        
cout<<"\t\t\t\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t\t\t\t|                                           		                                |\n";
cout<<"\t\t\t\t\t|                                           		                                |\n";
cout<<"\t\t\t\t\t|                                           		                                |\n";
cout<<"\t\t\t\t\t|                                           		                                |\n";
cout<<"\t\t\t\t\t|                                           		                                |\n";
cout<<"\t\t\t\t\t|                                           		                                |\n";
cout<<"\t\t\t\t\t|                                  WELCOME TO                                           |\n";
cout<<"\t\t\t\t\t|                                                                                       |\n";
cout<<"\t\t\t\t\t|                           HOSPITAL MANAGEMENT SYSTEM                                  |\n";
cout<<"\t\t\t\t\t|                                                                                       |\n";
cout<<"\t\t\t\t\t|                                                                                       |\n";
cout<<"\t\t\t\t\t|                                                                                       |\n";
cout<<"\t\t\t\t\t|                                                                                       |\n";
cout<<"\t\t\t\t\t|                                                                                       |\n";
cout<<"\t\t\t\t\t|                                                                                       |\n";
cout<<"\t\t\t\t\t|_______________________________________________________________________________________|\n";
cout<<"\t\t\t\t\t\n\n\n\n\t\t\t\t\t";
while (true){
        cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
cout<<"\t\t\t\t\t\t|             2  >> Delete Patient Record                         |\n";
cout<<"\t\t\t\t\t\t|             3  >> Search Patient Record                         |\n";
cout<<"\t\t\t\t\t\t|             4  >> Display All Patient Records                   |\n";
cout<<"\t\t\t\t\t\t|             5  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
a:cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>choice;
        switch(choice) {
            case 1:
                {
                    Patient p;
                    cout << "Enter bed number: ";
                    cin >> p.bed_number;
                    cout << "Enter name: ";
                    cin >> p.name;
                    cout << "Enter address: ";
                    cin >> p.address;
                    cout << "Enter age: ";
                    cin >> p.age;
                    cout << "Enter gender: ";
                    cin >> p.gender;
                    cout << "Any major disease suffered earlier: ";
                    cin >> p.mjdis;
                    db.add_patient(p);
                    break;
                }
            case 2:
                {
                    int bed_number;
                    cout << "Enter bed number of patient to delete: ";
                    cin >> bed_number;
                    db.delete_patient(bed_number);
                    break;
                }
            case 3:
                {
                    int bed_number;
                    cout << "Enter bed number of patient to search: ";
                    cin >> bed_number;
                    db.search_patient(bed_number);
                    break;
                }
            case 4:
                db.display_all_patients();
                break;
case 5:
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}