/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
    //int arr[9]={1,5,7,2,1,4,2,5,6};
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int comp(const void *a,const void *b)
    {
        return (*(int *)a - *(int *)b);
    }
    
    int display(int n)
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i] == arr[i+1])
                return 1;
        }
        return 0;
    }
    
int main()
{
    
    qsort(arr,9,sizeof(int),comp);
    //display(9);
    printf(" %d ",display(9));

    return 0;
}

