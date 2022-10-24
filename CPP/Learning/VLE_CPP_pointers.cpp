// Everything I know about Pointers
// made by Victor Lechovolea
// https://github.com/VictorLECHOVOLEA/GitLearning.git

#include <iostream>
#include <string>

// #include<iostream.h>
// #include<conio.h>

using namespace std;

int main() {

    cout << "\n:::::: POINTERS! ::::::\n";
    cout << "\n:::What are pointers? :::\n\n";
    cout << " Pointers are a powerful part of C++.\n In some ways, they behave like iterators from the STL.\n";
    cout << " Often I can use them in place of references.\n";
    cout << " However, pointers offer functionality that no other part of the language can. \n";
    cout << "\n";
    cout << "  The basic mechanisms of Pointers and what are they good at?\n";
    cout << "  ==>Declare and initialize pointers\n";
    cout << "  ==>Dereference pointers\n";
    cout << "  ==>Use constants and pointers\n";
    cout << "  ==>Pass and return pointers\n";
    cout << "  ==>Work with pointers and arrays\n"; 

    /*
    Understanding Pointer Basics 
    Pointers have a reputation for being difficult to understand. In reality, the essence of pointers 
    is quite simple—a pointer is a variable that can contain a memory address. Pointers give you 
    the ability to work directly and efficiently with computer memory. Like iterators from the 
    STL, they're often used to access the contents of other variables. But before you can put point- 
    ers to good use in your game programs, you have to understand the basics of how they work. "

    */
    cout << "\n\n";
    cout << ":::::: About variables and pointers! ::::::\n";
    cout << "::: About VARIABLES :::\n";
    int a;                  // declaration of a variable int type
    int score = 5;        // declaration and initialization of a variable int type
    cout << "score  = " << score << "       | This is the initialized 'score' variable which store a value of 5." << '\n';
    cout << "    a  = " << a << "       | 'a' variable was uninitialized, so a random values was assigned to." << "\n\n";
    
    int newScore = 90;
    score = newScore, a = 15;    // changing initial values of variables and assigning a new variable to an existing variable
    cout << "score  = " << score << "      | This is the updated value stored in the 'score' variable." << '\n';
    cout << "    a  = " << a << "      | This is the updated value stored in the 'a' variable." << "\n\n";




    cout << "\n\n\n";
    cout << "\n::: About POINTERS :::\n";
    /*

        Pointer Declaration Syntax
    The declaration of C++ takes the following syntax:

    datatype *variable_name; 
    The datatype is the base type of the pointer which must be a valid C++ data type.
    The variable_name is should be the name of the pointer variable.
    Asterisk used above for pointer declaration is similar to asterisk used to perform multiplication operation. It is the asterisk that marks the variable as a pointer.
    Here is an example of valid pointer declarations in C++:

    int    *x;    // a pointer to integer
    double *x;    // a pointer to double
    float  *x;    // a pointer to float
    char   *ch     // a pointer to a character
    */
    int *p;                 // declaration of a pointer
    cout << "int *p       | Declaration of a pointer\n"; 
    int *pScore = 0;        // declaration and initialization of a pointer
    cout << "int *pScore  | Declaration and initialization of a pointer\n";

    // Assigning adresses of variables to pointers;
    pScore = &score; // pScore takes the adress of score.
    p = &a;
    cout << "pScore = &score or p = &a  | Assignments of variables adresses to pointers.\n";

    cout << "p  = " << p << " | This is 'p' pointed address." << '\n';          // p = 0x37a27ff808 
    cout << "&a = " << &a << " | This is variable 'a' address."<<'\n';  // &a = 0x37a27ff808
    cout << "&p = " << &p << '\n';  // &p = 0x37a27ff800
    cout << "*p = " << *p << " | This is '*p' dereferenced --> displays the value of variable pointed by 'p'. " <<'\n';  // derefrencing
    
    *p = 8;
    cout << "*p = 8  | Assigning a new value to pointer. \n";
    cout << "p = " << p << " | After the new assignment, the 'p' adress remained the same. \n";
    cout << "a = " << a << " | Pointer 'p' was chaanged, so 'a' variable changed also. " << '\n';    // a = 8

    cout << "----END OF POINTERS BASICS-----\n";



    cout << "\n\n\n";
    cout << "::: POINTERS with VECTORS(ARRAYs) :::\n";
    
    cout << "REMEMBER!:::Displaying only 'p' will give me the address,\nwhile writting dereferencing the pointer '*p' gives me the value.\n"; 
    int v[4] = {5, 2, 89, 1}; // Declaration and initialization of a vector;
    for (int i = 0; i < 4; ++i) cout <<v[i] << " ";
    cout << "\n";
    int *pVector = v;
    pVector++; //
    *pVector = 13;
    pVector = &v[0]; //
    for (int i = 0; i < 4; ++i) cout <<v[i] << " ";
    // pVector = v + 2; // pVector = 89; 
    // pVector = v - 1; // THIS IS A TRAP! // error: invalid conversion from 'int' to 'int*' [-fpermissive]
    // pVector = 22; // THIS IS A TRAP! This will create a new what?
    
    cout << "\n\n\n";
    cout << "::: POINTERS ARITHMETIC :::\n";
    cout << "REMEMBER!:::Displaying only 'p' will give me the address,\nwhile writting dereferencing the pointer '*p' gives me the value.\n"; 
    cout << "REMEMBER!:::(p+1) will give me address of the next variable in the memrory\n";     
    cout << "Adress p is = " << p << '\n';                          // Adress p is = 0x4092bffce4
    cout << "Value at adress *p is = " << *p << '\n';               // Value at adress *p is = 10
    cout << "Size of integer is " << sizeof(int) << " bytes." << '\n';  // Size of integer is 4 bytes.
    cout << "Adress p + 1 is = " << p + 1 << '\n';                  // Adress p + 1 is = 0x27183ff6a8
    cout << "Adress p + 2 is = " << p + 2 << '\n';                  // Adress p + 2 is = 0x46157ffc5c
    cout << "Value at adress *(p + 1) is = " << *(p + 1) << '\n';   // Value at adress *(p + 1) is = -56625628



    //Pointers
    int x = 1025; // declare an integer
    int *pX;         // declare a pointer to integer
    pX = &x;         // store the adress of p in the a variable by using the unprocent operator
    cout << "Size of integer is " << sizeof(int) << '\n';
    cout << "Adress pX = " << pX << ", value *pX = " << *pX << '\n';    // Adress p = 0xb364dffe14, value *p = 1025
    cout << "Adress pX + 1 = " << pX + 1 << ", value *(pX + 1) = " << *(pX + 1) << '\n';    // Adress p + 1 = 0x81e55ff6e0, value *(p + 1) = 337844016

    char *p0; // declare a character pointer p0;
    p0 = (char*)p; // typecasting
    cout << "Size of char is " << sizeof(char) << '\n';                 // Size of char is 1
    cout << "Adress p0 = " << p0 << ", value *p0 = " << *p0 << '\n';    // Adress p0 = ☺♦, value *p0 = ☺
    // 1025 = 00000000 00000000 00000100 00000001
    cout << "Adress p0 + 1 = " << p0 + 1 << ", value *(p0 + 1) = " << *(p0 + 1) << '\n';    // Adress p = 0xb364dffe14, value *p = 1025

    
    
    // Declaring pointers
    // Programmers name pointers with a "p" letter prefix in the variable name
    // Just like iterators, pointers are declared to point a specific type value
    // int* pAPointer;             // declare a pointer
    int ip = 7;
    int *pIP = 0;            // declare and initialize a pointer
    cout << pIP << endl;
        
    pIP = &ip;            // declare and initialize a pointer
    cout << *pIP << endl;
    cout << pIP << endl;
    // string* pName = "Victor";
    // cout << pName << endl;
    // cout << *pName << endl; 

    /*
    In general, you should understand how pointers and dereferencing work.

    char *p = new char();  // Now I have a variable named p that contains 
                        // the memory address of a single piece of character
                        // data.

    *p = 'x'; // Here I assign the letter 'x' to the dereferenced value of p; 
            // that is, I look up the location of the memory address contained
            // in p and put 'x' there.

    p = 'x'; // This is illegal because p contains a memory address, 
            // not a character.

    char q = 'x';  // Now I have a char variable named q containing the 
                // character 'x'.

    p = &q;  // Now I assign the address of q (obtained with the reference
            // operator &) to p.  This is legal because p contains a memory
            // address.
    */

    char* pKeyWordB = new char();       // declare and initialize a pointer
    *pKeyWordB = 'B';
    // KeyWordB = 'B';
    cout << pKeyWordB << endl;
    cout << *pKeyWordB << endl;
    // cout << KeyWordB << endl;
    char q = 'B';
    pKeyWordB = &q;
    cout << pKeyWordB << endl;
    cout << *pKeyWordB << endl;

    int value = 1000;
    int* pValue;
    pValue = &value;    // assign pointer pValue adress of variable value
    cout << " '&' is the address operator for pointers\n";
    cout << "Assigning &value to pValue\n";
    cout << "&value is: " << &value << "\n"; // adress of value variable
    cout << "pValue is: " << pValue << "\n"; // adress stored in pointer
    cout << "value is: " << value << "\n";
    cout << "*pValue is: " << *pValue << "\n";    // value pointed to by pointer
    cout << " '*' is the dereference operator for pointers\n\n";
    /*
    Assigning &value to pValue
    &value is: 0x8f5d5ffa28
    pValue is: 0x8f5d5ffa28
    value is: 1000
    *pValue is: 1000
    '*' is the dereference operator for pointers
     */
    
    cout << "Adding 500 to score \n";
    score += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";    // value pointed to by pointer
    /*
    Adding 500 to score
    score is: 1500
    *pScore is: 1500
    */


    // Reasigning Pointers to different objects 
    // at different times during the life of a program
    cout << "Assigning &newScore to pScore\n";
    int newScoreValue = 5000;
    pScore = &newScoreValue;
    cout << "&newScoreValue is: " << &newScoreValue << "\n";
    cout << "pScore is: " << pScore << "\n"; // adress stored in pointer
    cout << "newScoreValue is: " << newScoreValue << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";
    /*
    Assigning &newScoreValue to pScore
    &newScoreValue is: 0x8f5d5ffa24
    pScore is: 0x8f5d5ffa24
    newScoreValue is: 5000
    *pScore is: 5000
    */

    cout << "Assigning &str to pStr\n";
    string str = "score";
    string* pStr = &str; // pointer to string object
    cout << "str is: " << str << "\n";
    cout << "*pStr is: " << *pStr << "\n"; 
    cout << "(*pStr).size() is: " << (*pStr).size() << "\n"; 
    cout << "pStr->size() is: " << pStr->size() << "\n"; 

    return 0;
}



/*
Learning resources:
    https://www.guru99.com/cpp-pointers.html
    https://codescracker.com/cpp/cpp-pointers.htm

*/



