#include<iostream>
using namespace std;
class case1{
	public:
		int c_no;
		string c_name,adv,cl;
		virtual void input(){
			cout<<"CASE DETAILS\n";
			cout<<"Enter Case Number: "<<endl;
			cin>>c_no;
			cout<<"Enter Case Name: "<<endl;
			cin.ignore();
			getline(cin, c_name);
			cout<<"Enter Advocate Name: "<<endl;
	    	getline(cin, adv);
	    	cout<<"Enter Client Name: "<<endl;
		    getline(cin, cl);
		    detail();
			
		}
		void detail(){
			cout << "Case Number: " << c_no << endl;
            cout << "Case Name: " << c_name << endl;
            cout << "Advocate Name: " << adv << endl;
            cout << "Client Name: " << cl << endl;
		}
};
class pay: public case1{
	public:
	void input(){
		case1 :: input();
	}
	void calculate(){
		int ch,i,pay=0,amt;
		cout<<"How Many Payments: "<<endl;
		cin>>ch;
		for(i=0;i<ch;i++){
			cout<<"Enter amount: "<<endl;
			cin>>amt;
			pay+= amt;
		}
		cout<<"Total Amount: "<<pay<<endl;
	}
	~pay(){
		cout<<"Thank You"<<endl;
	}
};
int main(){
	case1* ptr;
	pay obj;
	ptr= &obj;
	int ch,i;
	cout<<"How Many Records: "<<endl;
	cin>>ch;
	for(i=0;i<ch;i++){
		int choice;
		cout<<"1. Enter Case Details: "<<endl;
		cout<<"2. Enter Payment details: "<<endl;
		cout<<"3. Enter Both Details: "<<endl;
		cout<<"Enter Your Choice[1/2/3]: "<<endl;
		cin>>choice;
		switch (choice){
			case 1:
				ptr->input();
				break;
			case 2:
				obj.calculate();
				break;
			case 3:
				ptr->input();
				obj.calculate();
		    	break;
			default:
				cout<<"Invalid Choice: ";
				
		}
	}
}
