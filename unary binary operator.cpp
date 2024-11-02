 #include <iostream>
using namespace std;

class Advocate {
public:
    string name;
    int case_no, en, count;
    float amount, total;
    Advocate() : count(0), total(0.0) {}
    void operator++() {
        ++count;
    }
    void operator+=(float case_salary) {
        total += case_salary;
    }
    void add_case() {
        cout << "Enter Case No.: ";
        cin >> case_no;
        ++count;  
        float case_salary;
        cout << "Enter Salary for this case: ";
        cin >> case_salary;
        total += case_salary;  
    }
    void details() {
        cout << "Enter Advocate Name: ";
        cin >> name;
        cout << "Enter Enrollment No.: ";
        cin >> en;

        char ch;
        do {
            add_case();
            cout << "Do you want to add another case? (y/n): ";
            cin >> ch;
        } while (ch == 'y' || ch == 'Y');
    }
    void display() {
        cout << "Advocate Name: " << name << endl;
        cout << "Enrollment No.: " << en << endl;
        cout << "Total Cases: " << count << endl;
        cout << "Total Salary: " << total << endl;
    }
};

int main() {
    int c;
    cout << "How many records: ";
    cin >> c;
    Advocate adv[c];  
    for (int i = 0; i < c; i++) {
        adv[i].details();
    }
    for (int i = 0; i < c; i++) {
        adv[i].display();
    }

    return 0;
}

