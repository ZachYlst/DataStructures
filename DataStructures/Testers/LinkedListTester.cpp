//
//  LinkedListTester.cpp
//  DataStructures
//
//  Created by Ylst, Zachary on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "LinkedListTester.hpp"

void LinkedListTester :: testListBasics()
{
    LinkedList<int> numbers;
    numbers.add(9);
    cout << numbers.getFront()->getData() << " Is is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " Is at the end of the list and should be 9" << endl;
    
    numbers.add(0);
    cout << numbers.getFront()->getData() << " Is is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " Is at the end of the list and should be 0" << endl;
    
    numbers.addAtIndex(1,2);
    numbers.add(324);
    
    cout << numbers.getFront()->getData() << " Is is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " Is at the end of the list and should be 324" << endl;
    
    cout << "This loop should print 4 lines" << endl;
    for (int index = 0; index < numbers.getSize(); index++)
    {
        cout << numbers.getFromIndex(index) << endl;
    }
    
    numbers.remove(0);
    numbers.add(32567);
    numbers.addAtIndex(0,2312);
    
    cout << numbers.getFront()->getData() << " Is is at the front of the list and should be 2312" << endl;
    cout << numbers.getEnd()->getData() << " Is at the end of the list and should be 32567" << endl;
}

void LinkedListTester :: testListWithData()
{
    Timer ListTimer;
    
    ListTimer.startTimer();
    LinkedList<CrimeData> crimes = FileController :: readDataToList("/Users/zyls7153/Documents/Data Structures/DataStructures/DataStructures/Data/crime.csv");
    ListTimer.stopTimer();
    cout << "This is how long it takes to read the structure into our custom data structure" << endl;
    ListTimer.displayInformation();
    
    ListTimer.resetTimer();
    cout << "Here is how long it takes to access a random data value" << endl;
    ListTimer.startTimer();
    int randomLocation = (rand() * rand()) % crimes.getSize();
    cout << "The random index is " << randomLocation << endl;
    double totalViolenceRate = crimes.getFromIndex(randomLocation).getAllViolentRates();
    ListTimer.stopTimer();
    cout << "The random crime stat is: " << totalViolenceRate << " , and here is the time" << endl;
    ListTimer.displayInformation();
}
