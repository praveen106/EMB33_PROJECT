#include<iostream>
using namespace std;
class A{
	int x;
	int y;
public:
	A(){ //norml constructor
		x=10;
		y=20;
	}
//private: if we put in private we canot acces the A(int a,int b)
	A(int a,int b){ //perametarized constructor 
		x=a;
		y=b;
	}
public:
	void display(){
		cout<<x<<" "<<y<<endl;
	}
};
int main(){
	A obj1;
	A obj2(70,80);
	obj1.display();
	//A obj2(70,80);
	//A obj2(33,44);
	obj2.display();
}
