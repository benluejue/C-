#include<iostream>
using namespace std;
class A{
public:
	// �вι���
	A(int a){
		age = a;
		cout<<"�вι���"<<endl;
	}	
private:
	int age; 
};


class B{
public:
	// �вι���
	explicit B(int b){
		age = b;
		cout<<"�вι���"<<endl;
	}	
private:
	int age; 
};


int main(){
	/**
	*	δ��explicit�������ε�A 
	*/
	
	// 1���ŷ�
	A a1(10);
	
	// 2 ��ʾ��
	A a2 = A(10);
	A a3 = A(a2); 
	
	// ��ʽת����
	A a4 = 10;
	A a5 = a4; 
	 
	/**
	*	��explicit�������ε�B
	*/
		// 1���ŷ�
	B b1(10);
	
	// 2 ��ʾ��
	B b2 = B(10);
	B b3 = B(b2); 
	
// ��ʽת����  
//	B b4 = 10;
//	B b5 = b4; 
} 
