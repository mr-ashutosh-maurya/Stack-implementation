#include<iostream>
using namespace std;
class stack{
    int capacity;
    int*arr;
    int top;
    public:
    stack(int c){
        this->capacity=c;
        arr=new int [c];
        this->top=-1;
    }
    void push(int data){  //pushing element in stack
        if(this->top==capacity-1){
            cout<<"overflow ";
            return;
        }
        this->top++;
        this->arr[this->top]=data;
    }
    void pop(){  //removing element from stack
        if(this->top==-1){
            cout<<"Underflow";
            return;
        }
        this->top--;
    }
    int getTop(){  //returning top element of the stack
        return this->arr[this->top];
    }
    bool isFull(){ // checking stack is full or not
        return (this->top==capacity-1);
    }
    int isSize(){  // how much capacity of stack is left.
        return this->capacity-this->top-1;
    }
};
int main(){
    stack st(5); //initializing stack size as 5
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    // st.push(6);
    // cout<<st.getTop()<<endl;
    // cout<<st.isFull();
    cout<<st.isSize();
    return 0;
} 

