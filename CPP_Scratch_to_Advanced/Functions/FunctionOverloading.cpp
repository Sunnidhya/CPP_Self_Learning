#include<iostream>
using namespace std;
int area(int l, int b){
    return l*b;
}
int area(int l){
    return l*l;
}

int main(){
    cout<<area(10,2)<<endl;
    cout<<area(10);

    return 0;
}