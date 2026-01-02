#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Variable declaration
    string team1, team2;
    int adult_Tickets, child_Tickets;
    double adult_Price, child_Price;
    double Donation_Percent = 0.0;

    // Getting input
    cout << "Enter team 1 name: ";
    getline(cin, team1); // read character after space
    cout << "Enter team 2 name: ";
    getline(cin, team2);

    cout << "Enter no of adult ticket: ";
    cin >> adult_Tickets;
    cout << "Enter no of child ticket: ";
    cin >> child_Tickets;

    cout << "Enter price of adult ticket: ";
    cin >> adult_Price;
    cout << "Enter price of child tickets: ";
    cin >> child_Price;

    cout << "Enter percent of gross amount to donate: ";
    cin >> Donation_Percent;

    // Now Performing Calculation
    int total_ticket = adult_Tickets + child_Tickets;
    double gross_amount = (adult_Tickets * adult_Price) + (child_Tickets * child_Price);
    double amount_Donated = (Donation_Percent / 100) * gross_amount;
    double net_sale = (gross_amount - amount_Donated);

    cout << "\n*" << endl;
    cout << "Team 1:" << setfill('.') << setw(50) << team1 << endl;
    cout << "Team 2:" << setfill('.') << setw(50) << team2 << endl;
    cout << "Number Of Ticket sold" << setfill('.') << setw(50) << total_ticket << endl;

    cout << fixed << setprecision(2);
    cout << "Gross Amount:" << setfill('.') << setw(50) << gross_amount << endl;
    cout << "Percentage of Gross amount donated:" << setfill('.') << setw(50) << Donation_Percent << endl;
    cout << "Amount Donated:" << setfill('.') << setw(50) << amount_Donated << endl;
    cout << "Net sale:" << setfill('.') << setw(50) << net_sale;

    return 0;
}
