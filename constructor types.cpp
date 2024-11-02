#include<iostream>
using namespace std; 
class advocate{
	public:
		string name;
		int enrollment_no;
		int experience;
		string specialization;
		advocate()
		{
			name= "advocate";
			enrollment_no= 0;
			experience= 0;
			specialization= "NULL";
		}
		advocate(advocate &a)
		{
			name = a.name;
			enrollment_no = a.enrollment_no;
			experience = a.experience;
			specialization = a.specialization;
		}
		void display()
		{
			cout<<"Advocate Details "<<endl;
			cout<<"Name: "<<endl;
			cin>>name;
			cout<<"Enrollment no: "<<endl;
			cin>>enrollment_no;
			cout<<"Experience: "<<endl;
			cin>>experience;
			cout<<"Specialization: "<<endl;
			cin>>specialization;
		}
	};

int main(){
	advocate b;
	advocate a;	
	a.display();
	advocate a1(a);
	cout<<"Advocate Details "<<endl;
	cout<<"Default values: "<<endl;
	cout<<"Advocate "<< b.name <<" having enrollment no "<< b.enrollment_no <<" is specialized in "<< b.specialization <<
	" and has experience of "<< b.experience <<" years"<<endl;
	cout<<"Advocate "<< a.name <<" having enrollment no "<< a.enrollment_no <<" is specialized in "<< a.specialization <<
	" and has experience of "<< a.experience <<" years"<<endl;
	cout<<"Recheck the values"<<endl;
	cout<<"Advocate "<< a1.name <<" having enrollment no "<< a1.enrollment_no <<" is specialized in "<< a1.specialization <<
	" and has experience of "<< a1.experience <<" years"<<endl;	
}

