#include <iostream>
using namespace std;
int main()
{
    int n,b,a=1,k=0;
    cin >> n;
     char c;
     while(true){
        c=getc(stdin);
        if(c=='\n') break;
        if(c=='!') ++k;

     }
     while(n>0){
        a*=n;
        n -= k;
     }
    cout << a << endl;

 }