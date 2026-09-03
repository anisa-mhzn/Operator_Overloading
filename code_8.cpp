// negation "-" overload 

#include<iostream>
using namespace std;
class Number{
	private:
		int value;
	public:
		Number(int v=0){
			value=v;
		}
		Number operator-(){          // unary minus, no parameter
			Number result;
			result.value = -value;
			return result;
		}
		void display(){
			cout<<"VALUE= "<<value<<endl;
		}
};
int main(){
	Number n1(10);
	cout<<"BEFORE NEGATION:"<<endl;
	n1.display();
	Number n2 = -n1;              // calls operator-()
	cout<<"AFTER NEGATION:"<<endl;
	n2.display();
	return 0;
}