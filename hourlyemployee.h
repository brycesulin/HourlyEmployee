/**
 * File: hourlyemployee.h
 * Author: Bryce Sulin
 *
 * Created by Bryce Sulin on 2/17/18
 */

#ifndef HOURLYEMPLOYEE_HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_HOURLYEMPLOYEE_H

#include <string>

class hourlyemployee {
public:
    hourlyemployee(std::string n, std::string id, double hw);
    std::string getname();
    std::string getidnumber();
    double gethourlywage();

    void sethourlywage(double wage);

    double calculateweeklypay(double hours);

private:
    std::string name;
    std::string idnumber;
    double hourlywage;
};
#endif //HOURLYEMPLOYEE_HOURLYEMPLOYEE_H