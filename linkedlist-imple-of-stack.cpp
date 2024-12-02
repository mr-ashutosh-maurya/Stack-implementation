#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
class stack{
    public:
    Node*head;
    int capacity;
    int curr_size;
    stack(int c){ // giving stack capacity
        capacity=c;
        curr_size=0;
        head=NULL;
    }
    bool isEmpty(){ //checking is stack empty or not
        return this->head==NULL;
    }
    bool isFull(){ // checking stack is full or not
        return this->curr_size==this->capacity;
    }
    void push(int data){ //pushing element in stack
        if(this->curr_size==this->capacity) {
            cout<<"Overflow\n";
            return;
        }
        Node*new_node=new Node(data);
        new_node->next=head;
        head=new_node;
    }
    void pop(){   //removing element from stack
        if(this->head==NULL){
            cout<<"underflow\n";
            return;
        }
        Node*new_node=head->next;
        head->next=NULL;
        delete head;
        head=new_node;
    }
    int getTop(){  //fetching top element of the stack
        if(this->head==NULL){
            cout<<"underflow\n";
            return -1;
        } 
        return head->data;
    }
    
};
int main(){
    stack st(5);
    st.pop();
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    cout<<st.getTop();
    return 0;
}