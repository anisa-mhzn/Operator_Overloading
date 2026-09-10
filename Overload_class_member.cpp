// operator overloading with class members
#include<iostream>
using namespace std;
class Time{
	private:
		int hours;
		int mins;
	public:
		void input(){
			cout<<"Enter hours and minutes : ";
			cin>>hours>>mins;
		}
		void display(){
			cout<<"Total hours and minutes "<<endl;
			cout<<hours<<"Hours "<<mins<<"Minutes";
		}
		Time operator+(const Time &t){
			Time add;
			add.hours=hours+t.hours;
			add.mins=mins+t.mins;
			if(add.mins>=60){
				add.hours=add.hours+(add.mins/60);
				add.mins=(add.mins%60);
			}
			return add;
		}
};
int main(){
	Time t1,t2,t3;
	t1.input();
	t2.input();
	t3=t1+t2;
	t3.display();
	return 0;
}
