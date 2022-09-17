//call by value when structure contain array then structure can pass by value;
#include <bits/stdc++.h>
using namespace std;
struct Test
{
    int A[5];
    int n;
};

void Fun(struct Test t1)
{
    t1.A[0] = 10;
    t1.A[1] = 9;

    cout << t1.A[0] << endl;
}
int main()
{
    struct Test t = {{2, 4, 6, 8, 10}, 5};
    Fun(t);
    return 0;
}