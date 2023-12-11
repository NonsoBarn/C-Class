#include <iostream>

using namespace std;

// Function to display the available items and their prices
void displayItems() {
    cout << "Available Items:\n";
    cout << "1. Item A - $10.00\n";
    cout << "2. Item B - $15.00\n";
    cout << "3. Item C - $20.00\n";
    cout << "4. Item D - $25.00\n";
    cout << "5. Item E - $30.00\n";
}

int main() {
    const double VAT_RATE = 0.10;

    // Item prices
    double itemPrices[] = {10.00, 15.00, 20.00, 25.00, 30.00};
    const string itemNames[] = {"Item A", "Item B", "Item C", "Item D", "Item E"};

    // Variables
    int selectedItem;
    double subtotal = 0.0;

    // Arrays to store items bought
    const int MAX_ITEMS = 5;
    int itemsBought[MAX_ITEMS];
    int itemCount = 0;

    // Display available items
    displayItems();

    // Purchase loop for 5 items
    for (int i = 0; i < MAX_ITEMS; ++i) {
        cout << "Enter the number of the item you want to buy (1-5): ";
        cin >> selectedItem;

        // Validate input
        if (selectedItem < 1 || selectedItem > 5) {
            cout << "Invalid choice. Please enter a number between 1 and 5.\n";
            --i; // Decrement to allow the customer to choose again
            continue;
        }

        // Calculate subtotal and store the item
        subtotal += itemPrices[selectedItem - 1];
        itemsBought[itemCount++] = selectedItem;
    }

    // Calculate VAT and total amount
    double vat = subtotal * VAT_RATE;
    double totalAmount = subtotal + vat;

    // Display receipt with items and prices
    cout << fixed;
    cout.precision(2);
    cout << "\nReceipt\n";
    cout << "------------------------------------\n";
    
    // Display items bought with prices
    cout << "Items Bought:\n";
    for (int i = 0; i < itemCount; ++i) {
        int index = itemsBought[i] - 1;
        cout << "- " << itemNames[index] << " - $" << itemPrices[index] << endl;
    }

    cout << "Subtotal: $" << subtotal << endl;
    cout << "VAT (10%): $" << vat << endl;
    cout << "------------------------------------\n";
    cout << "Total Amount: $" << totalAmount << endl;

    return 0;
}
