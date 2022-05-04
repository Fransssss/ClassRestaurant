//
// Created by XaveF on 5/3/2022.
//

#include "Restaurant.h"

using std::cout;
using std::endl;

// set data member of _name with name
void Restaurant::SetName(const string &name)
{
    _name = name;
}

// set data member of _rating with rating
void Restaurant::SetRating(const double &rating)
{
    _rating = rating;
}

// add comment to the name
void Restaurant::SetComment(const string &comment)
{
    _name += "\" - Comment: \"" + comment + "\"\n";
}

//  print all data
void Restaurant::Print()
{
    cout << " Restaurant: " << _name << " Rating: " << _rating << endl;
}

