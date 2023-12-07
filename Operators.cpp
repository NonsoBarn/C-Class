#include<iostream>
using namespace std;
int main(){
	string customerName;
	double Account, Deposit, Withdrawal;
	Account=0;
	cout<<"Kindly Enter your Name\n";
	getline(cin, customerName);

// DEPOSIT
//	
	cout<< "Enter the Amount, you want to deposit\n";
	cin>>Deposit;
	Account=Deposit;
	
	cout<<customerName<<"Deposited Amount:"<<Deposit<<"\n"<<"Current Account Balance:"<<Account<<"\n";
//	
	cout<< "Enter the Amount, you want to deposit\n";
	cin>>Deposit;
	Account+=Deposit;
	cout<<customerName<<"Deposited Amount:"<<Deposit<<"\n"<<"Current Account Balance:"<<Account<<"\n";
	symtem(cls);
//	
	cout<< "Enter the Amount, you want to deposit\n";
	cin>>Deposit;
	Account+=Deposit;
	cout<<customerName<<"Deposited Amount:"<<Deposit<<"\n"<<"Current Account Balance:"<<Account<<"\n";
	
// WITHDRAWAL
//	
	cout<< "Please Enter the Amount, you want to withdraw\n";
	cin>>Withdrawal;
	Account-=Withdrawal;
	cout<<customerName<<"Withdrawn Amount:"<<Withdrawal<<"\n"<<"Current Account Balance:"<<Account<<"\n";
//	
	cout<< "Please Enter the Amount, you want to withdraw\n";
	cin>>Withdrawal;
	Account-=Withdrawal;
	cout<<customerName<<"Withdrawn Amount:"<<Withdrawal<<"\n"<<"Current Account Balance:"<<Account<<"\n";
}