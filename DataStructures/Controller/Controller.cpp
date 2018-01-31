//
//  Controller.cpp
//  DataStructures
//
//  Created by Ylst, Zachary on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Print some text to the screen" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
    codeTimer.resetTimer();
//    codeTimer.startTimer();
//    for (int index = 0; index < 10000; index ++)
//    {
//        cout << "The index is " << index << "\t";
//    }
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
}
