
#include <iostream>
#include "Restaurant.h"                                  // include this to access the class

using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::string;

int main()
{
    cout << endl << " -- Best Three Restaurants in Seattle -- " << endl;
    Restaurant placeOne;
    Restaurant placeTwo;
    Restaurant placeThree;

    // name of restaurants
    placeOne.SetName("Canlis");
    placeTwo.SetName("The Pink Door");
    placeThree.SetName("How to Cook a Wolf");

    // rating of restaurants
    placeOne.SetRating(4.7);
    placeTwo.SetRating(4.6);
    placeThree.SetRating(4.6);

    //print data
    placeOne.Print();
    placeTwo.Print();
    placeThree.Print();

    // set comment if user want to see a comment for each restaurant
    char userChar;
    cout << endl << "Would you like to see a comment for each restaurant? Y/N :";
    cin >> userChar;

    if( userChar == 'Y')
    {
        cout << endl;
        placeOne.SetComment("..Top Contender..");
        placeTwo.SetComment("..highly recommend..");
        placeThree.SetComment("..awesome food..");

         placeOne.Print();
         placeTwo.Print();
         placeThree.Print();
    } else if(userChar == 'N')
    {
        cout << endl << "Exit program ";
    } else
    {
        cerr << " Invalid input " << endl;
    }

    return 0;
}
