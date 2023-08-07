// Electricity Bill Calculator

#include<iostream>
using namespace std;
int main(){
int unitsConsumed;
cout << "Enter the amount of units consumed" << endl;
cin >> unitsConsumed;
if(unitsConsumed >=1 && unitsConsumed <100){
    cout << "Free";
}else if(unitsConsumed >=100 && unitsConsumed <200){
    cout << 5*unitsConsumed << " units";
}else if(unitsConsumed >=200 && unitsConsumed <300){
    cout << 10*unitsConsumed << " units";
}else{
    cout << 12*unitsConsumed << " units";
}

cout << ((unitsConsumed > 100)? "Not Free":"Free")<<endl;

// Case and expression for switch case can be int or char
switch (unitsConsumed/100)
{
case 0:
    cout<<"Free";
    break;
case 1: 
    cout << "5/unit";
    break;
case 2:
    cout << "10/unit";
    break;
case 3:
    cout << "12/unit";
    break;

default:
    cout << "Invalid";
    break;
}


    return 0;
}