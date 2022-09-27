#include<iostream>
using namespace std;
int main(){
    int k=0;
    int n;
    cout<<"Enter the size of first array : ";
    cin>>n;
    int arrayOfNumbers1[n];
    for(int i=0; i<sizeof(arrayOfNumbers1)/4;i++){
        cout<<"Enter a number : ";
        cin>>arrayOfNumbers1[i];
    }
    int n2;
    cout<<"Enter the size of Second array : ";
    cin>>n2;
    int arrayOfNumbers2[n2];
    for(int i=0; i<sizeof(arrayOfNumbers2)/4;i++){
        cout<<"Enter a number : ";
        cin>>arrayOfNumbers2[i];
    }
    int Array_3[(sizeof(arrayOfNumbers1)/4)+(sizeof(arrayOfNumbers2)/4)];
    for(int i=0; i<sizeof(arrayOfNumbers1)/4;i++){
        for(int j=0; j<sizeof(arrayOfNumbers2)/4;j++){
            if(arrayOfNumbers1[i]==arrayOfNumbers2[j]){
                Array_3[k]=arrayOfNumbers1[i];
                k++;
            }
        }
    }
    
    if(k==0){
        cout<<"No common element!";
    }else{
        for(int i=0; i<k;i++){
            cout<<Array_3[i]<<",";
        }
    }



}
