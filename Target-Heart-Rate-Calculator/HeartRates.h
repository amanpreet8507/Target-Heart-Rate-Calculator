//
//  HeartRateCalculator.h
//  Target-Heart-Rate-Calculator
//
//  Created by Amanpreeet Sandhu on 2024-10-24.
//
#include <string>
#include <ctime>

class HeartRates {
public:
    //Constructor
    explicit HeartRates(std::string fName, std::string lName, int m, int d, int y): firstName{fName}, lastName{lName}, month(m), day{d}, year{y} {};
    
    // Setters
    void setFirstName(std::string fName){
        firstName = fName;
    }
    
    void setLastName(std::string lName){
        lastName = lName;
    }
    
    void setMonth(int m) {
        month = m;
    }

    void setDay(int d) {
        day = d;
    }

    void setYear(int y) {
        year = y;
    }
    
    //void setAge(int a){age=a;}
    
    // Getters
    std::string getFirstName() const {
        return firstName;
    }
    
    std::string getLastName() const {
        return lastName;
    }
    
    int getMonth() const {
        if (month > 12 || month < 1) {
            return 1;  // Default to 1 if month is invalid
        } else {
            return month;
        }
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }
    
    
    // Member function to calculate person's age
    int calculateAge() {
        // Get current year
        time_t t = time(0);
        tm* now = localtime(&t);
        int currentYear = now->tm_year + 1900;
        age = currentYear-year;
        return age;
    }
    
    // Member function to calculate person's maximum heart rate
    int calculateMaxHeartRate() {
        maxHR = 220-age;
        return maxHR;
    }
    // Member function to calculate person's target heart rate
    std::string calculateTargetHeartRate() {
        targetLower = maxHR * 0.5;
        targetUpper = maxHR * 0.85;
        return std::to_string(targetLower) + "-" + std::to_string(targetUpper) + " beats per minute";
    };
private:
    std::string firstName;
    std::string lastName;
    std::string dateOf;
    int month;
    int day;
    int year;
    int age;
    int maxHR;
    std::string targetHR;
    int targetLower;
    int targetUpper;
};
