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
    void sortColors(vector<int>& nums) {
        int second=nums.size()-1,zero=0;
        for(int i=0;i<=second;i++)
        {
            while(nums[i]==2 && i<second)
            {
                swap(nums[i],nums[second]);
                second--;
            }
            while(nums[i]==0 && i>zero)
            {
                swap(nums[i],nums[zero]);
                zero++;
            }
        }
    }
};
int main()
{
    cout<<"Hello World";

    return 0;
}