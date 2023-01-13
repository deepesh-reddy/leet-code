class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        do
        {
            vector<int >temp;
            for(int i=0;i<n;i++)
            {
                temp.emplace_back(nums[i]);
            }ans.emplace_back(temp);
        }while(next_permutation(nums.begin(),nums.end()));

        return ans;
    }
};