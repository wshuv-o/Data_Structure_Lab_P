#include<iostream>
using namespace std;
int main(){
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

    int arrayOfNumbers3[(sizeof(arrayOfNumbers1)/4)+(sizeof(arrayOfNumbers2)/4)];
    int k=0;
    for(int i=0, j=0; i<(sizeof(arrayOfNumbers3)/4); i++){
        if(i<(sizeof(arrayOfNumbers1)/4))
            arrayOfNumbers3[i]=arrayOfNumbers1[i];
        else{
            arrayOfNumbers3[i]=arrayOfNumbers2[k];
            k++;
        }
    }
        for(int i=(sizeof(arrayOfNumbers3)/4)-1; i>=0; i--){
            cout<<arrayOfNumbers3[i]<<",";
        }
        cout<<sizeof(arrayOfNumbers3)/4;

}
