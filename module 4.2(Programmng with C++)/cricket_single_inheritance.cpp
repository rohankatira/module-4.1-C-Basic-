/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class A{

    protected:
    string name;
    string name2;
    string name3;
    string name4;
    int runs;
    int runs2;
    int runs3;
    int runs4;
    public:
    void ask(){
        cout<<"enter the name of player: ";
        cin>>name;
        cout<<"enter the runs of player: ";
        cin>>runs;
        //  cout<<"\nthe player is: "<<name<<endl;
        // cout<<"the run is : "<<runs<<endl;
        }
        
    void ask2(){
        cout<<"enter the second player name: ";
        cin>>name2;
        cout<<"enter the second player runs: ";
        cin>>runs2;
        // cout<<"the player is: "<<name2<<endl;
        // cout<<"the run is: "<<runs2<<endl;
        }
    void ask3(){cout<<"enter the third player name: ";
        cin>>name3;
        cout<<"enter the third player run: ";
        cin>>runs3;
        // cout<<"the player is: "<<name3<<endl;
        // cout<<"the run is: "<<runs3<<endl;
        }   
    void ask4(){
        cout<<"enter the forth player name: ";
        cin>>name4;
        cout<<"enter the forth player run: ";
        cin>>runs4;
        // cout<<"the player is: "<<name4<<endl;
        // cout<<"the run is: "<<runs4<<endl;
    }    

};
class B:public A{
    public:
    void print(){
        cout<<"\nthe player is: "<<name<<endl;
        cout<<"the run is : "<<runs<<endl;
        cout<<"the player is: "<<name2<<endl;
        cout<<"the run is: "<<runs2<<endl;
        cout<<"the player is: "<<name3<<endl;
        cout<<"the run is: "<<runs3<<endl;
        cout<<"the player is: "<<name4<<endl;
        cout<<"the run is: "<<runs4<<endl;
    }
    void perform(){
     
     if (runs>runs2&&runs>runs3&&runs>runs4)
     {
        cout<<"player name is: "<<name<<endl<<"player runs is: "<<runs;
     }
     else if(runs2>runs&&runs2>runs3&&runs2>runs4)
     {
        cout<<"player name is: "<<name2<<endl<<"player runs is: "<<runs2;
     }
     else if(runs3>runs&&runs3>runs2&&runs3>runs4)
     {
        cout<<"player name is: "<<name3<<endl<<"player runs is: "<<runs3;
    }
    //else if(runs4>runs||runs4>runs2||runs4>runs3)
    //{
      //  cout<<"player name is: "<<name4<<endl<<"player runs is: "<<runs4;
    //}
    else cout<<"player name is: "<<name4<<endl<<"player runs is: "<<runs4;
     

    }
    void man(){
         if (runs>runs2&&runs>runs3&&runs>runs4)
     {
        cout<<"The man of the match is: "<<name<<endl<<"the best score is: "<<runs<<endl;
     }
     else if(runs2>runs&&runs2>runs3&&runs2>runs4)
     {
        cout<<"The man of the match is: "<<name2<<endl<<"the best score is: "<<runs2<<endl;
     }
     else if(runs3>runs&&runs3>runs2&&runs3>runs4)
     {
        cout<<"The man of the match is: "<<name3<<endl<<"the best score is: "<<runs3<<endl;
    }
    //else if(runs4>runs||runs4>runs2||runs4>runs3)
    //{
      //  cout<<"player name is: "<<name4<<endl<<"player runs is: "<<runs4;
    //}
    else cout<<"The man of the match is: "<<name4<<endl<<"the best score is: "<<runs4<<endl;
     


    }
    void worst(){
         if (runs<runs2&&runs<runs3&&runs<runs4)
     {
        cout<<"The worst player is: "<<name<<endl<<"the run is: "<<runs<<endl;
     }
     else if(runs2<runs&&runs2<runs3&&runs2<runs4)
     {
        cout<<"The worst player is: "<<name2<<endl<<"the run is: "<<runs2<<endl;
     }
     else if(runs3<runs&&runs3<runs2&&runs3<runs4)
     {
        cout<<"The worst player is: "<<name3<<endl<<"the run is: "<<runs3<<endl;
    }
    //else if(runs4>runs||runs4>runs2||runs4>runs3)
    //{
      //  cout<<"player name is: "<<name4<<endl<<"player runs is: "<<runs4;
    //}
    else cout<<"The worst player is: "<<name4<<endl<<"the run is: "<<runs4<<endl;
     

    }

};


int main(){
    int choice;
B obj;
obj.ask();
obj.ask2();
obj.ask3();
obj.ask4();
cout<<"press 1: to know the full table\npress 2: to know whose the best in this match\npress 3: to know the man of the match\npress 4: to know the worst player of the match\npress your choice: ";
cin>>choice;
switch (choice)
{
case 1:
    obj.print();
    break;
    case 2:
   obj.perform();
    break;
    case 3:
    obj.man();
    break;
    case 4:
    obj.worst();
    break;

default:
cout<<"invalid input";
    break;
}
//obj.print();
//obj.perform();

}