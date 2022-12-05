/*Write a Program of Two 1D Matrix Addition using Operator Overloading */
#include<iostream>
using namespace std;
#define N 3
class A{
private:
int a[10];
public:
void getdata(){

    for (int i = 0; i < N; i++)
    {
        cout<<"enter the value: ";
        cin>>a[i];
    }
}
void display(){
    for (int i = 0; i < N; i++)
    {
    cout<<a[i]<<"\t";
    }
    cout<<endl;
}
void operator+(A p){
int result[20];
for (int i = 0; i < N; i++)
{
    result[i]=a[i]+p.a[i];
}
cout<<"the sum is: "<<endl;
for (int i = 0; i < N; i++)
{
    cout<<result[i]<<"\t";
}


}
};

int main(){
A obj1;
A obj2;
obj1.getdata();
obj2.getdata();
obj1.display();
obj2.display();
obj1+obj2;

}