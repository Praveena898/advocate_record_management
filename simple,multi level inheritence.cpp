#include<iostream>
using namespace std;
class case1{
	public:
		string c_no;
		string c_name, advocate;
		case1()
		{
			cout<<"Enter Case Details "<<endl;
			cout<<"Enter Case Number: "<<endl;
			cin>>c_no;
			cout<<"Enter Case Name: "<<endl;
			cin.ignore();
			getline(cin, c_name);
		}
};
class adv : public case1{
	public:
	    int en,p_no,ex,phone;
	    string email,cl,spe,mail;
	void a_details(){
		cout<<"Enter Advocate Details"<<endl;
		cout<<"Enter Enrollment Number: "<<endl;
		cin>>en;
		cout<<"Enter Advocate Name: "<<endl;
		cin.ignore();
		getline(cin, advocate);
		cout << "Enter Phone Number: ";
        cin >> p_no;
        cout << "Enter Email ID: ";
        cin >> email;
		cout<<"Enter Experience: "<<endl;
		cin>>ex;
		cout<<"Enter Your Specialization: "<<endl;
		cin.ignore();
		getline(cin, spe);
	}
	void a_details(int p,string mail,string n){
		p_no= p;
		email= mail;
		advocate= n;
		cout<<"\nADVOCATE CONTACT DETAILS\n";
		cout << "Advocate: " << advocate << endl;
		cout << "Phone Number: " << p_no << endl;
        cout << "Email: " << email << endl;
	}
};
class client : public adv{
	public:
	int a_no;
	void c_details(){
		cout<<"Enter Client Details"<<endl;
		cout<<"Enter Client Name: "<<endl;
		getline(cin, cl);
		cout<<"Enter Adhaar Number: "<<endl;
		cin>>a_no;
		cout<<"Enter Phone Number: "<<endl;
		cin>>phone;
		cout<<"Enter Email ID: "<<endl;
		cin>>mail;
		cout<<endl;
	}
	void display(){
		cout << "\nDETAILS OF CASE:\n";
        cout << "Case Number: " << c_no << endl;
        cout << "Case Name: " << c_name << endl;
        cout << "Advocate: " << advocate << endl;
        cout << "Client: " << cl << endl;

        cout << "\nADVOCATE DETAILS:\n";
        cout << "Advocate: " << advocate << endl;
        cout << "Enrollment: " << en << endl;
        cout << "Experience: " << ex << " years" << endl;
        cout << "Specialization: " << spe << endl;

        cout << "\nCLIENT DETAILS:\n";
        cout << "Client: " << cl << endl;
        cout << "Adhaar No: " << a_no << endl;
        cout << "Phone Number: " << phone << endl;
        cout << "Email: " << mail << endl;
	}
	~client(){
		cout<<"THANK YOU!!";
	}
};
int main(){
	int ch,i;
	cout<<"How many records you want to insert"<<endl;
	cin>>ch;
	for(i=0;i<ch;i++){
		client obj;
	    obj.a_details();
	    obj.c_details();
	    obj.display();
	    obj.a_details(obj.p_no, obj.email,obj.advocate);
	}
	/*obj.input();
	obj.a_details();
	obj.c_details();
	obj.display();*/
}
