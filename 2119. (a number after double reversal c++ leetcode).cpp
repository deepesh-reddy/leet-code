/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
    class Solution {
public:
    bool isSameAfterReversals(int num) {
        int n=num;
    int x=n,count=0;
    int n1=n;
    while(x!=0)
    {
        count++;
        x=x/10;
    }
    int b=0,count1=0;
    for(int i=0;i<count;i++)
    {
        b=b*10+n%10;
        n=n/10;
    }
    int b1=b;
    while(b1!=0)
    {
        b1=b1/10;
        count1++;
    }
    // cout<<count1;
    // cout<<" b - "<<b<<endl;
    int c=0;
    for(int i=0;i<count1;i++)
    {
        c=c*10+b%10;
        b=b/10;
    }
    
    // cout<<" c - "<<c<<endl;
    if(n1==c)
    {
        // cout<<"\nsame\n";
        return true;
    }
    else
    {
        // cout<<"\nnot same\n";
        return false;
    }
    }
};
int main()
{
    cout<<"Hello World";

    return 0;
}