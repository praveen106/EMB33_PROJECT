//if you are not creating constructor and you are creating object for the constructor that time will get error in object


#include<iostream>
using namespace std;
class A{
	int x;
	int y;
public:
	A(int a,int b){
		x=a;
		y=b;
	}
	A(int a){
		x=a;
		y=a;
	}
	A(){   //if you create constructor it will work while you create object  
		x=30;
		y=40;
	}
	void display(){
		cout<<x<<" "<<y<<endl;
	}
};
int main(){
	A obj1;
	A obj2(11,22);
	A obj3(66);
	obj1.display();
	obj2.display();
	obj3.display();
}