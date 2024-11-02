
#include<iostream>
using namespace std;
class adv{
	public:
		string name[6];
		int enrollment[6];
		adv(){
			name[0]="Praveena";
			name[1]="Sarah";
			name[2]="Rachel";
			name[3]="Fay";
			name[4]="Chandra";
			name[5]="Thejus";
			
		enrollment[0] = 18745;
        enrollment[1] = 98453;
        enrollment[2] = 29845;
        enrollment[3] = 75432;
        enrollment[4] = 82765;
        enrollment[5] = 37645;	
		}
		string& operator[](int value) {
        return name[value]; 
    }
    int en(int index) {
        return enrollment[index];
    }
    ~adv(){
    	cout<<"Thank You";
	}
};
int main(){
	adv obj;
	int c;
	cout<<"+------------------------+"<<endl;
	cout<<"| SR No.   | Enrollment No|"<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"|  1       |        18745 |"<<endl;
	cout<<"|  2       |        98453 |"<<endl;
	cout<<"|  3       |        29845 |"<<endl;
	cout<<"|  4       |        75432 |"<<endl;
	cout<<"|  5       |        82765 |"<<endl;
	cout<<"|  6       |        37645 |"<<endl;
	cout<<"+------------------------+"<<endl;
	cout<<"Enter Serial No.: "<<endl;
	cin>>c;
	if(c>=1 && c<=6){
		 cout << "Advocate Details" << endl;
        cout << "Enrollment No: " << obj.en(c - 1) << endl;
        cout << "Advocate: " << obj[c - 1] << endl;
	}
	else
	cout<<"Invalid Choice"<<endl;
	}
