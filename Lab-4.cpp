#include <iostream>
#include <bitset>

using std::cin;
using std::cout;
using std::endl;


void prog1() 
{   // Ввод значений
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    // Условные операторы
    if ((a % c == 0 & b % c == 0) || (a % c == 1 & b % c == 1))  {
        cout << "Result: "<< (a + b) / c<< endl;
    }
    else if ((a % c == 0 & b % c != 0) || (a % c == 1 & b % c != 1)) {
        cout << "Result: "<< (a / c) + b<< endl;
    }
    else {
        cout << "Result: "<< a - b - c<< endl;
    }
}

void prog2() {
    int n;
    cout<< "Enter number -3^3 ";
    cin >> n;
    switch (n)
    {
    case -3: cout << "Negative Three"<< endl; break;
    case -2: cout << "Negative Two"<< endl; break;
    case -1: cout << "Negative One"<< endl; break;
    case 0: cout << "Zero"<< endl; break;
    case 1: cout << "One"<< endl; break;
    case 2: cout << "Two"<< endl; break;
    case 3: cout << "Three"<< endl; break;
    default: cout << "Default"<< endl; break;
    }
}

void prog3() {
    int x;
    cout << "x = ";
    cin >> x;
    if (x == 1) {
        cout << "Positive number"<< endl;
    }
    if (x == -1) {
        cout << "Negative number"<< endl;
    }
    else if (x != 1 & x != -1)
     {
        cout << "Error"<< endl;
    }

}

void prog31() {
    int x;
    cout << "x = ";
    cin >> x;
    switch (x)
    {
    case 1: cout << "Positive Number"<< endl; break;
    case -1: cout << "Negative Number"<< endl; break;
    default: cout << "Error"<< endl; break;
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Programm 1:"<< endl;
    //prog1();
    cout << "Programm 2:"<< endl;
    //prog2();
    cout << "Programm 3:"<< endl;
    prog3();
    cout << "Another Programm 3:"<< endl;
    prog31();
}