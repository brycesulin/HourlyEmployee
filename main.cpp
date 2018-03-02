#include <iostream>
#include "hourlyemployee.h"
using namespace std;

int main ()
{
    hourlyemployee emp("Bob", "123456", 10.00);
    double hours;

    cout << "Please enter hours worked: ";
    cin >> hours;
    cout << "The hours you worked is " << hours << " hours" << endl;

    cout << "Your hourly wage is " << emp.gethourlywage() << "$" << endl;

    double weeklypay = emp.calculateweeklypay(hours);

    cout << "Weekly Pay is " << weeklypay << "$" << endl;
    return 0;
}