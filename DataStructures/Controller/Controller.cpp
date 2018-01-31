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
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/zyls7153/Downloads/crime.csv");
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
