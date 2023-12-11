#include <iostream>
using namespace std;

int main(){
	
	// defining constants to hold percentage
	
	const double midterm_percent = 0.2;
	const double progAss_Percent = 0.1;
	const double finalExam_Percent = 0.4;
	
	
	// Taking user input
	
	double midterm1, midterm2, progAss1, progAss2, finalExam ;
	
	cout<< "Enter 1st midTerm score"<< endl;
	cin>> midterm1;
	
	cout<< "Enter 2nd midTerm score"<< endl;
	cin>> midterm2;
	
	
	cout<< "Enter 1st programming assigment score"<< endl;
	cin>> progAss1;
	
	cout<< "Enter 2nd programming assigment score"<< endl;
	cin>> progAss2;
	
	cout<<"Enter final exam score" << endl;
	cin>> finalExam;
	
//	calculate

	double finalScore = (midterm1 + midterm2) * midterm_percent + (progAss1 + progAss2) * progAss_Percent + finalExam * finalExam_Percent;
	
	
	cout<< "Final score is: " << finalScore << endl;

}