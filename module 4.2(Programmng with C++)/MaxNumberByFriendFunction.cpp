/*Write a program to find the maximum number from given two number 
using friend function*/
#include<iostream>
using namespace std;
class A{
private:
int x,y;
public:
void max(){
    cout<<"enter the two number: "<<endl;
    cin>>x>>y;
}
friend void func(A obj);  //decleration
};
void func(A obj){

    int x,y,c,d;
    c=obj.x;
    d=obj.y;
    if (obj.x>obj.y)
    {
        cout<<"the maximum number: "<<c<<endl;
    }
    else
    cout<<"the maximum numbere: "<<d<<endl;
}

int main(){

A a1;
a1.max();
func(a1);
}