#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    int lives;
    char level;
    
    ~hero(){
        cout << " destructor called" << endl;
    }

    //constructor called
    // hero(){
    // cout << "constructor called" << endl;    
    // }
    // // parameterised constructor
    // hero(int health , char ch){
    //     cout << "constructor" << " "<< this << endl;
    // (*this).health = health;
    // this-> level = level;
      // or we can write this by 
    //   this -> health = health;
    // }

    // char getlevel(){
    //     return level;
    // }

    // void setlevel(char ch){
    //     level=ch;
    // }

};
int main(){
   hero A;
   hero *b = new hero;
   delete b;
   



    // hero ramesh(10);
    // hero *vimlesh = new hero;

    // cout << "address of ramesh" <<" " << &ramesh << endl;

    // ramesh.setlevel('A');
    // cout << "level at which ramesh stands" <<" " <<ramesh.getlevel() << endl;
    // cout << "health of ramesh " << ramesh.health << endl;
    // cout << "lives remaining to ramesh" <<" " << ramesh.lives << endl;

    // delete (vimlesh);
}