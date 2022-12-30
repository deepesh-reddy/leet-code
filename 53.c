/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
    
    int maximumSubarraySum(int *num,int nums)
    {
        int maxSoFar=-1e9,maxEndingHere=0;
        for(int i=0;i<nums;i++)
        {
            maxEndingHere+=num[i];
            if(maxEndingHere>maxSoFar)
            {
                maxSoFar=maxEndingHere;
            }
            if(maxEndingHere<0)
            {
                maxEndingHere=0;
            }
        }
        return maxSoFar;
    }
    
int main()
{
    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    printf("%d", maximumSubarraySum(a, 9));

    return 0;
}

