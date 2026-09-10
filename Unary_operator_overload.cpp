//unary operator

#include<iostream>
using namespace std;
class Counter{
	private:
		int count;
	public:
	Counter(int c=0){
		count=c;
	}
	Counter operator++(){
		++count;
		return *this;
	}
	void display(){
		cout<<"VALUE AFTER PRE INCREAMENT "<<count<<endl;
	}
};
int main(){
	Counter obj1(5), obj2;
	cout<<"ORIGINAL VALUE "<<endl;
	obj1.display();
	obj2=++obj1;
	obj2.display();
}
