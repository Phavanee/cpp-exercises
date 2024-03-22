#include <iostream>
#include <cmath>
using namespace std;

void one(){
    int a;
    cout << "enter a number: ";
    cin >> a;
    if(a%2==0) cout << "even\n";
    else cout << "odd\n";
}

void two(){
    int a;
    cout << "enter a number: ";
    cin >> a;
    if(a<0) cout << -a << endl;
    else cout << a << endl;
}

void three(){
    float tot, price;
    int quantity;
    cout << "what is the price per unit and the quantity? ";
    cin >> price >> quantity;
    tot = price * quantity;
    if(tot > 5000) cout << "total: " << tot*0.9 << endl;
    else cout << "total: " << tot << endl;
}

void four(){
    float cost, sell;
    cout << "enter cost and selling price: ";
    cin >> cost >> sell;
    if(cost-sell > 0) cout << "loss" << endl;
    else cout << "profit" << endl;
}

void five(){
    int r,s,a;
    cout << "give age of ram, sulabh and ajay: ";
    cin >> r >> s >> a;
    if((r>s) && (r>a)) cout << r << endl;
    else if((s>r) && (s>a)) cout << s << endl;
    else cout << a << endl;
}

void six(){
    float a,b,c;
    cout << "enter all 3 angles: ";
    cin >> a >> b >> c;
    if(a+b+c == 180) cout << "valid triangle\n";
    else cout << "invalid triangle\n";
}

void seven(){
    int a;
    cout << "enter year: ";
    cin >> a;
    if(a%4 == 0) cout << "leap year\n";
    else cout << "not a leap year\n";
}

void eight(){
    float a;
    cout << "enter salary: ";
    cin >> a;
    if(a<1500) a += a*0.1 + a*0.9;
    else a += 500 + a*0.98;
    cout << "gross salary: " << a << endl;
}

void nine(){
    int a;
    float tot;
    cout << "enter calls: ";
    cin >> a;
    if(a>200) tot += (a-200)*0.4 + 50*0.6 + 50*0.5 + 200;
    else if(a>150) tot += (a-150)*0.5 + 50*0.6 + 200;
    else if(a>100) tot += (a-100)*0.6 + 200;
    else tot = 100;
    cout << "total is: " << tot << endl;
}

void ten(){
    float a,b,c;
    cout << "enter a, b and c: ";
    cin >> a >> b >> c;
    if(a<0) cout << "not a quadratic eqn!\n";
    else cout << ((-b) + sqrt(pow(b,2) - 4*a*c))/(2*a) << ", " << ((-b) - sqrt(pow(b,2) - 4*a*c))/(2*a) << endl;
}

void eleven(){
    int a;
    cout << "enter score: ";
    cin >> a;
    
    if(a>=60) cout << "first division\n";
    else if(a>=50) cout << "second division\n";
    else if(a>=40) cout << "third division\n";
    else cout << "fail\n";
}

void twelve(){
    char a;
    cout << "enter a char: ";
    cin >> a;

    if(a>64 && a<91) cout << "A-Z\n";
    else if(a>96 && a<123) cout << "a-z\n";
    else if(a>47 && a<58) cout << "0-9\n";
    else cout << "special symbols\n";
}

int main(){
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
    // eleven();
    // twelve();
    system("pause");
    return 0;
}