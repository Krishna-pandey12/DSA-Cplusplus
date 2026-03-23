#include<iostream>
// #include "hero.cpp"
using namespace std;
class Hero{
    public:
    int health;
    public:
    int level;
};
int main(){
    Hero ramesh;
    ramesh.health=70;
    ramesh.level=20;
    cout<<ramesh.health<<endl;
    cout<<ramesh.level<<endl;

    // cout <<"size:"<<sizeof(ramesh)<<endl;
    return 0;

}