//restriction on operator overloading

#include<iostream>
using namespace std;

class restriction{
public:
    int x;
};

int main(){
    cout<<"RESTRICTIONS:"<<endl;

    cout<<"1.Scope resolution ::"<<endl;
    cout<<" Works on names, not object values."<<endl;

    cout<<"2.sizeof operator"<<endl;
    cout<<" Evaluated at compile-time, before obj exists at runtime."<<endl;

    cout<<"3.Ternary operator ?:"<<endl;
    cout<<" Only supports unary and binary operators."<<endl;

    cout<<"4. Member access operators (. and .*)"<<endl;
    cout<<" Would break ability to access real obj members."<<endl<<endl;

    return 0;
}