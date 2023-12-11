#include <iostream>
using namespace std;

int main(){
	
	double age, weight;
	
	//taking user input
	
	cout<< "Please input your age"<< endl;
	cin>> age;
	
	cout<< "Please input weight in kg" << endl;
	cin>> weight;
	
	if(weight < 50 && age <= 13){
		cout<<"You qualify to play the under 13 league";
	}else if(weight > 50 && weight < 60 && age <= 14) {
		cout<<"You qualify to play the under 14 league";
	}else if(weight >= 60 && weight <80 && age <=15){
		cout<<"You qualify to play the under 15 league";
	}else if(weight > 80 && weight < 100 && age <= 17){
		cout<<"You qualify to play the under 17 league";	
	}else if(weight > 80 && age > 17){
		cout<<"You qualify to play the professional league";
	}
	
	
}