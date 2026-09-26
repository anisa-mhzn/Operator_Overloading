//vector class
//pre increment, (+,> overload)
#include<iostream>
#include<math.h>
using namespace std;

class Vector{
	private:
		int x,y;
		
	public:
		void input(){
			cout<<"Enter vector components ";
			cin>>x>>y;
		}
		
		Vector operator++(){  //preincrement
			++x;
			++y;
			return *this;  //the actual object this pointer points to
		}
		
		Vector operator+(const Vector &v1){
			Vector add;
			add.x=x+v1.x;
			add.y=y+v1.y;
			return add;
		}
		
		bool operator>(const Vector &v2){
			float mag1=sqrt(pow(x,2)+pow(y,2));
			float mag2=sqrt(pow(v2.x,2)+pow(v2.y,2));
			return mag1>mag2;
		}
		
		void display(){
			cout<<x<<"i"<<"+"<<y<<"j"<<endl;
		}
};
int main(){
	Vector v1,v2,v3;
	cout<<"For first vector"<<endl;
	v1.input();
	cout<<"For second vector"<<endl;
	v2.input();
	
	v3=v1+v2;
	cout<<endl<<"Vector Addition "<<endl;
	v3.display();
	
	bool result=v1.operator>(v2);
	if(result){
		cout<<endl<<"Vector 1 is greater "<<endl;
		v1.display();
	}
	else{
		cout<<endl<<"Vector 2 is greater "<<endl;
		v2.display();
	}
	
	cout<<endl<<"Vector 1 before increment "<<endl;
	v1.display();
	++v1;
	cout<<"Vector 1 after increment "<<endl;
	v1.display();
}