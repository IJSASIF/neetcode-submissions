class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map <int ,int > mp;
        for(auto val : nums)mp[val] = 1;
        int length = 0,mx = 0,last = mp.begin()->first ;
        for(auto duo :mp )
        {
            int key = duo.first ;
            if ( key == last+1)
            {
                length ++;
            }
            else{
                mx = max(mx,length);
                length = 1 ; 
            }
            last = key ;


        }
        return max(mx,length);
        
    }
};
