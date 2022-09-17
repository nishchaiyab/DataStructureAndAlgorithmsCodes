#include <bits/stdc++.h>
using namespace std;
template <class T>
class Arthimetic
{
    T a;
    T b;

public:
    Arthimetic(T a, T b);
    T add();
    T sub();
};
template<class T>
Arthimetic<T>::Arthimetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T Arthimetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template <class T>
T Arthimetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}
int main()
{
    Arthimetic<int> ar(10, 5);
    cout << "Addition of two numbers is :" << ar.add() << endl;
    cout << "Subtraction of two numbers is :" << ar.sub() << endl;

    Arthimetic<float> ar2(1.5, 5.5);
    cout << "Addition of two numbers is :" << ar2.add() << endl;
    cout << "Subtraction of two numbers is :" << ar2.sub() << endl;
    return 0;
}