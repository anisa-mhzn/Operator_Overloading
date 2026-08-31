// overloading * 

#include<iostream>
using namespace std;
class Box{
	private:
		int length;
		int volume;
	public:
	Box(int l=0){
		length=l;
		volume=0;
	}
	Box operator*(const Box& b){
		Box result;
		result.volume=(length*length*length)*(b.length*b.length*b.length);
		return result;
	}
	void display(){
		cout<<"VOLUME OF BOX(SQUARE)"<<endl;
		cout<<volume;
	}
};
int main(){
	Box b1(5), b2=(4), b3;
	b3=b1*b2;
	b3.display();
}