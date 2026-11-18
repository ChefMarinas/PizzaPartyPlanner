// Pizza Party Planner
// Adrian Marinas
// 11/16/2026
// Create a program to plan for a pizza party
// I wrote this code myself

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double NUM_SLICES = 8.0;
    const double GST_TAX = 0.05;
    string partyName;
    int numGuest; // number of guests
    int sliceGuest; // slices per guest
    double pricePizza; // price per slice
    int sliceNeed; // slices needed
    int orderPizza; // amount of pizzas to order
    double subTotal; // total before tax
    double finalTotal; // total after tax
    double gstTax; // the tax
    double perGuest; // total per guest

    cout << fixed << setprecision(2); // two decimal places from here on

    cout << "Please enter your party name: ";
    getline(cin, partyName);
    cout << "Please enter the amount of guests";
    cin >> numGuest;
    cout << "How many slice for each guest?";
    cin >> sliceGuest;
    cout << "What is the price per pizza?";
    cin >> pricePizza;


    cout << "Party Name: " << partyName << endl;
    cout << "Number of guests: " << numGuest << endl;
    cout << "Slices per guest: " << sliceGuest << endl;
    cout << "Price per pizza: $" << pricePizza << endl << endl;

    sliceNeed = numGuest * sliceGuest;
    orderPizza = ceil(sliceNeed/NUM_SLICES);
    subTotal = orderPizza * pricePizza;
    gstTax = subTotal * GST_TAX;
    finalTotal = subTotal + gstTax;
    perGuest = finalTotal/numGuest;

    cout << "=========================================" <<endl;
    cout << "           PIZZA PARTY PLANNER           " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Party:                 " << partyName << endl;
    cout << "Guests:                " << numGuest << endl;
    cout << "Slices needed:         " << sliceNeed << endl;
    cout << "Pizzas to order:       " << orderPizza << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Subtotal:              $" << subTotal << endl;
    cout << "GST (5%):              $" << gstTax << endl;
    cout << "Total:                 $" << finalTotal << endl;
    cout << "Per guest:             $" << perGuest << endl;
    cout << "=========================================" << endl;


    return 0;
}