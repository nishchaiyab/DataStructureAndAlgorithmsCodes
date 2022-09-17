//checking if two strings are anagram or not(same letters);
#include<bits/stdc++.h>
using namespace std;

int main(){
    char A[]="decimal";
    char B[]="medical";
    int i,H[26]={0},c=0;

    for(int i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]+=1;
    }

    for(int i=0;B[i]!='\0';i++)
    {
        H[B[i]-97]-=1;
    }
    
    for(int i=0;i<26;i++)
    {
        if(H[i]==0)
            c++;
    }
    if(c==26)
        cout<<"Anagram";
    else
        cout<<"Not Anagram";
    return 0;
}