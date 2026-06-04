class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int ,int>mp;
        for(int i = 0 ; i < numbers.size() ; i++)
        {
            int val = numbers[i] ;
            int needed = target - val ;
            if(mp.count(needed))return {mp[needed],i+1};
            mp[val] = i+1 ;
        }


        
    }
};
