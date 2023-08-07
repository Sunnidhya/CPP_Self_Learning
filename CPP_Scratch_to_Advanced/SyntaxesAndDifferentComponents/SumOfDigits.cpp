#include<iostream>
using namespace std;
int main(){
    int n,sum=0,reverse=0;
    cout << "Enter the number" << endl;
    cin >> n;
    while(n/10 > 0 || n%10 !=0 /* N1=0*/){
        sum += n%10;
        reverse = reverse*10 + n%10;
        n = n/10;
    }

    cout << "The sum is " << sum << endl;
    cout << "The reverse is " << reverse << endl;

    return 0;
}