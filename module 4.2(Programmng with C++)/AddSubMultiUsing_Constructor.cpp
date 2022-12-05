/*Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/
#include<iostream>
using namespace std;
class calcee
{
    private: 
    int a,b;
    public:
    calcee(){
        cout<<"enter the first number: ";
        cin>>a;
        cout<<"enter the second number: ";
        cin>>b;
        //cout<<"sum is: "<<a+b;
        //cout<<"sub is: "<<a-b;
    }
    void calcu(){

        cout<<"add is: "<<a+b<<endl;
        cout<<"sub is: "<<a-b<<endl;
        cout<<"multi is: "<<a*b<<endl;
        cout<<"div is: "<<a/b<<endl;
    }

};

int main(){
calcee c;
c.calcu();

} 