#include<iostream>
using namespace std;
class base {
    int x;
public:
    void setx(int n) { x = n; }
    int getx() { return x; }
    void showx() { cout << x << endl; }
};
// 共有继承
class derived :public base {
    int y;
public:
    void sety(int n) { y = n; }
    void sety() { y = getx(); }
    void showy() { cout << y << endl; }

};

int main() {

}