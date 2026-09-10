// post increment overload
#include<iostream>
using namespace std;
class Counter{
	private:
		int count;
	public:
		Counter(int c=0){
			count=c;
		}
		void operator++(int){        // int parameter marks this as POST-increment
			count++;
		}
		void display(){
			cout<<"COUNT= "<<count<<endl;
		}
};
int main(){
	Counter c1(5);
	cout<<"BEFORE INCREMENT:"<<endl;
	c1.display();
	c1++;                    // calls operator++(int)
	cout<<"AFTER INCREMENT:"<<endl;
	c1.display();
	return 0;
}