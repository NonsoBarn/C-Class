#include <iostream>
using namespace std;

int main(){
	string studentName, registrationStatus, country;
	int jambScore, age, postUME;
	
	
	// Collecting user input
	
	cout<< "Please input your name." << endl;
	cin>> studentName;
	
	cout<< "Please input jamb score." << endl;
	cin>> jambScore;
	
	cout<< "please input your age." << endl;
	cin>> age;
	
	cout<< "Please input your PostUME score"<< endl;
	cin>> postUME;
	
	cout<<"Please input country of origin"<< endl;
	cin>> country;
	
	cout<< "Have you registered with Babcock university online? please input 'yes' or 'no'." << endl;
	cin>> registrationStatus;
	
	
    // Checking admission qualification
    
    if(jambScore >= 180 && age >= 16 && postUME >= 50 && (country == "Nigeria" || country == "nigeria") && (registrationStatus == "yes" || registrationStatus == "Yes")){
    	cout<< studentName << " you meet all requirement to be admitted to Babcock University";
	}else{
		cout<< studentName << " you do not meet all requirement to be admitted to Babcock University";
	}
	
	
	
	
	
}