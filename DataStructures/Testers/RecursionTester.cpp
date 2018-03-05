//
//  RecursionTester.cpp
//  DataStructures
//
//  Created by Ylst, Zachary on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
    if (number == 0 || number == 1)
    {
        cout << "Reached a base case" << endl;
        return 1;
    }
    else
    {
        cout << "Calling fib with: " << number - 1 << " and " << number - 2 << endl;
        return fib(number - 1) + fib(number - 2);
    }
}

string RecursionTester :: mystery(string word)
{
    return "";
}

void RecursionTester :: testRecursionNumbers()
{
    
}

void RecursionTester :: testRecursionString()
{
    
}
