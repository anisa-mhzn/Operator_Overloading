// relational operator overload
#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		int inch;
	public:
		void input(){
			cout<<"Enter feet and inch: ";
			cin>>feet>>inch;
		}
		bool operator>(const Distance &d){
			int total1= feet*12+inch;
			int total2= d.feet*12+d.inch;
			return total1>total2;
		}
		void display(){
			cout<<feet<<"feet "<<inch<<"inches";
		}
};
int main(){
	Distance d1,d2;
	d1.input();
	d2.input();
	bool result=d1.operator>(d2);
	if(result){
		cout<<"D1 is greater"<<endl;
		d1.display();
	}
	else{
		cout<<"D2 is greater"<<endl;
		d2.display();
	}
	return 0;
}