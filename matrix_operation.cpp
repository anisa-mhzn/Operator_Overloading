//basic operator overloading 
//working in 2D matrix
#include<iostream>
using namespace std;

class Matrix{
	private:
	int a[2][2];
	
	public:
		void input_mat(){
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					cout<<"Enter elements in matrix "<<i<<j<<" ";
					cin>>a[i][j];
				}
			}
		}
	
		Matrix operator+(const Matrix &sum){
			Matrix add;
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					add.a[i][j]= a[i][j]+sum.a[i][j];	
				}
			}
			return add;
		}
		void display_add(){
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					cout<<a[i][j]<<" ";	
				}
				cout<<endl;
			}
			
		}
		
		Matrix operator-(const Matrix &minus){
			Matrix sub;
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					sub.a[i][j]= a[i][j]-minus.a[i][j];	
				}
			}
			return sub;
		}
		
		void display_sub(){
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					cout<<a[i][j]<<" ";	
				}
				cout<<endl;
			}
			
		}
};
int main(){
	Matrix a,b,result,output;
	cout<<"FOR MATRIX A"<<endl;
	a.input_mat();
	cout<<endl;
	cout<<"FOR MATRIX B"<<endl;
	b.input_mat();
	cout<<endl;
	cout<<"SUM OF MATRIX"<<endl;
	result=a+b;
	result.display_add();
	cout<<endl;
	cout<<"MINUS OF MATRIX"<<endl;
	output=a-b;
	output.display_sub();
	
	return 0;
}