
#include <iostream>
    class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            ans.emplace_back(nums[nums[i]]);
        }
        return ans;
    }
};
using namespace std;

int main()
{
    cout<<"Hello World";

    return 0;
}