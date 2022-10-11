#include<iostream>
using namespace std;

typedef struct {
    int id;
    int completedCredit;
    float cgpa;
} Student;
bool checkForDoubledValue(Student s[3], int id){
    bool a;
    for(int i=0; i<3;i++){
        if(s[i].id==id){
            a= true;
        }else{
            a= false;
        }
    }
    return a;
}
int main(){
    int count=0;
    Student studentArray[3];

    for(int i=0;i<3;i++){
        studentArray[i].id=0;
        studentArray[i].completedCredit=0;
        studentArray[i].cgpa=0;
    }
    cout<<"Enter the details of 3 student.\n";
    for(int i=0; i<3;i++){
        int temp;
        cout<<"Enter the id : ";
        cin>>studentArray[i].id;
        temp=studentArray[i].id;
        cout<<"Enter total completed credit : ";
        cin>>studentArray[i].completedCredit;
        cout<<"Enter cgp : ";
        cin>>studentArray[i].cgpa;
        for(int j=0; j<count;j++){
            if(studentArray[j].id==temp&&(j!=i)){
                cout<<"student already exist!";
                i--;
                break;
            }else{
                cout<<"Enter total completed credit : ";
                cin>>studentArray[i].completedCredit;
                cout<<"Enter cgp : ";
                cin>>studentArray[i].cgpa;
                count++;
                break;
            }
        }

        
    }

    for(int i=0; i<3;i++){
        cout<<"Student "<<i+1 <<" : \n";
        cout<<"Student id :"<<studentArray[i].id<<endl;
        cout<<"completed credit : "<<studentArray[i].completedCredit<<endl;
        cout<<"cgpa : "<<studentArray[i].cgpa<<endl;
    }
}
