class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        for(int i=0;i<S.length();i++)
        {
            for(int a=0;a<J.length();a++)
            {
                if(S[i]==J[a])
                    count++;
            }
        }
        return count;
    }
};
