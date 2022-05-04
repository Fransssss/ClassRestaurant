//
// Created by XaveF on 5/3/2022.
//

#ifndef CLASSRESTAURANT_RESTAURANT_H
#define CLASSRESTAURANT_RESTAURANT_H

#include <iostream>

using std::string;

class Restaurant
{
private:
    string _name;
    double _rating;
public:
    void SetName(const string& name);
    void SetRating(const double& rating);
    void SetComment(const string& comment);
    void Print();
};


#endif //CLASSRESTAURANT_RESTAURANT_H
