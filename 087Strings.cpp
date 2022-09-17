// finding duplicates in a strings;
// Method 3:using bitwise operators;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[] = "findingsssss";
    long int h1 = 0;
    long int h2 = 0;
    long int x = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        x = 1;
        x = x << (a[i] - 97);
        if ((x & h1) > 0)
            h2 = (x & h1) | h2;
        else
            h1 = x | h1;
    }

    x = 1;
    int count{};
    while (count >= 0 && count <= 25)
    {
        if ((h2 & x) > 0)
        {
            cout << char(count + 97) << " is duplicate." << endl;
        }
        x = x << 1;
        count++;
    }
    return 0;
}