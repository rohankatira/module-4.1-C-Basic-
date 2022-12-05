/*Write a program to swap the two number with using friend function 
without using third variable*/
#include<iostream>
using namespace std;
class A{
private:
int a,b;
public:
void swap(){
    cout<<"enter the two values: "<<endl;
    cin>>a>>b;
}
friend void func(A obj);     //declare
};
void func(A obj){    //define
int c,d;
c=obj.a;
d=obj.b;
cout<<"before swapping a="<<c<<" b="<<d<<endl;
obj.b=obj.b-obj.a;   //b=20-10=10
obj.a=obj.a+obj.b;   //a=10+10=20
cout<<"after swapping a="<<obj.a<<" b="<<obj.b<<endl;
}
int main(){
A a1;
a1.swap();
func(a1);
}