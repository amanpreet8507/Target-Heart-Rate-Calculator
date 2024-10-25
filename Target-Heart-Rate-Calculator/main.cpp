//
//  main.cpp
//  Target-Heart-Rate-Calculator
//
//  Created by Amanpreeet Sandhu on 2024-10-22.
//

#include <iostream>
#include "HeartRates.h"

using namespace std;

int main() {
    
    HeartRates person1("Aman", "Sandhu", 6, 10, 1999);
    cout << person1.getFirstName() << " " << person1.getLastName() << "'s age is " << person1.calculateAge() << "\n"
    << "Your maximum heart rate is " << person1.calculateMaxHeartRate() << "\n"
    << "Your target heart rate is " << person1.calculateTargetHeartRate()<< "\n";
}
