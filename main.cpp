#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <regex>

using namespace std;

class c_math_stuff {
public:
    void division();
    void multiplication();
    void addition();
    void subtraction();
    
    float number_1 = 0;
    float number_2 = 0;
    float returned_number = 0;
    
    stringstream sstream;
    regex letters["a" "b"];
};

void c_math_stuff::addition() {
    c_math_stuff::returned_number = (c_math_stuff::number_1 + c_math_stuff::number_2);
}

void c_math_stuff::subtraction() {
    c_math_stuff::returned_number = (c_math_stuff::number_1 - c_math_stuff::number_2);
}

void c_math_stuff::multiplication() {
    c_math_stuff::returned_number = (c_math_stuff::number_1 * c_math_stuff::number_2);
}

void c_math_stuff::division() {
    c_math_stuff::returned_number = (c_math_stuff::number_1 / c_math_stuff::number_2);
}

c_math_stuff math_stuff;

class c_get_input {
public:
    void get_input();
    void calculate_equation();
};

void get_input() {
    string teststring = "";
    cout << "input the first number here:\n";
    cin >> teststring;
    if(true) {
        cout << "works";
    }
    else
    {
        cout << "doesnt work";
    }
}

int main() {
    
}
