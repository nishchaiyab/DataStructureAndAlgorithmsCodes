//call by Reference;
#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int n1, n2;
    cout << "enter the value of n1 and n2\n";
    cin >> n1 >> n2;

    swap(n1, n2);
    cout << "Numbers after using swap function";
    cout << "Number n1 is :" << n1 << endl;
    cout << "Number n2 is :" << n2 << endl;
    return 0;
}