#include <iostream>
using namespace std;

int main() {
	string name;
	int age;
	float weight;
	
	cout<<"Welcome to the Nigerian Footbal Federation, football competition\n";
	cout<<"Enter Your Name\n";
	getline(cin, name);
	cout<<"Enter Your Age\n";
	cin>>age;
	cout<<"Enter Your Weight\n";
	cin>>weight;
	
	// under 13 league
	if(weight < 50 && age == 13){
		cout<<name<<" You qualify to play the Under 13 league\n";
	
	// under 14 league
}else if(weight > 50 && weight <= 60 && age <= 14){
	cout<<name<<" You qualify to play the Under 14 league\n";
	
	// under 15 league
} else if (weight >60&& weight <=80 && age <= 15 ){
	cout<<name<<"  You qualify to play the Under 15 league\n";
	
	// under 17 league
} else if (weight >80&& weight <=100 && age <= 17 ){
	cout<<name<<"  You qualify to play the Under 17 league\n";
	
	// pro league
} else if (weight >80 && age < 17 ){
	cout<<name<<"  You qualify to play the Professional league\n";}

	else{
		cout<<"you do not meet the age/weight requiremnet for all available leagues";
	}
}