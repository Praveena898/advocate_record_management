#include <iostream>
#include<cstring>
using namespace std;

class adv{
private:
    char* name;
	int enrollment;        

public:
    adv(const char* n, int en) : enrollment(en) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
		cout << "Advocate record created: " << name << " Having Enrollment Number: " << enrollment << endl;
    }

    // Destructor
    ~adv() {
        // Deallocate memory for name and cases
        delete[] name;
        cout << "Advocate record deleted for Enrollment Number: " << enrollment << endl;
    }

    void display() const {
        cout << "Advocate Name: " << name << endl;
        cout << "Advocate Enrollment Number: " << enrollment << endl;
    }
};
void record(){
		int enrol;
    string adv_name;
    cout<<"Enter Name: "<<endl;
    cin>>adv_name;
    cout<<"Enter Enrollment Number: "<<endl;
    cin>>enrol;
    adv ad(adv_name.c_str(), enrol);
    ad.display();
	}

int main() {
	int ch;
	int i;
	cout<<"How Many Records: "<<endl;
	cin>>ch;
	
	for(i=0;i<ch;i++){
		record();
	}
    

    return 0;  
}

