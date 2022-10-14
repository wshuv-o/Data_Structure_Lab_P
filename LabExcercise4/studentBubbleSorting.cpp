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
        }
        ~Student(){

        }
};
int main(){

    Student s1= Student("Waisma", 21, 3.65);
    Student s2= Student("Abhash", 24, 3.61);
    Student s3= Student("Subha", 200, 3.68);
    Student s4= Student("Wahid", 201, 3.75);
    Student s5= Student("Shuvo", 261, 3.05);
    Student s[]={s1,s2,s3,s4,s5};
    for(int k=0;k<5;k++){
        for(int i=0;i<4;i++){
            if(s[i].student_cgpa>s[i+1].student_cgpa){
                Student temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
        }
    }
    

    for(int i=0;i<5;i++){
        s[i].showStudent();
    }
}
