#include <iostream>
#include <cmath>

using namespace std;

// these are solutions to the first set of problems from
// variable, operator and expression
// found on https://www.cppforschool.com/assignment

// write a program to print HELLO WORLD on screen
void one()
{
    cout << "Program 1: cout statements" << endl;
    cout << "HELLO WORLD" << endl;
}

// write a program to display the output in a single cout statement
void two()
{
    cout << "Program 2: cout statements" << endl;
    cout << "Subject\t\tMarks\nMathematics\t90\nComputer\t77\nChemistry\t69" << endl;
}

// write a program which accepts two numbers and prints the sum
void three()
{
    int a, b;
    cout << "Program 3: sum of two numbers" << endl;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
}

// write a program which accepts temperature in F and prints in C
void four()
{
    double a;
    cout << "Program 4: F to C conversion" << endl;
    cout << "Enter temperature in F: ";
    cin >> a;
    cout << "Temperature in C is: " << ((a - 32) * 5 / 9) << endl;
}

// write a program which accepts principle, rate and time from user and prints
// the simple interest
void five()
{
    double principle, rate;
    int time;
    cout << "Program 5: simple interest calculator" << endl;
    cout << "Enter principle=> ";
    cin >> principle;
    cout << "Enter rate=> ";
    cin >> rate;
    cout << "Enter time in years=> ";
    cin >> time;
    cout << "The simple interest is: " << ((principle * rate * time) / 100) << endl;
}

// write a program which accepts a character and displays its ASCII value
void six()
{
    char character;
    cout << "Program 6: character ASCII value" << endl;
    cout << "Enter a character: ";
    cin >> character;
    cout << "The ASCII value of the character is: " << int(character) << endl;
}

// write a program to swap the values of two vars
void seven()
{
    int x, y, z;
    cout << "Program 7: swapping values" << endl;
    cout << "Enter two values: ";
    cin >> x >> y;
    cout << "x: " << x << "\ty: " << y << "\tbefore swapping" << endl;
    z = y;
    y = x;
    x = z;
    cout << "x: " << x << "\ty: " << y << "\tafter swapping" << endl;
}

// write a program to calculate area of circle
void eight()
{
    const int pi = 3.14159;
    double r;
    cout << "Program 8: Circle area calculator" << endl;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "The area of the circle is: " << (pi * pow(r, 2)) << endl;
}

// write a program to check whether a given number is pos or neg
// using ternary operator
void nine()
{
    int n;
    cout << "Program 9: pos or neg with ternary operator" << endl;
    cout << "Enter a number: ";
    cin >> n;
    string sign = n >= 0 ? "Positive!" : "Negative!";
    cout << sign << endl;
}

// write a program to check whether a given number is even or odd
// using ternary operator
void ten()
{
    int n;
    cout << "Program 10: even or odd with ternary operator" << endl;
    cout << "Enter a number: ";
    cin >> n;
    string result = n % 2 == 0 ? "Even!" : "Odd!";
    cout << result << endl;
}

int main()
{
    // one();
    // two();
    // three();
    // four();
    // five();
    // six();
    // seven();
    // eight();
    // nine();
    // ten();

    // system("pause");
    return 0;
}