/*Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
Rectangle: length * breadth
Triangle: ½ *base* altitude
Circle: Pi *radius *radius */
#include<iostream>
using namespace std;
class calculator{
public:
void area(int length,int breadth){
    cout<<"area of rectangle: "<<length*breadth<<endl;
}
void area(float base, float altitude){
    cout<<"area of triangle: "<<.5*base*altitude<<endl;
}
void area(int r){
    cout<<"area of circle: "<<3.14*r*r<<endl;
}
};

int main(){
calculator obj;
obj.area(3,3);
obj.area((float)5,(float)6);
obj.area(2);

}