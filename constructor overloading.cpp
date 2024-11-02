#include<iostream>
using namespace std; 
class advocate{
	public:
		string name;
		int enrollment_no;
		int experience;
		string specialization;
		advocate(){
		    name= "advocate";
			enrollment_no= 0;
			experience= 0;
			specialization= "NULL";
		}
		advocate(string n,int en,int e,string s){
			name= n;
			enrollment_no=en;
			experience= e;
			specialization= s;
		}
		void display(){
			cout<<"Name: "<<name<<endl;
			cout<<"Enrollment no: "<<enrollment_no<<endl;
			cout<<"Experience: "<<experience<<endl;
			cout<<"Specialization: "<<specialization<<endl;
	}
	
};
int main(){
	int i,x;
	char c;
	cout<<"Printing Default value"<<endl;
	    	advocate obj;
	    	obj.display();
	    	cout<<"Do you want to insert record manually[Y/N]: "<<endl;
	    	cin>>c;
	    	if (c== 'Y' || c== 'y'){
	    		cout<<"how many records: "<<endl;
	    cin>>x;
	    while(i<x){
		    string a;
		    int b;
		    int c;
		    string d;
		    cout<<"Name: "<<endl;
		    cin>>a;
		    cout<<"Enrollment no: "<<endl;
		    cin>>b;
		    cout<<"Experience: "<<endl;
		    cin>>c;
		    cout<<"Specialization: "<<endl;
		    cin>>d;
	        advocate a1(a,b,c,d);
    	    a1.display();
    	    i++;
	}
			}
		else 
		cout<<"Thank You";

	
	
}
