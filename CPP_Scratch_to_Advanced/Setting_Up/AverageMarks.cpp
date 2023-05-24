#include<iostream>
using namespace std;

int main(){
	int n,sum=0,marks;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>marks;
		sum = sum + marks;
	}

	cout << sum/(float)n;

	return 0;
}