#include<iostream>
using namespace std;
int factorial(int n){
    int result=1;
    for(int i=2;i<=n;i++){
        result*=i;
    }
    return result;
}

int BinCoff(int N, int R){
    return factorial(N)/(factorial(R)*factorial(N-R));
}

int main(){
    cout << BinCoff(10,2)<<endl;
    return 0;
}
