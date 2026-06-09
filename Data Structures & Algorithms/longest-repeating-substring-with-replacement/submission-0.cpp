class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0 , maxFreq = 0 , i ,ans =0;
        unordered_map <int ,int > mp;
        for(i = 0 ; i < s.length() ;i++)
        {
            char ch = s[i] ;
            mp[ch]++;
            maxFreq = max (maxFreq , mp[ch]) ;
            while(i-l+1-maxFreq>k)
            {
                mp[s[l]]--;
                l++;
            }
            ans = max(ans ,i-l+1);

        }
        return ans;
        
    }
};
