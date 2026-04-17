#include<iostream>
#include<queue>
using namespace std;
int main(){
  queue<int>q;
  q.push(10);
  q.push(0);
  q.push(100);
  q.push(16);
  cout<<q.size()<<endl;
  q.pop();
   q.pop();
    q.pop();
     q.pop();
  if(q.empty()){
    cout<<"queue is empty"<<endl;

  }
  else{
    cout<<"Queue is not empty"<<endl;
  }
  return 0;
}