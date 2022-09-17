//finding duplicates in sorted Arrays using hashing;
#include<iostream>
using namespace std;

void duplicates(int A[], int n)

{
    int maxi = A[0]; // finding maximum
    for (int i = 0; i < n; i++)
    {
        if (A[i] > maxi)
        {
            maxi = A[i];
        }
    }

    int *H = new int[maxi + 1]; // changes
    for (int i = 0; i < maxi + 1; i++)
    { // making 0
        H[i] = 0;
    }

    int i;

    for (i = 0; i < n; i++)

    {

        H[A[i]]++;
    }

    for (i = 1; i <= maxi; i++)

    {

        if (H[i] >1)

            cout << i<<" is occuring  "<<H[i]<<" times ."<<endl;
    }
    delete[] H;
}

int main()

{

    int n, missingnumber;

    cout << "Enter the size of your array : ";

    cin >> n;

    int *A = new int[n];

    cout << "Enter all the elements : " << endl;

    for (int i = 0; i < n; i++)

    {

        cin >> A[i];
    }

    duplicates(A, n);

    delete[] A;
}