#include <iostream>

using namespace std;

int main() {
    // Display the grade options
    cout << "Grade Options:" << endl;
    cout << "1. Grade 1" << endl;
    cout << "2. Grade 2" << endl;
    cout << "3. Grade 3" << endl;
    cout << "4. Grade 4" << endl;
    cout << "5. Grade 5" << endl;

    int choice;

    // Input customer's choice
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    // Match the choice with the appropriate cost
    switch (choice) {
        case 1:
            cout << "The cost for Grade 1 is: #100,000:00" << endl;
            break;
        case 2:
            cout << "The cost for Grade 2 is: #250,000:00" << endl;
            break;
        case 3:
            cout << "The cost for Grade 3 is: #380,000:00" << endl;
            break;
        case 4:
            cout << "The cost for Grade 4 is: #500,000:00" << endl;
            break;
        case 5:
            cout << "The cost for Grade 5 is: #620,000:00" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
    }

}