#include <iostream>

using namespace std;


class two;

class one{
    int a;
public :
    one( int m ){
        a = m;
    }
    friend void manupulation(one,two);
};

class two{
    int b;
public:
    two(int n ){
        b = n;
    }
    friend void manupulation (one,two);
};

    void manupulation ( one ob1, two ob2){
        cout<<++ob1.a<<endl;
        cout<<--ob2.b<<endl;
    }
int main()
{
    one obj1(10);
    two obj2(20);
    manupulation(obj1,obj2);
    return 0;
}
