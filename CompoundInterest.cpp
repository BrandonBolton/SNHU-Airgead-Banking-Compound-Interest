/*  Created by Brandon Bolton
*   3-21-2021
*/

#include <iostream>
#include <iomanip>
using namespace std;

#include "CompoundInterest.h"

void CompoundInterest::yearlyInterest(double investment, double interest, int years) {
    /*  This function calculates and outputs yearly interest without reoccurring
     *  investments to the user.
     *
     *  Parameters:
     *      investment -- initial investment amount
     *      interest -- The interest rate
     *      years -- How many years to iterate through
     */

    // Defines local variables
    double m_yearEndBalance, m_yearEndInterest, m_monthlyCompoundInterest;

    // Initializes variable to initial investment amount
    m_yearEndBalance = investment;

    // Starts the output to user
    cout << "\n\n";
    cout << setw(61) << setfill('=') << "\n";
    cout << " Balance and Interest Without Additional Monthly Balances\n";
    cout << setw(61) << setfill('=') << "\n";
    cout << " Year\t\tYear End Balance\tYear Earned Interest" << endl;
    cout << setw(61) << setfill('-') << "\n";

    // For loop that iterates with how many years there are to calculate the amounts
    for (int i = 1; i < years + 1; i++) {

        // Calculations for the monthly compound interest, year end interest, and year end balance.
        m_monthlyCompoundInterest = m_yearEndBalance * (interest / 100) / 12;
        m_yearEndInterest = m_monthlyCompoundInterest * 12;
        m_yearEndBalance = m_yearEndBalance + m_yearEndInterest;

        // Outputs the year, year end balance and year, end interest to user.
        cout << setprecision(2) << fixed << "  " << i << setfill(' ') << setw(20);
        cout << "$" << m_yearEndBalance << setw(23) << "$" <<  m_yearEndInterest << "\n";
    }
}

void CompoundInterest::yearlyInterestWithDeposit(double investment, double deposit, double interest, int years) {
    /*  This function calculates and outputs yearly interest with reoccurring
     *  investments to the user.
     *
     *  Parameters:
     *      investment -- initial investment amount
     *      deposit -- recurring deposits on a monthly basis
     *      interest -- The interest rate
     *      years -- How many years to iterate through
     */

    // Defines local variables
    double m_yearEndBalance, m_yearEndInterest, m_monthlyCompoundInterest;

    // Initializes variable to initial investment amount
    m_yearEndBalance = investment;

    // Starts the output to the end user.
    cout << "\n\n";
    cout << setw(61) << setfill('=') << "\n";
    cout << " Balance and Interest With Additional Monthly Balances\n";
    cout << setw(61) << setfill('=') << "\n";
    cout << " Year" << "\t\tYear End Balance" << "\tYear Earned Interest" << endl;
    cout << setw(61) << setfill('-') << "\n";

    for (int i = 1; i < years + 1; i++) {

        // Calculations for the monthly compound interest, year end interest, and year end balance.
        m_monthlyCompoundInterest = (m_yearEndBalance + deposit) * (interest / 100) / 12;
        m_yearEndInterest = m_monthlyCompoundInterest * 12;
        m_yearEndBalance = m_yearEndBalance + (deposit * 12) + m_yearEndInterest;

        // Outputs the year, year end balance and year, end interest to user.
        cout << setprecision(2) << fixed << "  " << i << setfill(' ') << setw(20);
        cout << "$" << m_yearEndBalance << setw(23) << "$" <<  m_yearEndInterest << "\n";
    }
}
