//////////////////////////////////////////////////////////////////

// Copound If staement

/* Babcock university guest house consulted you, to develop a weighing system that will allow then to serve complementary breakfast to their customers based on their weight, The conditions are:
If a customers weight is btw 50kg-60kg, he should be served rice and goat meat.
If a customer weight is above 60k-80kg, he should be served bread and tea.
If a customer weight is above 80k-100kg, he should be served Slimming tea.
If a customer weight is above 100kg, he should see the doctor.

*/

#include <iostream>
using namespace std;
int main() {
	string name;
	float weight;
	
	cout<<"Welcome to BGH\n";
	cout<<"Enter Your Name\n";
	getline(cin, name);
	cout<<"Enter Your Weight";
	cin>>weight;
	if(weight >= 50 && weight<=60){
		cout<<name<<" Your meal is Rice and Goat Meat\n";
}else if(weight > 60 && weight <= 80){
	cout<<name<<" Your meal is bread and tea\n";
} else if (weight >80&& weight <=100){
	cout<<name<<" Your meal is slimming Team\n";
} else if (weight >100){
	cout<<name<<" See the doctor";}else{
		cout<<"your weight is not in range";
	}
}


/* ASSIGNMENT: Nigerian Footbal Federation is planing to conduct a football competition, for under 13, 14, 15, 17 and professional league, in Nigeria. The condition to qualify for each level are:
If a players weight is < 50kg and his age is less than or equal to 13yrs : Under 13
If a players weight is > 50kg & <60kg and his age is less than or equal to 14yrs : Under 14
if a players weight is > 60kg & < 80kg and his age is less than or equal to 15yrs : Under 15
if the player weight is >80kg & < 100kg and his age is less than or equal to 17yrs: Under 17
if the player weight is >80kg but his age is > 17: professional league

use C++
*/

