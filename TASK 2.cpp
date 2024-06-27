#include<bits/stdc++.h>
using namespace std;
template<typename T>

class Stacks{
Private:
    T *Stack
    int n;
    int t=-1;
public:
    Stacks(){
    n=5;
    Stack=new T[n];

    }

    Stacks(int n){
    this->n=n;
    Stack=new T[n];
    }

    bool isFull(){
    return t==n-1;

    }

bool isEmpty(){
return t==-1;

}
void push (T x){
cout<<"overflow\n";

}
else {
    Stack [++t]=x;
}
    }
void pop(){
if (isEmpty()){
    cout<<"Underflow\n";

}
else {
    t--;

}
}
void printStack(){
for(int i=t;i>=0;i--) cout <<Stack[i]<<endl;

}

int pop()
