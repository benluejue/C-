#include<iostream>
using namespace std;
class base {
    
public:
    int x;
    void dis() {
        cout << x << " " << y << " " << z;
    }
    base(int x, int y, int z);
protected:
    int y; // 类外不可访问 类内可以访问
private: 
    int z; // 类内可以访问，子类不可
};

base::base(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

/**
*   x y 可以访问
*
    共有继承 z private不可访问 
*/
class son :public base {
public:
    void func(){
        x; // public
        y; // protect
    }
};

/**
    保护继承 
    继承了x，y并把他们变成了 protect 类外不能访问了
    z不可访问
*/
class son2 : protected base {
public:
    void func() {
        x; //
        y;
    }
    son2();
};

/**
*  私有继承
*  继承了x，y并把他们变成了 private 类外不能访问了
*  x,y此时还具有 他的子类不可访问x y的性质
*
**/
class son3 :private base {
public:
    void func() {
        x;
        y;
    }
};
int main() {
    base a(10, 20, 30);
    a.dis();
    son2 b;
}