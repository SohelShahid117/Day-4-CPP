#include <iostream>
using namespace std;
// 3.3 Operators in C++ Programming | Guaranteed Placement Course | 3.3

int main()
{
    int a = 10;
    int b;
    // b = a;
    // b = a++; //a will get incremented before next statenment is executed
    b = ++a;
    cout << "b=" << b << endl;
    cout << "a=" << a << endl;

    int i = 1;
    i = i++ + ++i;
    cout << "i=" << i << endl;

    int j = 1;
    j = ++j + ++j;
    cout << "j=" << j << endl;

    int k = 1;
    k = k++ + k++;
    cout << "k=" << k << endl;

    int x = 1;
    int y = 2;
    int z;
    // 1 //2 //1   //2   //3   //4
    z = x + y + x++ + y++ + ++x + ++y;
    cout << "x=" << x << " y=" << y << " z=" << z << endl;
    // x=3,y=4,z=13

    int p = 1, q = 2, r = 3, s;
    s = p-- - q-- - r--;
    cout << endl;
    cout << "p=" << p << endl;
    cout << "q=" << q << endl;
    cout << "r=" << r << endl;
    cout << "s=" << s << endl;

    int n;
    cout << "enter the value of n = ";
    cin >> n;
    if (n > 10)
    {
        cout << n << " is greater than 10" << endl;
    }
    else if (n < 10)
    {
        cout << n << " is less than 10" << endl;
    }
    else
    {
        cout << n << " is equal 10" << endl;
    }

    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << n << " is divisible by 2 & 3 " << endl;
    }
    else if (n % 2 == 0)
    {
        cout << n << " is divisible by 2 " << endl;
    }
    else if (n % 3 == 0)
    {
        cout << n << " is divisible by 3 " << endl;
    }
    else
    {
        cout << n << " is not divisible by 2 & 3 " << endl;
    }
    // cout << 4 << 1;

    cout << true << endl;
    cout << false << endl;
    cout << (5 && 2) << endl;
    cout << (5 || 2) << endl;
    cout << !(5) << endl;
    cout << !(true) << endl;

    int u = 9;
    cout << sizeof(u) << endl;
    float v = 85.6;
    cout << sizeof(v) << endl;

    char ch = 'a';
    cout << sizeof(ch) << endl;
    cout << sizeof(int(ch)) << endl;
    cout << int(ch) << endl;

    int w = (22, 33, 44);
    cout << w << endl;
    cout << &(v) << endl;
    cout << &(w) << endl;

    return 0;
}