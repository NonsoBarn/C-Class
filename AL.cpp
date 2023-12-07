#include<iostream>
using namespace std;
void AL(){
	double BS,HA,TS,GP,Tax,Netpay;
	BS= 300000;
	HA= BS * 0.05;
	TS=BS* 0.2;
	GP=BS+HA+TS;
	Tax=GP*0.1;
	Netpay = GP-Tax;
	cout<< "AL Salary is"<< Netpay<< "\n";
	

	
};