class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>>mp;
        for(auto &str : strs)
        {
            vector <int> freq(26,0);
            for(auto &ch : str)
            {
             freq[ch-'a']++;
            }
            mp[freq].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto &duo :mp){
            ans.push_back(duo.second);
        }
        return ans;

        
    }
};
