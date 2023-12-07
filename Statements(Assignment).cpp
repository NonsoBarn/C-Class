#include <iostream>
using namespace std;

int main() {
    int jambScore, age, ptumeScore;
    char buOnlineRegistration, isNigerian;

    // Input student's JAMB score, age, PTUME score, BU Online registration status, and citizenship.
    cout << "Enter JAMB score: ";
    cin >> jambScore;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter PTUME score: ";
    cin >> ptumeScore;

    cout << "Is the student registered with BU Online (Y/N): ";
    cin >> buOnlineRegistration;

    cout << "Is the student a Nigerian citizen (Y/N): ";
    cin >> isNigerian;

    // Check admission criteria
    if (jambScore >= 180 &&
        age >= 16 &&
        ptumeScore > 50 &&
        (buOnlineRegistration == 'Y' || buOnlineRegistration == 'y') &&
        (isNigerian == 'Y' || isNigerian == 'y')) {
        cout << "Congratulations! The student is admitted to Babcock University." << endl;
    } else {
        cout << "Sorry, the student does not meet the admission criteria for Babcock University." << endl;
    }

    return 0;
}
