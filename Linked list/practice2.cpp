#include<iostream>
using namespace std;

// void sum(int i,int j){
//     cout << i+j << endl;
// }
// int main(){
//     int a,b;
//     cin >> a >> b;

//     sum(a,b);
// }

void dosomething(int &n){
    cout << n << endl;
    n=n+5;
    cout << n << endl;
    n=n+5;
    cout << n << endl;
}

int main(){
    int k;
    cin >> k;

    dosomething(k);

    cout << k << endl;
    return 0;
    
}