/* SWITCH CASE
Nigerian Communication commision consulted you to develop an app that will allow customers switch to different networks and buy call cards
Write a switch statement that will the customer to switch to different network and buy any amount of call card or data.
Use switvh case to select the network and compound if to select the card
*/

#include <iostream>
using namespace std;
int main(){
int network, Trans;
float Amount;

cout<< "Welcome NCC\n Enter\n 1 for MTN\n 2 for GLO\n 3 for 9mobile\n 4 for Airtel\n";
cin>>network;
switch(network){
	/////////////////////////////////////////////// MTN
	case 1: 
	cout<< "Welcom to MTN";
	cout<< "Enter 1 for Data\n or 2 for Airtime";
	cin>>Trans;
	if(Trans == 1) {
		cout<< "Enter the amount of data you'll like to buy\n";
		cin>> Amount;
		cout<< "You have been credit " << Amount << "Naira, worth of data";
	}else if (Trans == 2){
		cout<< "Enter the amount of Airtime you'll like to buy\n";
		cin>> Amount;
		cout<< "You have been credit " << Amount << "Naira, worth of Airtime";
	}else {
		cout<< "Invalid Input";
	}
	break;
	
	//////////////////////////////////////////// GLO
	case 2: 
		cout<< "Welcom to GLO";
	cout<< "Enter 1 for Data\n or 2 for Airtime\n";
	cin>>Trans;
	if(Trans == 1) {
		cout<< "Enter the amount of data you'll like to buy\n";
		cin>> Amount;
		cout<< "You have been credit " << Amount << "Naira, worth of data";
	}else if (Trans == 2){
		cout<< "Enter the amount of Airtime you'll like to buy\n";
		cin>> Amount;
		cout<< "You have been credit " << Amount << "Naira, worth of Airtime";
	}else {
		cout<< "Invalid Input";
	}
	break;
	
		//////////////////////////////////////////// 9Mobile
	case 3: 
	cout<< "Welcom to 9Mobile";
	cout<< "Enter 1 for Data\n or 2 for Airtime\n";
	cin>>Trans;
	if(Trans == 1) {
		cout<< "Enter the amount of data you'll like to buy\n";
		cin>> Amount;
		cout<< "You have been credit " << Amount << "Naira, worth of data";
	}else if (Trans == 2){
		cout<< "Enter the amount of Airtime you'll like to buy\n";
		cin>> Amount;
		cout<< "You have been credit " << Amount << "Naira, worth of Airtime";
	}else {
		cout<< "Invalid Input";
	}
	break;
	
	
		//////////////////////////////////////////// Airtel
	case 4: 
	cout<< "Welcom to Airtel";
	cout<< "Enter 1 for Data\n or 2 for Airtime\n";
	cin>>Trans;
	if(Trans == 1) {
		cout<< "Enter the amount of data you'll like to buy\n";
		cin>> Amount;
		cout<< "You have been credit " << Amount << "Naira, worth of data\n";
	}else if (Trans == 2){
		cout<< "Enter the amount of Airtime you'll like to buy\n";
		cin>> Amount;
		cout<< "You have been credit " << Amount << "Naira, worth of Airtime";
	}else {
		cout<< "Invalid Input";
	}
	break;
}
}