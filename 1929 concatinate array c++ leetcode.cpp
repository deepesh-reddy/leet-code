#include <iostream>

using namespace std;
    class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> ans;
        long int n=nums.size();
        for(int i=0;i<n;i++)
        {
            ans.emplace_back(nums[i]);
        }
        int k=0;
        for(int i=n;i<(n*2);i++)
        {
            ans.emplace_back(nums[k]);
            k++;
        }
        return ans;
    }
};
int main()
{
    cout<<"Hello World";

    return 0;
}