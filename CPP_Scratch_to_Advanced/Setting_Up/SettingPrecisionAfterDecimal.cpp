#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b,c;
    cin>> a >> b >> c;
    cout << fixed << setprecision(5) << "The average upto 5 decimal places is" << (float)(a+b+c)/3;

    return 0;
}

/* += -= *= are Compound Assignment operators*/