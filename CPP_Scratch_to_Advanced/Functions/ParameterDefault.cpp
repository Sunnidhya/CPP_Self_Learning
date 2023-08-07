#include<iostream>
using namespace std;
void play(int a,int b);

void temp(int a=5){
    cout<<"Hello"<<endl;
}

int main(){
    temp();
    play(10,11);
    return 0;
}

void play(int a,int b){
    cout<<a+b;
}