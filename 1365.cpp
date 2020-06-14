class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> cop;
        vector<int> ans;
        for(auto x:nums)
        {
            cop.push_back(x);
        }
        sort(nums.begin(),nums.end());
        int b;
        b=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            int a;
            auto it1= lower_bound(nums.begin(),nums.end(),b);
            auto it = lower_bound(nums.begin(),nums.end(),cop[i]);
            a=it-it1;
            ans.push_back(a);
            
        }
        return ans;
    }
};
