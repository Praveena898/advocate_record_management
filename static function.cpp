#include<iostream>
using namespace std; 
class advocate
{
	int static count;
public:
	int static total()
	{
		return count;
	}
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
		count++;
	}
	advocate(string n,int en,int e,string s)
	{
		name= n;
		enrollment_no=en;
		experience= e;
		specialization= s;
		count++;
	}
	void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Enrollment no: "<<enrollment_no<<endl;
		cout<<"Experience: "<<experience<<endl;
		cout<<"Specialization: "<<specialization<<endl;
	}
};

int advocate::count = 0;

int main()
{
	int i, x, c;
	while(true)
	{
		cout << "+--------------------------+\n"
			 << "| Menu                     |\n"
			 << "+--------------------------+\n"
			 << "| 1. Enter Values Manually |\n"
			 << "| 2. Print Default Value   |\n"
			 << "| 3. Exit                  |\n"
			 << "+--------------------------+\n\n"
			 << "Enter choice: ";
		cin >> c;
		switch(c)
		{
			case 1:
				cout << "how many records: " << endl;
	    		cin >> x;
				for(i = 0; i < x; i++)
				{
				    string a;
				    int b;
				    int c;
			    	string d;
			    	cout << "Name: " << endl;
			    	cin >> a;
			    	cout << "Enrollment no: " << endl;
		    		cin >> b;
			    	cout << "Experience: " << endl;
			    	cin >> c;
			    	cout << "Specialization: " << endl;
		    		cin >> d;
	    	    	advocate a1(a,b,c,d);
	    		    a1.display();	
		    	}
	    		break;
		    case 2:
				cout << "how many records: "<< endl;
			    cin >> x;
				for(int i = 0; i < x; i++)
				{
        	    	advocate obj;
            		obj.display();
		        }
		        break;
		    case 3:
		    	cout<<"Total Records Inserted: "<<advocate::total();
				return 0;
		}
	}
}
