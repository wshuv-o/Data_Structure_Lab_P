#include<iostream>
using namespace std;
class Student{
    public :
        string student_name;
        int student_id;
        double student_cgpa;
        Student(string student_name,  int student_id,  double student_cgpa){
            this->student_name=student_name;
            this->student_id=student_id;
            this->student_cgpa=student_cgpa;
        }
        void showStudent(){
            cout<<"Student name : "<<student_name<<endl;
            cout<<"Student id : "<<student_id<<endl;
            cout<<"Student cgpa : "<<student_cgpa<<endl;
            cout<<endl;
        }
        ~Student(){

        }
};
void BubbleSort(Student s[5], int *c){
    int p=0;
    for(int k=0;k<5;k++){
        for(int i=0;i<4;i++){
            if(s[i].student_cgpa>s[i+1].student_cgpa){
                p++;
                Student temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
        }
    }
    *c=p;
}
void SelectionSort(Student s[5], int *c){
    int p=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(s[i].student_cgpa>s[j].student_cgpa){
                p++;
                Student temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    *c=p;
}
void SearchByCgpa(Student s[5]){
    double a;
    cout<<"Search cgpa : ";
    cin>>a;
    for(int i=0;i<5;i++){
        if(s[i].student_cgpa==a){
            cout<<"\nStudent Found!\n";
            s[i].showStudent();
        }
        else if(s[i].student_cgpa!=a&&i==4){
            cout<<"\nnot found!";
        }
    }
}

int main(){

    int count=0, choice;
    char x;
    Student s[5];
    //s = (Student*)malloc(sizeof(Student)*5);
    cout<<s;
    for(int i=0;i<5;i++){
        cout<<"Enter student "<<i+1<<" information"<<endl;
        cout<<"Student name : ";
        cin>>s[i].student_name;
        cout<<"Student id : ";
        cin>>s[i].student_id;
        cout<<"Student cgpa : ";
        cin>>s[i].student_cgpa;
    }
    
    cout<<"Select your preferable sorting method:\n1. Bubble sort\n2. Selection Sort\n";
    cin>>choice;
    switch (choice){
        case 1: BubbleSort(s, &count);
                break;
        case 2: SelectionSort(s, &count);
                break;
        default: cout<<"Invalid option choosed!\n";
                break;
    }

    
    cout<<"Information sorted!"<<endl;
    cout<<"Total pass : "<<count<<endl<<endl;

    cout<<"Sorted student info:\n";
    for(int i=0;i<5;i++){
        s[i].showStudent();
    }
    cout<<"\nWant to search a student with cgpa? y/n:";
    cin>>x;
    if(x=='y'){
        SearchByCgpa(s);
    }else{
        cout<<"Okay. Thank you!";
    }
 
}
