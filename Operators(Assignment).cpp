#include <iostream>
using namespace std;

int main() {
    int maxItems = 5;
    string items[maxItems];
    float prices[maxItems];

    // Initialize items and prices
    items[0] = "Books";
    items[1] = "Bag";
    items[2] = "Shoe";
    items[3] = "Wallet";
    items[4] = "Shirt";

    prices[0] = 10.99;
    prices[1] = 5.49;
    prices[2] = 7.99;
    prices[3] = 3.25;
    prices[4] = 12.50;

    // Display the title of the restaurant
    cout << "Babcock University Shopping Mall" << endl;

    // Display the available items and their prices
    cout << "Available items and prices:\n";
    for (int i = 0; i < maxItems; ++i) {
        cout << i + 1 << ". " << items[i] << ": $" << prices[i] << endl;
        
    }

    // Initialize variables to store customer's selections
    string selectedItems[maxItems];
    float totalCost = 0.0;

    // Allow the customer to select items
    cout << "\nEnter the number of items you want to buy (up to " << maxItems << "): ";
    int numItemsToBuy;
    cin >> numItemsToBuy;

    if (numItemsToBuy > maxItems) {
        cout << "Invalid input. You can buy at most " << maxItems << " items." << endl;
        return 1;
    }

    cout << "Enter the numbers corresponding to the items you want to buy:\n";
    for (int i = 0; i < numItemsToBuy; ++i) {
        int selectedItem;
        cin >> selectedItem;

        if (selectedItem < 1 || selectedItem > maxItems) {
            cout << "Invalid item number. Please enter a valid item number." << endl;
            return 1;
        }

        selectedItems[i] = items[selectedItem - 1];
        totalCost += prices[selectedItem - 1];
        system ("cls"); //Clearing terminal
    }

 	// Display the title of the restaurant
    cout << "\t Babcock University Shopping Mall" << endl;
  
    // Calculate VAT (10% of totalCost)
    double vat = 0.1 * totalCost;

    // Display the items bought, their prices, and the total cost including VAT
    cout << "\nItems Bought and Their Prices:\n";
    for (int i = 0; i < numItemsToBuy; ++i) {
        cout << selectedItems[i] << ": $" << prices[i] << endl;
    }

    cout << "\nTotal Cost (Before VAT): $" << totalCost << endl;
    cout << "VAT (10%): $" << vat << endl;
    cout << "Total Cost (Including VAT): $" << totalCost + vat << endl;

    return 0;
}
