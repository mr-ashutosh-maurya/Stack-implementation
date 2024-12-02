#include<bits/stdc++.h>
using namespace std;
void v(stack<int>&s,stack<int>&result){ //copy element of stack into another stack in same order
    if(s.empty()) return;
    int curr=s.top();
    s.pop();
    v(s,result);
    result.push(curr);
}
int main(){
    stack<int>s;
    stack<int>result;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    v(s,result);
    cout<<result.top();
}