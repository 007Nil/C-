#include <iostream>

using namespace std;

class overload {
    float a;
    float b;
public:
    overload(){
        a= 0;
        b= 0;
    }
    overload(float m, float n){
        a =m;
        b =n;
    }
    void display(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    friend overload operator + (overload, overload);
    friend overload operator * (overload, overload);
};
    overload operator + (overload ob1, overload ob2){
        overload ob3;
        ob3.a = ob1.a+ob2.a;
        ob3.b = ob1.b+ob2.b;
        return ob3;
    }
    overload operator * (overload ob1, overload ob2){
        overload ob3;
        ob3.a = (ob1.a*ob2.a)-(ob1.b*ob2.b);
        ob3.b = (ob1.a*ob2.a)+(ob1.b*ob2.b);
        return ob3;
    }

int main()
{
    overload obj1(5,3);
    overload obj2(5,3);
    overload obj3;
    obj3= obj1+obj2;
    obj3.display();
    cout<<endl;
    obj3 = obj1*obj2;
    obj3.display();
    return 0;
}
