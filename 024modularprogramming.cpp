//modular programming;
//using functions;

//area and perimeter of a rectangle;
#include <bits/stdc++.h>
using namespace std;
int Area(int l, int b)
{
    return l * b;
}

int Peri(int l, int b)
{
    int a = 2 * (l + b);
    return a;
}

int main()
{
    int len = 0, wide = 0;
    cout << "Enter the value of len and wide\n";
    cin >> len >> wide;

    cout << "Area of the Rectangle is :" << Area(len, wide) << endl;
    cout << "Perimeter of the Rectangle is :" << Peri(len, wide) << endl;

    return 0;
}