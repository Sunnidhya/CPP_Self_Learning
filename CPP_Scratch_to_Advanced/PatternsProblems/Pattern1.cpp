#include <iostream>
using namespace std;


int main() {
  int n,k=1,r=0;
    string a="1";
    cin>>n;
    cout<<a<<endl;
    for(int i=2;i<=n;i++){
        if(i%2==0){
            a="0"+a;
            cout<<a<<endl;
        }
        else{
            a="1"+a;
            cout<<a<<endl;
        }
    }
  return 0;
}