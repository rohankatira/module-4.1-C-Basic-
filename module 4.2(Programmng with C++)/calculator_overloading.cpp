/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/
#include<iostream>
using namespace std;
class overloading{
private:
int a,b;
public:
void calcee(){
    cout<<"enter the two value: "<<endl;
    cin>>a>>b;
    cout<<"addition: "<<a+b<<endl;
}
void calcee(int a,int b){
    cout<<"substraction: "<<a-b<<endl;
}
void calcee(float a,float b){
    cout<<"multiplication: "<<a*b<<endl;
}
void calcee(int a,float b){
    cout<<"division: "<<a/b<<endl;
}
};

int main(){
overloading obj;
obj.calcee();
obj.calcee(10,5);
obj.calcee((float)5,(float)2);
obj.calcee(22,(float)5);

}