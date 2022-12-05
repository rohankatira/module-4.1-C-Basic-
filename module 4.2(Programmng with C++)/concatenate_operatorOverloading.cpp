/*Write a program to concatenate the two strings using Operator Overloading */
#include<iostream>
// #include<string.h>
using namespace std;

class A{
private:
// char a[20];
// char b[10];
string name;
// string name2;
public:
void getdata(){

    cout<<"enter the string: "<<endl;
    getline(cin,name);
    // cout<<"enter the second string: "<<endl;
    // cin>>b[10];
    // getline(cin,name);
}
void display(){
    cout<<"the name is: "<<name<<endl;
    // cout<<"the second name is: "<<name<<endl;
}
void operator+(A p){
    string result;
   result=name+p.name;
   cout<<"concatenate is : "<<result<<endl;
}
};
int main(){
A obj;
A obj2;
obj.getdata();
obj2.getdata();
obj.display();
obj2.display();
obj+obj2;
}