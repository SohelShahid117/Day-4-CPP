#include <iostream>
using namespace std;

int main()
{
    // int a;
    // a = 6;
    // cout << a << endl;
    char button;
    cout << "Input a charecter for else if condition - " << endl;
    cin >> button;
    if (button == 'a')
    {
        cout << "A for Apple" << endl;
    }
    else if (button == 'b')
    {
        cout << "B for Ball" << endl;
    }
    else if (button == 'c')
    {
        cout << "C for Cat" << endl;
    }
    else if (button == 'd')
    {
        cout << "D for Doll" << endl;
    }
    else if (button == 'e')
    {
        cout << "E for Egg" << endl;
    }
    else if (button == 'f')
    {
        cout << "F for fish" << endl;
    }
    else
    {
        cout << "I am learning continue..." << endl;
    }

    char button2;
    cout << "Input a charecter for switch condition - ";
    cin >> button2;
    switch (button2)
    {
    case 'a':
        cout << "A for Apple" << endl;
        break;
    case 'b':
        cout << "B for Ball" << endl;
        break;
    case 'c':
        cout << "C for Car" << endl;
        break;
    case 'd':
        cout << "D for Doll" << endl;
        break;
    case 'e':
        cout << "E for Egg" << endl;
        break;
    case 'f':
        cout << "F for Fish" << endl;
        break;
    case 'g':
        cout << "G for Goat" << endl;
        break;

    default:
        cout << "Still I am learning more..." << endl;
        break;
    }

    // int n1, n2;
    float n1, n2;
    cout << "enter 2 numbers : ";
    // cin >> n1,n2;
    cin >> n1 >> n2;

    char opertr;
    cout << "enter an operator symbol:";
    cin >> opertr;

    switch (opertr)
    {
    case '+':
        cout << n1 << "+" << n2 << "=" << n1 + n2;
        break;
    case '-':
        cout << n1 << "-" << n2 << "=" << n1 - n2;
        break;
    case '*':
        cout << n1 << "*" << n2 << "=" << n1 * n2;
        break;
    case '/':
        cout << n1 << "/" << n2 << "=" << n1 / n2;
        break;
        // case '%':
        //     cout << n1 << "%" << n2 << "=" << n1 % n2;
        //     break;

    default:
        cout << "enter an operator symbol:+,-,*,/,%";
        break;
    }

    return 0;
}