class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int ans = 0 ,left = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {

            char ch = s[i] ;
            if(mp.count(ch))
            {
                left = max(left ,mp[ch]+1) ; 
            }
            mp[ch] =  i ;
            ans = max(ans,i-left+1);


        }
        
        return ans;
    }
};
