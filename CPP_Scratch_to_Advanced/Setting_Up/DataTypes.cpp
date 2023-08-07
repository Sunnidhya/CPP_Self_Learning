#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    bool a = (4>5);
    char b = 'A';
    int c = 10;
    float d = 10.5f; //lesser precision
    double e = 10000.53456789; // higher precision
    long int f = 123456789;
    cout << setprecision(20) << e <<endl;
    return 0;
}

/*./a.out is for when binary files are to be executed but
if we have .exe file just run it as it is in the terminal. 

Data Type Modifiers are keywords which are used to increase or
decrease the size of existing data types. The common data type
modifiers are signed, unsigned, short, long

*/