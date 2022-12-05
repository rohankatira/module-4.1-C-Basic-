/*write a program to find the addition,subtraction and multiplication 
in short calculator by using class and also use switch case*/
#include<iostream>
using namespace std;
class room{
private:
int a,b;
public:
void add(){

    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    cout<<"addition is: "<<a+b<<endl;
}
void sub(){

    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    cout<<"subtraction is: "<<a-b<<endl;

}
void multi(){

cout<<"enter the value of a: "<<endl;
cin>>a;
cout<<"enter the value of b: "<<endl;
cin>>b;
cout<<"multiplication is: "<<a*b<<endl;

}
void div(){

    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    cout<<"division is: "<<(float)a/b<<endl;
}
};

int main(){
   int choice;
    room r;  //object created
    cout<<"\npress 1: for addition\npress 2: for subtraction\npress 3: for multiplication\npress 4: for division\nEnter your choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        r.add();
        break;
        case 2:
        r.sub();
        break;
        case 3:
        r.multi();
        break;
        case 4:
        r.div();
        break;
    
    default:
    cout<<"invalid input";
        break;
    }

}
