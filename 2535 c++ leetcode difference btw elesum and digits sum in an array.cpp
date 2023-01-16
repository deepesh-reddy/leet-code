
#include <iostream>

using namespace std;
class Solution {
public:

    int digitsum(int n)
    {
        int m,sum=0;
        while(n>0)
        {
            m=n%10;
            sum =sum+m;
            n=n/10;
        }
        return sum;
    }

    int differenceOfSum(vector<int>& nums) {
        int fsum=0,numsum=0;
        for(int i=0;i<nums.size();i++)
        {
            fsum+=nums[i];
        }
        int fdsum=0;
        for(int i=0;i<nums.size();i++)
        {
            numsum=digitsum(nums[i]);
            fdsum+=numsum;
        }
        return abs(fsum-fdsum);
        
    }
};
int main()
{
    cout<<"Hello World";

    return 0;
}
