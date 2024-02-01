#include<iostream>
#include<queue>
using namespace std;

// int main(){
// queue<int> q;
// q.push(11);
// q.push(12);
// q.push(13);

// cout << "front element "<< q.front()<<endl;
// cout << "rear element " << q.back()<<endl;

// q.pop();
// q.pop();
// q.pop();

// if(q.empty())
// cout << "queue is empty" << endl;

// cout << "size of queue " << q.size() << endl;

// }

//  doubly ended queue

int main(){
    deque<int>d;

    d.push_front(10);
    d.push_front(12);
    d.push_back(13);
    d.push_back(15);

    d.pop_front();
    d.pop_back();

    cout << d.front() << "  "<< d.back() << endl;

    if(d.empty()){
    cout << "is empty" << endl;
    }
    else{
        cout << "not empty" << endl;
    }

}