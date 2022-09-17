// finding max and min in a single scan in unsorted list;
#include <iostream>
using namespace std;
 
 
 
void display(int arr[], size_t size){
for(int i{0}; i<size; i++){
cout<<arr[i]<<" ";
}
cout<<endl;
}
 
void MinAndMax(int A[], size_t size){
    int max{A[0]};
    int min{A[0]};
    for(int i{1}; i<size; i++){
        if(A[i]<min){
            min=A[i];
        }
        else if(A[i]>max){
            max = A[i];
        }
    }
    cout<<"Minimum number: "<<min<<","<<" Maximum number: "<<max<<endl;
} 
 
int main(){
 
size_t szArr1{10};
int arr1[]{1,2,3,4,5,6,7,8,9,10};
// int arr1[]{5,8,3,9,6,2,10,7,-1,4};
display(arr1, szArr1);
MinAndMax(arr1, szArr1);
 
return 0;
}
