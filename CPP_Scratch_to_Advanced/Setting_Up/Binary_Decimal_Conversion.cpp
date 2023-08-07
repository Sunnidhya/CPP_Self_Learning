#include<iostream>
using namespace std;
void convertDecimalToBinary(int a);
int main(){
    int number;
    cin>>number;
    convertDecimalToBinary(number);

    return 0;
}

void convertDecimalToBinary(int a){
    if(a==0){
        return;
    }else{
        int temp = a/2;
        int temp1 = a%2;
        convertDecimalToBinary(temp);
        cout<<temp1;
    }
}