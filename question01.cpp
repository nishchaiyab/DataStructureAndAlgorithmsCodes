/*#include<bits/stdc++.h>
using namespace std
int f(int n)
{
    static int i=1;
    if(n>=5) return n;
    n=n+1;
    i++;
    return f(n);
}


int main(){
    cout<<f(1);
    return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    int a, t, lastDigit, sum;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        sum = 0;
        cin >> a;
        while (a != 0)
        {
            lastDigit = a % 10;
            sum = sum + lastDigit;
            a = a / 10;
        }
        cout << sum << endl;
    }
    return 0;
}
