#include <iostream>

using namespace std;

class complex_addition{
    int a,b;
public:
    complex_addition(){}
    complex_addition( int m, int n){
        a = m;
        b = n;
    }

    void display(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    friend complex_addition operator + ( complex_addition, complex_addition);
};

    complex_addition operator + (complex_addition ob1, complex_addition ob2){
        complex_addition obj;
        obj.a = ob1.a + ob2.a;
        obj.b = ob1.b + ob2.b;
        return obj;
    }
int main()
{
    complex_addition object1(5,5);
    complex_addition object2(5,5);
    complex_addition object3;
    object1.display();
    object2.display();
    object3 = object1 + object2;
    object3.display();
    return 0;
}
