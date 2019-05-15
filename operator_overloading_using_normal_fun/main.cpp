#include <iostream>

using namespace std;

class complex_number{
    int a,b;
public:
    complex_number (){
        a = 0;
        b = 0;
    }
    complex_number( int m , int n){
        a = n;
        b= m;
    }
    void display (){
        cout<<a<<"+"<<b<<"i"<<endl;
    }

    complex_number operator+ (complex_number);
};

    complex_number complex_number :: operator + (complex_number ob){
            complex_number obj;
            obj.a = a+ob.a;
            obj.b = b+ob.b;
            return obj;
    }

int main()
{
    complex_number ob1(3,2);
    complex_number ob2(5,3);
    complex_number ob3;
    ob1.display();
    ob2.display();
    ob3 = ob1+ob2;  //Operator Overloading
    ob3.display();
    return 0;
}
