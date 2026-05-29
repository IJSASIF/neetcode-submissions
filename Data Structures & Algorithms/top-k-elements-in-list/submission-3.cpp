class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map< int ,int > mp;
        int n = nums.size();
        for (auto num : nums)
             mp[num]++;
        vector <vector<int>> bucket(n+1);
        for(auto &duo : mp )
        {
            bucket[duo.second].push_back(duo.first);
        }
        vector <int >res;
        for (int i = n ; i >=0 && k>0 ;i--)
        {
            for(auto &num : bucket[i] )
            {
                res.push_back(num);
                k--;
                if(!k)break;
            }
        }
        return res;
        
    }
};
