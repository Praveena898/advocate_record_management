#include<iostream>
using namespace std;
class case1{
	public:
		int a_no,p_no,en,ex,phone;
		string c_no;
		string c_name,email, advocate,cl,spe,mail;
		void input(){
			cout<<"Enter Case Details "<<endl;
			cout<<"Enter Case Number: "<<endl;
			cin>>c_no;
			cout<<"Enter Case Name:"<<endl;
			cin.ignore();
			getline(cin, c_name);
			cout<<"Enter Advocate Name:"<<endl;
		    getline(cin, advocate);
		    cout<<"Enter Client Name:"<<endl;
		    getline(cin, cl);
		    case_detail();
		}
		void case_detail(){
			cout << "DETAILS OF CASE:\n";
            cout << "Case Number: " << c_no << endl;
            cout << "Case Name: " << c_name << endl;
            cout << "Advocate: " << advocate << endl;
            cout << "Client: " << cl << endl;
		}
};
class adv : public case1{
	public:
		string a;
	void a_details(){
		cout<<"Enter Advocate Details"<<endl;
		cout<<"Enter Enrollment Number: "<<endl;
		cin>>en;
		cout<<"Enter Advocate Name:"<<endl;
		cin.ignore();
		getline(cin, advocate);
		cout<<"Enter Phone Number: "<<endl;
		cin>>p_no;
		cout<<"Enter Email ID: "<<endl;
		cin>>email;
		cout<<"Enter Experience: "<<endl;
		cin>>ex;
		cout<<"Enter Your Specialization: "<<endl;
		cin.ignore();
		getline(cin, spe);
		adv_detail();
	}
	void adv_detail(){
		cout << "\nADVOCATE DETAILS:\n";
        cout << "Advocate: " << advocate << endl;
        cout << "Enrollment: " << en << endl;
        cout << "Phone Number: " << p_no << endl;
        cout << "Email: " << email << endl;
        cout << "Experience: " << ex << " years" << endl;
        cout << "Specialization: " << spe << endl;
	}
};
class client : public case1{
	public:
		string clt;
		int payment=0;
	void c_details(){
		cout<<"Enter Client Details"<<endl;
		cout<<"Enter Client Name:"<<endl;
		cin.ignore();
		getline(cin, cl);
		cout<<"Enter Adhaar Number: "<<endl;
		cin>>a_no;
		cout<<"Enter Phone Number: "<<endl;
		cin>>phone;
		cout<<"Enter Email ID: "<<endl;
		cin>>mail;
		cout<<endl;
		client_detail();
	}
	void client_detail(){
		cout << "\nCLIENT DETAILS:\n";
        cout << "Client: " << cl << endl;
        cout << "Adhaar No: " << a_no << endl;
        cout << "Phone Number: " << phone << endl;
        cout << "Email: " << mail << endl;
	}
	/*void display(){
		case_detail();
		adv_detail();
		client_detail();
	}*/
};
class pay: public adv, public client{
	public:
		int ch,i,total=0;
		void amount(){
			string ad,clt;
			cout<<"Enter Advocate Name: "<<endl;
			cin.ignore();
		    getline(cin, ad);
		    cout<<"Enter client Name: "<<endl;
			cin.ignore();
		    getline(cin, clt);
			cout<<"How many Payment records you want to insert"<<endl;
		    cin>>ch;
		    for(i=0;i<ch;i++){
		    	cout<<"Enter Amount: "<<endl;
		    	cin>>payment;
		    	total+= payment;
			}
			cout<<"Advocate Name: "<<ad<<endl;
		    cout<<"Client Name: "<<clt<<endl;
			cout<<"Total Amount: "<<total<<endl;
		}
		/*void totl(){
		   cout<<"Advocate Name: "<<adv<<endl;
		   cout<<"Client Name: "<<clt<<endl;
		   cout<<"Total Amount: "<<total<<endl;
		}*/
		~pay(){
			cout<<"Thank You";
		}
		
};
int main(){
     case1 c;
	 pay obj;
	int ch,i;
	cout<<"How many records you want to insert"<<endl;
	cin>>ch;
	for(i=0;i<ch;i++){
		int choice;
		cout<<"1. Enter Case details "<<endl;
		cout<<"2. Enter Advocate details "<<endl;
		cout<<"3. Enter Client details "<<endl;
		cout<<"4. Enter Payment details "<<endl;
		cout<<"5. Enter all the details"<<endl;
		cout<<"Enter Choice"<<endl;
		cin>>choice;
		if(choice== 1){
			c.input();
		}
		else if(choice== 2){
			obj.a_details();
		}
		else if(choice== 3){
			obj.c_details();
		}
		else if(choice== 4){
			obj.amount();
		}
		else if(choice== 5){
			c.input();
	        obj.a_details();
	        obj.c_details();
	        obj.amount();
		}
		else
		cout<<"Wrong Choice";
		
	}
}
	

