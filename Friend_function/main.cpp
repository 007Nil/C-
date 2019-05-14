#include <iostream>

using namespace std;

class frnd {
    int m,n;
public:
    void display(){
        cout<<"Enter two integers :";
        cin>>m>>n;
    }
    friend void sum (frnd);
};

    void sum(frnd ob1){
        cout<<"The Sum is "<<ob1.m + ob1.n<<endl;
    }

int main()
{
    frnd obj;
    obj.display();
    sum(obj);
    return 0;
}
