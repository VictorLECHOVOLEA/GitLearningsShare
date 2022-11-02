/*
Author: Victor Lechovolea
https://github.com/VictorLECHOVOLEA
Briefly, everything I learned about C++ classe
*/




// /* 
// Example 002 -- START 
#include <iostream>
using namespace std;

// by convention, class is defined with class keyword
// by convention, Class objects start with Uppercase letter.
class Critter {     // class definition --defines a new type Critter
public:
    int m_Hunger;   // data member
    void Greet();   // member function prototype
}; // class is surrounded by curly brackets and end with a semicolon.

// function definition outside class constructor. :: operator
void Critter::Greet() { // member function definition
    cout << "Hi. I'm a critter. My hunger level is " << m_Hunger << ".\n";
}

int main() {
    Critter crit1;
    Critter crit2;
    crit1.m_Hunger = 9;
    cout << "crit1's hunger level is " << crit1.m_Hunger << ".\n";

    crit2.m_Hunger = 3;
    cout << "crit2's hunger level is " << crit2.m_Hunger << ".\n";

    crit1.Greet();
    crit2.Greet();
    return 0;
}

// Example -- END
// */




/* 
// Example 000 
// Example -- START 
#include <iostream>
#include <string>
using namespace std;

class BIMPlayer {
private:
    int age;
    string name;
    string country;
    char team;

public:
    
    BIMPlayer(int a, string n, string c, char t) {
        age = a;
        name = n;
        country = c;
        team = t;
    }
    void setAge(int a) {
        age = a;
    }

};

int main() {
    int age;
    cin >> age;
    string name;
    cin >> name;
    string country;
    cin >> country;
    char team;
    cin >> team;

    return 0;
}

// how to install git
// https://youtu.be/i_23KUAEtUM

// Example -- END
// */