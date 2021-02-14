#include<iostream>
using namespace std;
class A{
public:
	// 有参构造
	A(int a){
		age = a;
		cout<<"有参构造"<<endl;
	}	
private:
	int age; 
};


class B{
public:
	// 有参构造
	explicit B(int b){
		age = b;
		cout<<"有参构造"<<endl;
	}	
private:
	int age; 
};


int main(){
	/**
	*	未用explicit进行修饰的A 
	*/
	
	// 1括号法
	A a1(10);
	
	// 2 显示法
	A a2 = A(10);
	A a3 = A(a2); 
	
	// 隐式转换法
	A a4 = 10;
	A a5 = a4; 
	 
	/**
	*	用explicit进行修饰的B
	*/
		// 1括号法
	B b1(10);
	
	// 2 显示法
	B b2 = B(10);
	B b3 = B(b2); 
	
// 隐式转换法  
//	B b4 = 10;
//	B b5 = b4; 
} 
