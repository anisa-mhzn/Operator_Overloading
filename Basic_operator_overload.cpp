// basic operator overload
#include<iostream>
using namespace std;
class complex{
	private:
		int real;
		int imag;
	public:
		void input(){
			cout<<"Enter real and imaginary ";
			cin>>real>>imag;
		}
		void display(){
			cout<<"AFTER ADDING ";
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		complex operator+(const complex &c){
			complex add;
			add.real=real+c.real;
			add.imag=imag+c.imag;
			return add;
		}
};
int main(){
	complex c1,c2,c3;
	c1.input();
	c2.input();
	c3=c1+c2;
	c3.display();
	return 0;
}