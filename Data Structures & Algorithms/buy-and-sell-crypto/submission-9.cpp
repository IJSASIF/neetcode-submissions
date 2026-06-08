class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX , profit = 0 ;
        for(auto val : prices)
        {
            profit = max(profit ,val - mn);
            mn = min(mn,val) ;

        }
        return profit;
        
    }
};
