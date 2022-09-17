//Cpp class for lower triangular matrix in row major mapping;

#include"bits/stdc++.h"
using namespace std;
class Lowertri
{
private:
    int *A;
    int n;

public:
    Lowertri()
    {
        n = 2;
        A = new int[2*(2+1)/2];
    }
    Lowertri(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    ~Lowertri()
    {
        delete[] A;
    }
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
    int GetDimension() { return n; }
};
void Lowertri::Set(int i, int j, int x)
{
    if (i >= j)
        A[i*(i-1)/2+j-1] = x;
}
int Lowertri::Get(int i, int j)
{
    if (i >= j)
        return A[i*(i-1)/2+j-1];
    return 0;
}
void Lowertri::Display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
                cout << A[i*(i-1)/2+j-1] <<" ";
            else 
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    int d;
    cout << "Enter Dimensions";
    cin >> d;

    Lowertri lm(d);

    int x;
    cout << "Enter All Elements";
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            lm.Set(i, j, x);
        }
    }

    lm.Display();
    return 0;
}