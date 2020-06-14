class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m=0;
        vector<bool> can;
        for(int x:candies)
        {
            m=max(m,x);
        }
    
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies >= m)
                can.push_back(true);
            else
                can.push_back(false);
        }
        return can;
        
    }
};
