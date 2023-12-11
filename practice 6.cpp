#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 5; ++i) {
        int networkCode;
        int amount;

        cout << "Select Network:\n1. MTN\n2. GLO\n3. Airtel\n4. 9mobile\n";
        cout << "Enter network code (1-4): ";
        cin >> networkCode;

        switch (networkCode) {
            case 1:
                cout << "MTN Selected\n";
                break;
            case 2:
                cout << "GLO Selected\n";
                break;
            case 3:
                cout << "Airtel Selected\n";
                break;
            case 4:
                cout << "9mobile Selected\n";
                break;
            default:
                cout << "Invalid network code\n";
                continue; // Restart the loop
        }

        cout << "Enter card amount (100, 200, 500): ";
        cin >> amount;

        if ((amount == 100 ||  amount == 200 ||  amount == 500)) {
            cout << "Card dispensed successfully.\n\n";
        } else {
            cout << "Invalid amount entered.\n\n";
            --i; // Decrement the loop variable to repeat the current iteration
        }
    }

    cout << "Thank you for using the card dispenser.\n";

    return 0;
}