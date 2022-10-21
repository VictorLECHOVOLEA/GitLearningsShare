// Everything I know about Pointers
// made by Victor Lechovolea
// https://github.com/VictorLECHOVOLEA/GitLearning.git

#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "\n:::::: POINTERS! ::::::\n";
    cout << "\n:::What are pointers? :::\n\n";
    cout << "Pointers are a powerful part of C++. In some ways, they behave like iterators from\n";
    cout << "the STL. Often you can use them in place of references. But pointers offer func-tionality that \n";
    cout << "no other part of the language can.\n";
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

    cout << "\n:::::: About variables and pointers! ::::::\n";
    cout << "::: About VARIABLES :::\n";
    int a;                  // declaration of a variable int type
    int score = 5;        // declaration and initialization of a variable int type
    cout << "score  = " << score << "       | This is the initialized 'score' variable which store a value of 5." << '\n';
    cout << "    a  = " << a << "       | 'a' variable was uninitialized, so a random values was assigned to." << "\n\n";
    
    int newScore = 90;
    score = newScore, a = 15;    // changing initial values of variables and assigning a new variable to an existing variable
    cout << "score  = " << score << "      | This is the updated value stored in the 'score' variable." << '\n';
    cout << "    a  = " << a << "      | This is the updated value stored in the 'a' variable." << "\n\n";

    cout << "\n::: About POINTERS :::\n";
    int *p;                 // declaration of a pointer
    cout << "int *p       | Declaration of a pointer\n"; 
    int *pScore = 0;        // declaration and initialization of a pointer
    cout << "int *pScore  | Declaration and initialization of a pointer\n";

    // Assigning adresses of variables to pointers;
    pScore = &score; // pScore takes the adress of score.
    p = &a;
    cout << "pScore = &score or p = &a  | Assignments of variables adresses to pointers.\n";

    cout << "p  = " << p << " | This is 'p' address." << '\n';          // p = 0x37a27ff808 
    cout << "&a = " << &a << " | This is variable 'a' address."<<'\n';  // &a = 0x37a27ff808
    cout << "&p = " << &p << '\n';  // &p = 0x37a27ff800
    cout << "*p = " << *p << " | This is '*p' dereferenced --> displays the value of variable pointed by 'p'. " <<'\n';  // derefrencing
    
    *p = 8;
    cout << "*p = 8  | Assigning a new value to pointer. \n";
    cout << "p = " << p << " | After the new assignment, the 'p' adress remained the same. \n";
    cout << "a = " << a << " | Pointer 'p' was chaanged, so 'a' variable changed also. " << '\n';    // a = 8

    cout << "----END OF POINTERS BASICS-----\n";


    
    
    
    
    

    // int a = 10;
    // int *p;
    // p = &a;
    // //  Pointer Arithmetic
    // cout << "Adress p is = " << p << '\n';                          // Adress p is = 0x4092bffce4
    // cout << "Value at adress *p is = " << *p << '\n';               // Value at adress *p is = 10
    // cout << "Size of integer is " << sizeof(int) << " bytes." << '\n';  // Size of integer is 4 bytes.
    // cout << "Adress p + 1 is = " << p + 1 << '\n';                  // Adress p + 1 is = 0x27183ff6a8
    // cout << "Adress p + 2 is = " << p + 2 << '\n';                  // Adress p + 2 is = 0x46157ffc5c
    // cout << "Value at adress *(p + 1) is = " << *(p + 1) << '\n';   // Value at adress *(p + 1) is = -56625628




    // //Pointers
    // int a = 1025; // declare an integer
    // int *p;         // declare a pointer to integer
    // p = &a;         // store the adress of p in the a variable by using the unprocent operator
    // cout << "Size of integer is " << sizeof(int) << '\n';
    // cout << "Adress p = " << p << ", value *p = " << *p << '\n';    // Adress p = 0xb364dffe14, value *p = 1025
    // cout << "Adress p + 1 = " << p + 1 << ", value *(p + 1) = " << *(p + 1) << '\n';    // Adress p + 1 = 0x81e55ff6e0, value *(p + 1) = 337844016

    // char *p0; // declare a character pointer p0;
    // p0 = (char*)p; // typecasting
    // cout << "Size of char is " << sizeof(char) << '\n';                 // Size of char is 1
    // cout << "Adress p0 = " << p0 << ", value *p0 = " << *p0 << '\n';    // Adress p0 = ☺♦, value *p0 = ☺
    // // 1025 = 00000000 00000000 00000100 00000001
    // cout << "Adress p0 + 1 = " << p0 + 1 << ", value *(p0 + 1) = " << *(p0 + 1) << '\n';    // Adress p = 0xb364dffe14, value *p = 1025

    
    













    
    // // '*' after the variable type indicates the declaration of a pointer (int* pScore)
    // // '*' in front of a pointer is the dereference operator for pointers   (string* pName)

    // // Declaring pointers
    // // Programmers name pointers with a "p" letter prefix in the variable name
    // // Just like iterators, pointers are declared to point a specific type value
    // // int* pAPointer;             // declare a pointer
    // int number = 7
    // int *pScore = 0;            // declare and initialize a pointer
    // cout << pScore << endl;
        
    // pScore = &number;            // declare and initialize a pointer
    // cout << *pScore << endl;
    // cout << pScore << endl;
    // // string* pName = "Victor";
    // // cout << pName << endl;
    // // cout << *pName << endl; 

    // char* pKeyWord = 'B';       // declare and initialize a pointer
    // cout << pKeyWord << endl;
    // cout << *pKeyWord << endl;

    // int score = 1000;
    // pScore = &score;    // assign pointer pScore adress of variable score
    // cout << " '&' is the adress operator for pointers\n";
    // cout << "Assigning &score to pScore\n";
    // cout << "&score is: " << &score << "\n"; // adress of score variable
    // cout << "pScore is: " << pScore << "\n"; // adress stored in pointer
    // cout << "score is: " << score << "\n";
    // cout << "*pScore is: " << *pScore << "\n";    // value pointed to by pointer
    // cout << " '*' is the dereference operator for pointers\n\n";
    // /*
    // Assigning &score to pScore
    // &score is: 0x8f5d5ffa28
    // pScore is: 0x8f5d5ffa28
    // score is: 1000
    // *pScore is: 1000
    // '*' is the dereference operator for pointers
    //  */
    
    // cout << "Adding 500 to score \n";
    // score += 500;
    // cout << "score is: " << score << "\n";
    // cout << "*pScore is: " << *pScore << "\n\n";    // value pointed to by pointer
    // /*
    // Adding 500 to score
    // score is: 1500
    // *pScore is: 1500
    // */


    // // Reasigning Pointers to different objects 
    // // at different times during the life of a program
    // cout << "Assigning &newScore to pScore\n";
    // int newScore = 5000;
    // pScore = &newScore;
    // cout << "&newScore is: " << &newScore << "\n";
    // cout << "pScore is: " << pScore << "\n"; // adress stored in pointer
    // cout << "newScore is: " << newScore << "\n";
    // cout << "*pScore is: " << *pScore << "\n\n";
    // /*
    // Assigning &newScore to pScore
    // &newScore is: 0x8f5d5ffa24
    // pScore is: 0x8f5d5ffa24
    // newScore is: 5000
    // *pScore is: 5000
    // */

    // cout << "Assigning &str to pStr\n";
    // string str = "score";
    // string* pStr = &str; // pointer to string object
    // cout << "str is: " << str << "\n";
    // cout << "*pStr is: " << *pStr << "\n"; 
    // cout << "(*pStr).size() is: " << (*pStr).size() << "\n"; 
    // cout << "pStr->size() is: " << pStr->size() << "\n"; 

    return 0;
}



