#include<iostream>
#include<stack>
using namespace std;
int main(){
  string str="Krishna";
  stack<char>s;
  string ans = "";
  

  for(int i=0;i<str.length();i++){
    char ch=str[i];
    s.push(ch);

  }
  while(!s.empty()){
    char ch=s.top();
    ans.push_back(ch);
    s.pop();

  }
  cout<<"answer is:"<< ans<<endl;
}