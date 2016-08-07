/*
 * How programmers see any relationships
 *
 * Created 7.08.2016
 *
 * Create Nunky Lado
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    string command;
    cout <<"Will you have a girlfriend or not \n Are you a good_boy or bad_boy? Plese chose your answer ";
    cin >> command;

    if (command == "good_boy")
    {
        cout <<"Maybe you will have a girlfriend ";
    }

    else if (command == "bad_boy")
    {
        cout <<"You will have a girlfriend ";
    }

    return 0;
}
