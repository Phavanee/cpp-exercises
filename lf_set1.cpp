#include <cmath>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

void one(){
    float principal, rate, time;
    cout << "enter principal, rate and time: ";
    cin >> principal >> rate >> time;
    cout << "compound interest: " << principal*pow((1+(rate/100)),time) << endl;
}

void two(){
    float a,b,c,s;
    cout << "enter sides (3): ";
    cin >> a >> b >> c;
    s = (a+b+c)/2;
    cout << "area: " << sqrt(s*(s-a)*(s-b)*(s-c)) << endl;
}

void three(){
    char a;
    cout << "enter a character: ";
    cin >> a;
    if(isalpha(a)) cout << "alphabet\n";
    else if(isdigit(a)) cout << "digit\n";
    else cout << "special character\n";
}

void four(){
    srand(static_cast<unsigned int>(time(nullptr)));
    cout << rand() % 91 + 10 << endl;
}

void five(){
    char a;
    cout << "enter a lowercase character: ";
    cin >> a;
    a = toupper(a);
    if(isupper(a)) cout << a << endl;
    else cout << "not a valid input\n";
}

void six(){
    srand(static_cast<unsigned int>(time(nullptr)));
    int a = rand() % 101 + 1, guess, count;
    bool win = false;
    while(!win){
        cout << "Enter your guess: ";
        cin >> guess;
        if(guess < a) cout << "guess too low!\n";
        else if(guess > a) cout << "guess too high!\n";
        else{
            cout << "correct! guessed in " << count << " attempts.\n";
            win = true;
        }

        count++;
    }
}

int main(){
    // one();
    // two();
    // three();
    // four();
    // five();
    six();
    system("pause");
    return 0;
}