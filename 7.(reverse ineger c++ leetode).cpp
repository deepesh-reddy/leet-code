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
    int reverse(int x) {
        long int n=x,count;
        

        if(n<0)
        {
            n=abs(x);
        }
        while(n>0)
        {
            n=n/10;
            count++;
        }
        long int b=0;
        for(int i=0;i<count;i++)
        {
            b=b*10+x%10;
            x=x/10;
        }
        if(b<(pow(-2,31)) || b>(pow(2,31)-1) )
        {
            return 0;
        }
        return b;
    }
};
int main()
{
    cout<<"Hello World";

    return 0;
}