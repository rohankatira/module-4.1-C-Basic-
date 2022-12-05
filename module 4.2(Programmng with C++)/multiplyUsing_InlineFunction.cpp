/*write a program to find the multiplication value and the cubic 
value using inline function*/
#include<iostream>
#include<cmath>
using namespace std;
inline void multi(int a,int b,int c){

    cout<<"\nmultiplication: "<<a*b*c;
}
inline void cubic(int x){
    
    cout<<"\ncubic: "<<pow(x,3);
}

int main(){
multi(1,2,3);
cubic(5);

}

