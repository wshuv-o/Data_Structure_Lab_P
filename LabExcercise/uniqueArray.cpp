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

    int Array_3[(sizeof(arrayOfNumbers1)/4)];
    for(int i=0; i<sizeof(arrayOfNumbers1)/4;i++){
        for(int j=i+1; j<sizeof(arrayOfNumbers1)/4;j++){
            if(arrayOfNumbers1[i]==arrayOfNumbers1[j]){
                Array_3[k]=arrayOfNumbers1[j];
                k++;
            }
            else
            {
                Array_3[k]=arrayOfNumbers1[i];
                k++;
            }
        }
    }
    if(k==0){
        cout<<"Array is already unique!";
    }else{
        for(int i=0; i<k;i++){
            cout<<Array_3[i]<<",";
        }
    }

}