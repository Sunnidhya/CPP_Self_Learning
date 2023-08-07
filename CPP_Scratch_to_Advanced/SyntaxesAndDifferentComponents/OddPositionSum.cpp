#include<iostream>
using namespace std;
int main(){
    int n,i=0,sum=0;;
       cin>>n;
       while(n!=0){
           i++;
           if(i%2!=0){
               sum+=n%10;
           }
           n/=10;
       }
       cout<<sum;
    return 0;
}