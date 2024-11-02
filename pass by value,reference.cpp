#include<iostream>
using namespace std;

class advocate {
    private:
    	int age;
        int experience;
    public:
    	int enrollment_no;
        string name;
        string specialization;
        advocate() {
            name = "advocate";
            enrollment_no = 0;
            experience = 6;
            specialization = "NULL";
            age= 0;
        }
        advocate(string n, int en, int e, string s,int a) {
            name = n;
            enrollment_no = en;
            experience = e;
            specialization = s;
            age= a;
        }
        void update_experience(int &new_experience) {
            new_experience += 5;
        }
        void set_age(int age) {
            age += 2;
        }
        void display() {
        	cout<<endl;
        	cout<<"Default Value: "<<endl;
        	cout<<endl;
            cout << "Name: " << name << endl;
            cout << "Enrollment no: " << enrollment_no << endl;
            cout << "Experience: " << experience << endl;
            cout << "Specialization: " << specialization << endl;
            cout<<"Age: "<<age<<endl;
        }
    };
        int main() {
        	advocate obj;
        	int new_experience;
            int temp_age;
            cout<<"Enter Age: "<<endl;
        	cin>>temp_age;
            obj.set_age(temp_age);
            cout << "age after pass by value (should be unchanged): " <<temp_age << endl;
            cout<<"Enter new Experience: "<<endl;
        	cin>>new_experience;
        	obj.update_experience(new_experience);
        	cout << "New Experience (will change reference): " <<new_experience << endl;
			obj.display();
			return 0;
		}
