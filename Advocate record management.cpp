#include <iostream>
#include <string>
using namespace std;

class Client {
public:
    int* c_id;
    int* mobile_no;
    int* age;
    string* name;
    string* email;
    int total;

    Client(int entries) {
        total = entries;
        c_id = new int[total];
        mobile_no = new int[total];
        age = new int[total];
        name = new string[total];
        email = new string[total];
    }

    ~Client() {
        delete[] c_id;
        delete[] mobile_no;
        delete[] age;
        delete[] name;
        delete[] email;
    }

    void details() {
        for (int i = 0; i < total; i++) {
            cout << "ENTER CLIENT DETAILS\n";
            cout << "Client Id: ";
            cin >> c_id[i];
            cin.ignore();
            cout << "Client Name: ";
            getline(cin, name[i]);
            cout << "Email Id: ";
            getline(cin, email[i]);
            cout << "Age: ";
            cin >> age[i];
            cin.ignore();
            cout << "Mobile Number: ";
            cin >> mobile_no[i];
            cin.ignore();
        }
    }

    void display() {
        for (int i = 0; i < total; i++) {
            cout << "\nCLIENT DETAILS:\n";
            cout << "Client Id: " << c_id[i] << endl;
            cout << "Client Name: " << name[i] << endl;
            cout << "Age: " << age[i] << endl;
            cout << "Mobile Number: " << mobile_no[i] << endl;
            cout << "Email Id: " << email[i] << endl;
        }
    }
};

class Advocate {
public:
    int* enrollment;
    int* mobile;
    int* experience;
    string* name;
    string* specialization;
    string* email;
    int total;

    Advocate(int entries) {
        total = entries;
        enrollment = new int[total];
        mobile = new int[total];
        experience = new int[total];
        name = new string[total];
        specialization = new string[total];
        email = new string[total];
    }

    ~Advocate() {
        delete[] enrollment;
        delete[] mobile;
        delete[] experience;
        delete[] name;
        delete[] specialization;
        delete[] email;
    }

    void a_details() {
        for (int i = 0; i < total; i++) {
            cout << "ENTER ADVOCATE DETAILS\n";
            cout << "Enrollment Number: ";
            cin >> enrollment[i];
            cin.ignore();
            cout << "Name: ";
            getline(cin, name[i]);
            cout << "Experience (Years): ";
            cin >> experience[i];
            cin.ignore();
            cout << "Specialization: ";
            getline(cin, specialization[i]);
            cout << "Email Id: ";
            getline(cin, email[i]);
            cout << "Mobile Number: ";
            cin >> mobile[i];
            cin.ignore();
        }
    }

    void a_display() {
        for (int i = 0; i < total; i++) {
            cout << "\nADVOCATE DETAILS:\n";
            cout << "Enrollment Number: " << enrollment[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Experience: " << experience[i] << " Years" << endl;
            cout << "Specialization: " << specialization[i] << endl;
            cout << "Mobile Number: " << mobile[i] << endl;
            cout << "Email Id: " << email[i] << endl;
        }
    }
};

class Case : public Client, public Advocate {
public:
    int* case_no;
    string* case_name;
    string* case_type;
    int total;

    Case(int c_entries, int cl_entries, int adv_entries) : Client(cl_entries), Advocate(adv_entries) {
        total = c_entries;
        case_no = new int[total];
        case_name = new string[total];
        case_type = new string[total];
    }

    ~Case() {
        delete[] case_no;
        delete[] case_name;
        delete[] case_type;
    }

    void c_details() {
        for (int i = 0; i < total; i++) {
            cout << "ENTER CASE DETAILS\n";
            cout << "Case Number: ";
            cin >> case_no[i];
            cin.ignore();
            cout << "Case Name: ";
            getline(cin, case_name[i]);
            cout << "Case Type: ";
            getline(cin, case_type[i]);
        }
    }

    void c_display() {
        for (int i = 0; i < total; i++) {
            cout << "\nCASE DETAILS:\n";
            cout << "Case Number: " << case_no[i] << endl;
            cout << "Case Name: " << case_name[i] << endl;
            cout << "Case Type: " << case_type[i] << endl;
        }
    }
};

class Payment : public Case {
public:
    float* amount;
    int count;

    Payment(int c_entries, int cl_entries, int adv_entries, int pay_count) : Case(c_entries, cl_entries, adv_entries) {
        count = pay_count;
        amount = new float[count];
    }

    ~Payment() {
        delete[] amount;
    }

    void pay() {
        for (int i = 0; i < count; i++) {
            cout << "Enter Payment Amount: ";
            cin >> amount[i];
        }
        total_amount();
    }

    float operator+() const {
        float totalAmount = 0;
        for (int i = 0; i < count; i++) {
            totalAmount += amount[i];
        }
        return totalAmount;
    }

    void total_amount() const {
        cout << "\nTotal Payment Amount: " << +(*this) << endl;
    }
};

int main() {
    int c_entries, cl_entries, adv_entries, pay_count;
    cout << "Enter number of clients: ";
    cin >> cl_entries;
    cout << "Enter number of advocates: ";
    cin >> adv_entries;
    cout << "Enter number of cases: ";
    cin >> c_entries;
    cout << "Enter number of payments: ";
    cin >> pay_count;

    Payment p(c_entries, cl_entries, adv_entries, pay_count);

    int choice;
    cout << "\nMENU\n1. Enter Client Details\n2. Enter Advocate Details\n3. Enter Case Details\n4. Enter Payment Details\n";
    cout << "Enter Your Choice (1/2/3/4): ";
    cin >> choice;

    if (choice == 1) {
        p.details();
        p.display();
    } else if (choice == 2) {
        p.a_details();
        p.a_display();
    } else if (choice == 3) {
        p.c_details();
        p.c_display();
    } else if (choice == 4) {
        p.pay();
    } else {
        cout << "Invalid Choice" << endl;
    }

    return 0;
}
