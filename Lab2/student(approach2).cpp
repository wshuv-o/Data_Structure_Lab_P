#include<iostream>
using namespace std;
int main(){
    string student[3][3];
    /*
    [0][0]=id;
    [0][1]=completedcourse;
    [0][2]=cgpa;
    
    */
   int count=0;
    for(int i=0;i<3;i++){
        cout<<"Enter student id: ";
        cin>>student[i][0];
        for(int j=0;j<i;j++)
        {
            if(i>0&&i==j){
                continue;
            }
            else if(student[i][0]==student[j][0]){
                cout<<"student already exist "<<endl;
                j--;
                continue;
            }else{
                cout<<"Enter student completed course: ";
                cin>>student[i][1];
                cout<<"Enter student cgpa: ";
                cin>>student[i][2];
            }

        }

    }

    for(int i=0;i<3;i++){
        cout<<"Student id: "<<student[i][0]<<endl;
        cout<<"Student completed course: "<<student[i][1]<<endl;
        cout<<"Student cgpa: "<<student[i][2]<<endl;
    }


    cout<<endl<<endl<<endl;
    if("121"=="121")
    cout<<"ibdjsskhhKDH";
}
