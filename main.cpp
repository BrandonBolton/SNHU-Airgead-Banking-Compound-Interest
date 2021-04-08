/*  Created by Brandon Bolton
*   3-21-2021
*/

#include <iostream>
using namespace std;

#include "CompoundInterest.h"

void InvestmentMenu(double &investment, double &deposit, double &interest, int &years) {
    /*  This function displays the investment menu to user
     *  and gets the user input while providing input validation.
     *
     *  Parameters:
     *      &investment -- The initial investment amount.
     *      &deposit -- The monthly deposit amount.
     *      &interest -- The interest amount that gets compounded.
     *      &years -- The amount of time the investment is held.
     */

    cout << "\n\n************************************" << endl;
    cout << "************ Data Input ************" << endl;

    // Prompts user for investment amount.
    cout << "Initial Investment Amount: $";
    cin >> investment;

    // Runs if user enters a number lower than 1 or an invalid character.
    while (investment < 1 || cin.fail()) {

        // If invalid character, clears input out.
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Prompts user for investment amount again.
        cout << "\n\nPlease enter a valid number above 0.\n\n";
        cout << "Initial Investment Amount: $";
        cin >> investment;
    }

    cout << "Monthly Deposit: $";
    cin >> deposit;

    // Runs if user enters a number lower than 1 or an invalid character.
    while (deposit < 1 || cin.fail()) {

        // If invalid character, clears input out.
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Prompts user for deposit amount again.
        cout << "\n\nPlease enter a valid number above 0.\n\n";
        cout << "Monthly Deposit: $";
        cin >> deposit;
    }

    cout << "Annual Interest: %";
    cin >> interest;

    // Runs if user enters a number lower than 1 or an invalid character.
    while (interest < 1 || cin.fail()) {

        // If invalid character, clears input out.
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Prompts user for interest amount again.
        cout << "\n\nPlease enter a valid number above 0.\n\n";
        cout << "Annual Interest: %";
        cin >> interest;
    }

    cout << "Number of Years: ";
    cin >> years;

    // Runs if user enters a number lower than 1 or an invalid character.
    while (years < 1 || cin.fail()) {

        // If invalid character, clears input out.
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Prompts user for number of years.
        cout << "\n\nPlease enter a valid number above 0.\n\n";
        cout << "Number of Years: ";
        cin >> years;
    }
}

int main() {

    // Declares variables
    double investmentAmount, monthlyDeposit, annualInterest;
    int numYears;

    // Calls the investment menu function to get user input.
    InvestmentMenu(investmentAmount, monthlyDeposit, annualInterest, numYears);

    // Pause before continuing to rest of program.
    // If system is a Mac or Linux, compiler runs system("read")
    #if defined(__APPLE__) || defined(__linux__)
        cout << "\n\nPress any key to continue...";
        system("read");

    // If system is 32 or 64 bit Windows, compiler runs system("pause");
    #elif defined(_WIN32) || defined(_WIN64)
        system("pause");

    // If compiler can't determine operating system, system("pause") runs.
    #elif
        system("pause");
    #endif

    // Calls the function for both yearly interest and yearly interest with monthly deposits.
    CompoundInterest::yearlyInterest(investmentAmount, annualInterest, numYears);
    CompoundInterest::yearlyInterestWithDeposit(investmentAmount, monthlyDeposit, annualInterest, numYears);

    return 0;
}
