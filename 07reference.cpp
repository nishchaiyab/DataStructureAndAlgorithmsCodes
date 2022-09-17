/*Reference is nothing but another name to a variable;*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int &r=a;
    printf("%d\n",a);
    printf("%d\n",r);
    return 0;
}