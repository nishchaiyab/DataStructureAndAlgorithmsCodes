//taylor series using horner's rule;
#include <bits/stdc++.h>
using namespace std;
double e(int x, int n)
{
    static double S = 1;
    if (n == 0)
        return S;
    S = 1 + x * S / n;
    return e(x, n - 1);
}

double eI(int x, int n)
{
    double num = 1, den = 1, S = 1;
    int i;
    for (i=1;i <=n; i++)
    {
        num*=x;
        den*=i;
        S += num / den;
    }
    return S;
}
int main()
{
    double x, n;
    cout << "Entr values for x and n\n";
    cin >> x >> n;
    cout << eI(x, n) << endl;
    return 0;
}