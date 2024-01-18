#include<iostream>
using namespace std;

int main(){

    struct student{
        int student_id;
        string student_name;
        string student_address;
    };

    struct student student1 , student2;

    cout<<"Enter the Details of the Student : "<<endl;
    cin>>student1.student_id>>student1.student_name>>student1.student_address;
    cin>>student2.student_id>>student2.student_name>>student2.student_address;

    cout<<"The recieved data is : "<<endl;

    cout<<"The ID of student 1 is : "<<student1.student_id<<endl;
    cout<<"The Name of student 1 is : "<<student1.student_name<<endl;
    cout<<"The Address of student 1 is : "<<student1.student_address<<endl;

    cout<<"The ID of student 2 is : "<<student2.student_id<<endl;
    cout<<"The Name of student 2 is : "<<student2.student_name<<endl;
    cout<<"The Address of student 2 is : "<<student2.student_address<<endl;

    return 0;
}