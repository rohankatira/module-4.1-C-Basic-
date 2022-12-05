/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance)*/
#include<iostream>
using namespace std;
class student{
protected:
int roll_no;
public:
void getdata(){
    cout<<"enter the roll no: "<<endl;
    cin>>roll_no;
}
};
class test:public student{
protected:
int spanish,bengali;
public:
void getdata2(){
    cout<<"enter the spanish marks: "<<endl;
    cin>>spanish;
    cout<<"enter the begali marks: "<<endl;
    cin>>bengali;
}

};
class result:public test{
    protected:
    int total;
    public:
    void total_mark(){
        total=spanish+bengali;
        cout<<"total marks: "<<total<<endl;

    }
};
int main(){
result r;
r.getdata();
r.getdata2();
r.total_mark();
}