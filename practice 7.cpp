#include <iostream>
using namespace std;

int main(){
	int network, amount;
	
	for (int i = 0; i < 5; ++i) {
	cout<< "Welcome to the airtime purchase system"<<endl;
	cout<< "Please enter\n 1 for MTN\n 2 for GLO\n 3 for Airtel\n 4 for 9mobile"<<endl;
	cin>> network;
	
	switch(network){
		case 1:
			cout<< "Welcome to MTN" << endl;
			cout<< "How MTN airtime will you like to buy? Enter\n 1 for 100\n 2 for 200\n 3 for 500"<< endl;
			cin>> amount;
			
		
			if(amount == 1){
				cout<< "You have been credited with #100 worth of airtime";
			}else if(amount == 2){
				cout<< "You have been credited with #200 worth of airtime";
			}else if(amount == 3){
				cout<< "You have been credited with #500 worth of airtime";
			}else {
				
				cout<<"Invalid input, please try again";
			}
			break;
			      
			
		case 2:	      
			cout<< "Welcome to GLO" << endl;
			cout<< "How GLO airtime will you like to buy? please try again"<< endl;
			cin>> amount;
			
			if(amount == 1){
				cout<< "You have been credited with #100 worth of airtime";
			}else if(amount == 2){
				cout<< "You have been credited with #200 worth of airtime";
			}else if(amount == 3){
				cout<< "You have been credited with #500 worth of airtime";
			}else {
				cout<<"Invalid input, please try again";
			}
			break;
		
		case 3:
			cout<< "Welcome to Airtel" << endl;
			cout<< "How Airtel airtime will you like to buy? Enter\n 1 for 100\n 2 for 200\n 3 for 500"<< endl;
			cin>> amount;
			
			if(amount == 1){
				cout<< "You have been credited with #100 worth of airtime";
			}else if(amount == 2){
				cout<< "You have been credited with #200 worth of airtime";
			}else if(amount == 3){
				cout<< "You have been credited with #500 worth of airtime";
			}else {
				cout<<"Invalid input, please try again";
			}
			break;
			
		case 4:
			cout<< "Welcome to 9mobile" << endl;
			cout<< "How 9mobile airtime will you like to buy? Enter\n 1 for 100\n 2 for 200\n 3 for 500"<< endl;
			cin>> amount;
			
			if(amount == 1){
				cout<< "You have been credited with #100 worth of airtime";
			}else if(amount == 2){
				cout<< "You have been credited with #200 worth of airtime";
			}else if(amount == 3){
				cout<< "You have been credited with #500 worth of airtime";
			}else {
				cout<<"Invalid input, please try again";
			}
			break;
			
		default:
			cout<<"Invalid input, please try again"<<endl;
			  --i; // Decrement the loop variable to repeat the current iteration
                continue;
            
	}
		
		
		
	}
	
}