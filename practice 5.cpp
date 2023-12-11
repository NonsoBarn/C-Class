#include <iostream>
using namespace std;

int main(){
	//Diplaying available grades
	
	cout<<"Available grades:"<<endl;
	cout<<"1. Grade 1"<<endl;
	cout<<"2. Grade 2"<<endl;
	cout<<"3. Grade 3"<<endl;
	cout<<"4. Grade 4"<<endl;
	cout<<"5. Grade 5"<<endl;
	
	
	//declaring user choice
	
	int choice;
	
	cout<<"please input your choice from (1-5)"<<endl;
	cin>> choice;
	
	
	switch(choice){
		case 1:
			cout<<"Grade 1 fabrics cost #100,000";
			break;
			
		case 2:
			cout<<"Grade 2 fabrics cost #250,000";
			break;
		
		case 3:
			cout<<"Grade 3 fabrics cost #380,000";
			break;
			
		case 4:
			cout<<"Grade 4 fabrics cost #500,000";
			break;
			
		case 5:
			cout<<"Grade 5 fabrics cost #620,000";
			break;
			
		default:
			cout<< "Wrong input, please input number from (1-5)";
	}
}