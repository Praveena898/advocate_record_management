#include<iostream>
using namespace std;
class adv{
	private:
		string name;
		int case_no;
		int fee;
	public:
		adv(string a_name,int c_no,int c_fee):	name(a_name), case_no(c_no), fee(c_fee){
		}	
		friend void display(adv a)	;
};
void display(adv a){
	cout<<"Name: "<<a.name<<endl;
	cout<<"Case_no: "<<a.case_no<<endl;
	cout<<"Fee: Rs. "<<a.fee<<endl;
}
int main(){
	adv a("Princy",19845,5000);
	adv b("Dhruvi",83765,20000);
	display(a);
	display(b);
	return 0;
}

