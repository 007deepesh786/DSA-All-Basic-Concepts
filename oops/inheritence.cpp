#include<iostream>
using namespace std;
/*class human{
   public:
   int age=40;
   int weight=70;
   int height=7;

   int getage(){
    return this->age;

   }
   void setwight(int w){
     this->weight;
   }
   int getheight(){
    return this->height;
   }
};
 class male : public human{
    public:
    string color;

    void sleep(){
        cout << "man is sleeping " << endl;
    }

 };
 int main(){
    male object1;

    cout << object1.age << endl;
    cout << object1.weight<< endl;
    cout << object1.getheight() <<  endl;
    cout << object1.color << endl;
 }*/

//  single inheritance

/*class animal{
public:
int age;
int teeth;
int legs;

};
class dog:public animal{
public:
string example;
void setage(int l){
    this->age;
}
int getage(){
    return this->age;
}
};
int main(){
    dog tommy;

    tommy.setage(12);
    cout << "Age of tommy" << tommy.getage() << endl;

}
*/

// multi level inheritence

/*
class animal{
public:
int age;
int teeth;
int legs;

};
class dog:public animal{
public:
string example;
void setage(int l){
    this->age;
}
int getage(){
    return this->age;
}
};
class pitbull : public dog{
  public:
  int bark;

  void bark1(int b){
    cout << "barking " << endl;
  }
};
int main(){
    pitbull g;

    g.bark1(10); 

}
*/

// multiple inheritence

/*
class animal{
   public:
   int age;
   int weight;

   void bark(){
    cout << "barking" << endl;
   }
};
class human{
   public:
   string color;

   void speak(){
    cout << "speaking" << endl;
   }
};
class hybrid:public animal,public human{
    
};
int main(){
    hybrid obj1;
    obj1.bark();
    obj1.speak();
}
*/
// hierarchical inheritence
class A {
public:
void func1(){
    cout << "printing function 1" <<  endl;
}
};
class B:public A{
    public:
    void func2(){
    cout << "printing function 2" <<  endl;
}
};
class C: public A{
    public:
     void func3(){
    cout << "printing function 3" <<  endl;
}
};
int main(){
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;

    obj3.func1();
    obj3.func3();

}


