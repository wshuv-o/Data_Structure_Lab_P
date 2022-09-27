#include<iostream>
using namespace std;
int main(){
    int count=0;
    int arr[10]={4,2,2,3,4,5,6,6,9,9};
    for(int i=0; i<10;i++){
        for(int j=0; j<10;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        cout<<"The number"<<arrayOfNumbers1[i]<<"occured"<<count<< "times in the array\n" ;
        count=0;
    }
}
