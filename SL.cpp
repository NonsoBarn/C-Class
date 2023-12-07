#include<iostream>
using namespace std;
void SL(){
	double BS,HA,TS,GP,Tax,Netpay;
	BS= 300000;
	HA= BS * 0.10;
	TS=BS* 0.20;
	GP=BS+HA+TS;
	Tax=GP*0.1;
	Netpay = GP-Tax;
	cout<< "SL Salary is"<< Netpay<< "\n";
	

	
};