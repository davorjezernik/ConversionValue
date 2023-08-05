#include <iostream>

using namespace std;

int main()
{
    //define conversion value in cents
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickle_value{5};
    
    int change_ammaout{};
    cout << "Enter an ammount in cents: ";
    cin >> change_ammaout;
    
    int balance{},dollars{},quarter{},dimes{},nickle{},penni{};
    
    dollars = change_ammaout/dollar_value;
    balance = change_ammaout-(dollars*dollar_value);
    
    quarter = balance/quarter_value;
    balance -= quarter*quarter_value;
    
    dimes = balance/dime_value;
    balance -= dimes*dime_value;
    
    nickle = balance/nickle_value;
    balance -= nickle*nickle_value;
    
    penni = balance;
    
    cout << "\nYou can provide this change as follows: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarter << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickle << endl;
    cout << "Pennies: " << penni << endl;
    
    return 0;
}

