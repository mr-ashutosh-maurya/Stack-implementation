#include<iostream>
using namespace std;
class stack{
    public:
    int capacity;
    int top;
    int *arr;
    stack(int c){
        top=-1;
        capacity=c;
        arr=new int[c];
    }
    void push(int data){
         if(top==capacity-1){
            cout<<"overflow ";
            return;
        }
        top++;
        arr[top]=data;
    }
    void pop(){
        if(top==-1) {
            cout<<"underflow";
            return;
        }
        top--;
    }
    int getTop(){
        return arr[top];
    }
};
int main(){
 stack s(5);
 s.push(1);
 s.push(2);
 s.push(3);
 s.push(4);
 cout<<s.getTop()<<endl;
 s.pop();
 cout<<s.getTop();
}