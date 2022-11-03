/*
Author: Victor Lechovolea
https://github.com/VictorLECHOVOLEA
Briefly, everything I learned about C++ classes
*/

/*
Defining new types
    Defining a Class
        class Player {};
        ! by convention, classes objects names begin with upper case letter

    Defining Data Members
        int speed;

    Declaring Member Functions
        void Greet()
        ! by convention, member function names begin with upper case letter

    Specifying Access levels

Member function definition:
    Inside the class
        
    Outside the class
        void Player::Greet() {//some code }

    !!! Constructors:
        Class has a special member function called constructor which can 
        be defined outside class on inside class
            inside:
            outside:
                "Constructor definition"
                Critter::Critter(all data members parameters) {//some code}
                Class name
                :: scope resolution operator
                Constructor which will use the same name as the class. We can't change it.


In main()
    Instantiating Objects - when you create an object from a class type.
        Specific objects are called Instances of a class.
            Player tennisPlayer;
            Player bimPlayer;
    Accessing Data members;
        tennisPlayer.profession = "tennis";
        bimPlayer.profession = "engineer";
    
    Calling Member Functions
        tennisPlayer.Greet();
        bimPlayer.Greet();


*/

/*----------------------------------------------------------------*/


/* 
// Example 001 - Introducting the Simple Critter Program
// Example -- START 
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
*/

/*----------------------------------------------------------------*/

// /* 
// Example 002 - Introducting the Constructor Critter Program
// Example -- START 
// Page 224
// Constructor Critter
// Demonstrates constructors

#include <iostream>
using namespace std;

class Critter {
public:
    int m_Hunger;
    Critter(int hunger = 0); // constructor prototype
    void Greet();
};

// constructor is a special function
// the constructor has no return type
// You have to give the same name as the class itself - NO FLEXIBILITY
/*
A default constructor requires no arguments. If you don't define a default constructor, the compiler 
defines a minimal one for you that simply calls the default constructors of any data members of the 
class. If you write your own constructor, then the compiler won't provide a default constructor for 
you. It's usually a good idea to have a default constructor, so you should make sure to supply your 
own when necessary. 
One way to accomplish this is to supply default arguments for all parameters 
in a constructor definition. 
*/
Critter::Critter(int hunger){    // constructor definition
    cout << "A new critter has been born!" << "\n";
    m_Hunger = hunger; 
    //initialization of the object's m_Hunger data member with the argument
    // passed to the constructor.
    // if no value is passed, 
    // then the constructor uses the default argument value of 0 from constructor prototype above.
}
/*
TRICK
You can use member initializers as a shorthand way to assign values to data members in a constructor. 
To write a member initializer, start with a colon after the constructor's parameter list. Then 
type the name of the data member you want to initialize, followed by the expression you want to 
assign to the data member, surrounded by parentheses. 
If you have multiple initializers, separate them with commas. 
This is much simpler than it sounds (and it's really useful, too). 
Here's an example that assigns hunger to m_Hunger and boredom to m_Boredom. 
Member initializers are especially useful when you have many data members to initialize. 

Critter::Critter(int hunger, int boredom):
    m_hunger(hunger),
    m_Boredom(boredom)
    {} // empty constructor body
*/
void Critter::Greet() { // member function definition
    cout << "Hi. I'm a critter. My hunger level is " << m_Hunger << ".\n\n";
}

int main() {
    // Calling a constructor automatically
    // when crit is instantiated, the constructor is automatically called and the message "A new..." is displayed.
    // then the constructor assigns 7 to the objects's m_Hunger data member.
    Critter crit(7);
    crit.Greet();

    return 0;
}

// Example -- END
// */

/*----------------------------------------------------------------*/




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