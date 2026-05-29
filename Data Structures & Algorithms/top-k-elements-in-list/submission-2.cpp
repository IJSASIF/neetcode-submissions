class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map < int ,int > mp;
        for(auto num : nums){
            mp[num]++;
        }
        vector <pair <int ,int > > ans(mp.begin(),mp.end());
        sort(ans.begin(),ans.end(),[](auto &a ,auto &b){
            return a.second > b.second ;
        });
        vector < int > res;

        for(int i = 0 ; i < k ; i++)
        {
          res.push_back(ans[i].first);
        }
        return res;


        
    }
};
