#include<iostream>
using namespace std;
//  operator overloading

/*
class A {
public : 
int a;
int b;

public:
int sum(){
    return a+b;
}
void operator+ (A&obj){
int value1  = this->a;
int value2 = obj.a;
cout << "output" << value2 - value1;
}
};
int main(){
A obj1 ,obj2;

obj1.a=7;
obj2.a=9;

obj1+obj2;


}
*/

// polymorphism run time method overriding

class A{
    public:
    void speak(){
        cout << "class A speaking " << endl;
        }
};
class B:public A{
    public:
    void speak(){
        cout << "class B speaking" << endl;
    }
};
class C: public A {
    public:
   void speak(){
    cout << "class C speaking" << endl;
   }
};

int main(){
    A obj1;
    B obj2;

    obj1.speak();
    obj2.speak();
}

