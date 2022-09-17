//Case changing of a string;
#include<bits/stdc++.h>
using namespace std;

int main(){
    char A[]="WELCOME";
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        A[i]=A[i]+32;
    }
    cout<<A;
    return 0;
}