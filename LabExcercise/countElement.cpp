#include<iostream>
using namespace std;
int main(){
    int k=0;
    int n,s, count=0;
    cout<<"Enter the size of first array : ";
    cin>>n;
    int arrayOfNumbers1[n];
    for(int i=0; i<n;i++){
        cout<<"Enter a number : ";
        cin>>arrayOfNumbers1[i];
    }
    cout<<"Enter a Number to search in array: ";
    cin>>s;
    for(int i=0; i<n;i++){
        if(arrayOfNumbers1[i]==s){
            count++;
        }
    }
    printf("The number occured %d times in the array", count);

}
