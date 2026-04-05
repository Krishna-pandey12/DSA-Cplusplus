#include<iostream>
#include<stack>
using namespace std;
int main(){
  // creatin of stack
  stack<int>s;

  s.push(2);
  s.push(3);
  s.push(4);
  s.pop();
  cout<<"Printing the top element is:"<<s.top()<<endl;
  if(s.empty()){
    cout<<"Stack is empty"<<endl;
  }
  else{
    cout<<"stack is not empty"<<endl;
  }

}