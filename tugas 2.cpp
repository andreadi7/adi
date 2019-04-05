#include<iostream>
using namespace std;

class  apel1{
	public :
	int x;
	void nilaix(){
		cout<<"jumlah apel milik X = "; cin>>x;
	}
	void overriding(){
		cout<<"di beli"<<endl;
	}
};

class apel2{
	public :
	int y;
	void nilaiy(){
		cout<<"jumlah apel milik Y = ";cin>>y;
	}
	void overriding(){
		cout<<"di jual"<<endl;
	}
};

class hitung : public apel1,public apel2{
	public :
	void hit(){
		cout<<"jumlah seluruh apel = "<<x+y<<endl;
	}
	void overriding(){
		cout<<"di makan"<<endl;
	}
		
};

int main(){
	hitung has1;
	has1.nilaix();
	has1.nilaiy();
	has1.hit();
	has1.overriding();
	has1.overriding();
}
