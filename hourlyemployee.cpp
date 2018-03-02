/**
 * File: hourlyemployee.cpp
 * Author: Bryce Sulin
 *
 * This file contains the attributes of an hourly employee
 */
#include <iostream>
#include "hourlyemployee.h"
using namespace std;

// Constructor
hourlyemployee::hourlyemployee(std::string n, std::string id, double hw)
 : name(n), idnumber(id), hourlywage(hw)
{

}

// Getter for name
std::string hourlyemployee::getname(){
    return name;
}

// Getter for id
std::string hourlyemployee::getidnumber() {
    return idnumber;
}

// Getter for hourly wage
double hourlyemployee::gethourlywage() {
    return hourlywage;
}

// Setter for hourly wage
void hourlyemployee::sethourlywage(double wage) {
    hourlywage = wage;
}

// Calculate the employee's weekly pay
double hourlyemployee::calculateweeklypay(double hours) {
    double weeklypay;
    double overtimehours;

    // Overtime Pay Calculator
    if (hours > 40) {
        overtimehours = hours - 40;
        weeklypay = (overtimehours * hourlywage * 1.5) + ((hours - overtimehours) * hourlywage);
    }
    else {
        weeklypay = hours * hourlywage;
    }

    return weeklypay;
}