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

    return0;
}

// how to install git
// https://youtu.be/i_23KUAEtUM