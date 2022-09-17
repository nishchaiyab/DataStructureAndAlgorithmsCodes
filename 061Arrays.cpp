// finding single missing element in an sorted array;
#include <bits/stdc++.h>
using namespace std;
void Missingelement(int arr[])
{
    int sum = 0;
    int n = 12;
    for (int i = 0; i < 11; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of elments present in array" << sum << endl;
    int S = n * (n + 1) / 2;

    cout << "Sum of first n natural numbers\n"
         << S << endl;
    int el = S - sum;

    printf("Missing element is %d\n", el);
}

void Missing(int arr[], int l, int h, int n)
{
    int i = 0;
    int diff = l - 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            printf("Missing element %d\n", (i + diff));
            break;
        }
    }
}

int main()
{
    int arr[] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17};
    // Missingelement(arr);
    Missing(arr, 6, 17, 11);

    return 0;
}