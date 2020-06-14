class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int c=0;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=1+i;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    c=1;
                    break;
                }
            }
            if(c==1)
            break;
        }
        return res;
    }
};
