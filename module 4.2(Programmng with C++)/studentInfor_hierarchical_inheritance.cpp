/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (hierarchical Inheritance)*/
#include<iostream>
using namespace std;
class person{
    protected:
string name;
int age;
public:
void getdata(){
    cout<<"enter the name: ";
    cin>>name;
    // getline(cin,name);
    cout<<"enter the age: ";
    cin>>age;
}
};
class student:public person{
    protected:
    float percen;
    public:
    void percentage(){
        cout<<"enter the percentage: "<<endl;
        cin>>percen;
    }
    void result(){
        cout<<"the name of student is: "<<name<<endl;
        cout<<"the age of student is: "<<age<<endl;
        cout<<"the percentage of student is: "<<percen<<endl;
    }
    
};
class teacher:public person{
protected:
int sal;
public:
void salary(){
    cout<<"enter  the salary teacher: "<<endl;
    cin>>sal;
}
void result2(){
    cout<<"the name of teacher is: "<<name<<endl;
    cout<<"the age of teacher is: "<<age<<endl;
    cout<<"the salary of teacher is: "<<sal<<endl;
    
}
};

int main(){
student s;
teacher t;
s.getdata();
s.percentage();
t.getdata();
t.salary();
s.result();
t.result2();
} 