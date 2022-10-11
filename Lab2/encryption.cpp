#include<iostream>
using namespace std;

string Encrypt(string text, int key){
    int t;
    for(int i=0;i<text.size();i++){
        if(key==i){
            t=(int)text[i]+2;
            text[i]=(char)t;
            key=key+i;
        }
    }
    return text;
}
int main(){
    int i;
    string a;
    cout<<"Enter a string : ";
    getline(cin, a);
    cout<<"Enter the key : ";
    cin>>i;
    a=Encrypt(a, i);
    cout<<"Ecrypted text: ";
    cout<<a;

}
