#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    int n, f=0;
    int count=0;
    int ctr=0;
    cout<<"Enter the size of first array : ";
    cin>>n;
    int arrayOfNumbers1[n];
    int Array_3[n];
    cout<<sizeof(arrayOfNumbers1)<<endl;
    cout<<sizeof(Array_3)<<endl;
    for(int i=0; i<n;i++){
        cout<<"Enter a number : ";
        cin>>arrayOfNumbers1[i];
    }
    sort(arrayOfNumbers1, arrayOfNumbers1+n);
	for (int i=0;i<n;i++){
        while((i<n-1)&&(arrayOfNumbers1[i]==arrayOfNumbers1[i+1]))
            i++;
            Array_3[f]=arrayOfNumbers1[i];
            f++;
    }
    for(int i=0; i<f;i++){
        cout<<Array_3[i]<<",";
    }
	return 0;
}
