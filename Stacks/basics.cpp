#include<iostream>
#include<stack>
using namespace std;
class Stack{
  public:
  int *arr;
  int size;
  int top;

  Stack(int size){
    this->size=size;
    arr=new int[size];
    top=-1;
  }
  void push(int element){
    if(top==size-1){
      cout<<"Stack Overflow"<<endl;

    }
    else{
      top++;
      arr[top]=element;
    }

  }
  void pop(){
    if(top==-1){
      cout<<"Stack underflow"<<endl;

    }
    else{
      top--;
    }
  }
    int peek(){
      if(top!=-1){
        return arr[top];
      }else{
        cout<<"Stack Underflow"<<endl;
        return -1;


      }
    }

    bool isEmpty(){
      if(top==-1){
        return true;

      }
      else{
        return false;
      }
    }
  
  };

int main(){
  Stack st(5);
  st.push(22);
  st.push(2);
  st.push(10);
  cout<<st.peek()<<endl;
  st.pop();
  cout<<st.peek()<<endl;
  // creatin of stack
  // stack<int>s;

  // s.push(2);
  // s.push(3);
  // s.push(4);
  // s.pop();
  // cout<<"Printing the top element is:"<<s.top()<<endl;
  // if(s.empty()){
  //   cout<<"Stack is empty"<<endl;
  // }
  // else{
  //   cout<<"stack is not empty"<<endl;
  // }

}