class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(auto num:nums1) 
            ans.emplace_back(num);
        for(auto num:nums2) 
            ans.emplace_back(num);
        int n=0;
        sort(ans.begin(),ans.end());
        n=ans.size();
        if(n%2!=0)
        {
            return ans[n/2];
        }
        if(n%2==0)
        {
            return (ans[n/2-1]+ans[n/2])/2.0;
        }
        return 0.0;

    }
};
