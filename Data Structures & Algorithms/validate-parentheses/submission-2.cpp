class Solution {
public:
    bool isValid(string s) {
        stack <char>paren ;
        int i , length = s.length();
        unordered_map<char,char> mp ;
        mp[')'] = '(' ;
        mp['}'] = '{' ;
        mp[']'] = '[' ;


        for(i = 0 ;i< length ;i++)
        {
            char ch = s[i] ;
            if(!mp.count(ch))paren.push(ch);

            else
            { 
                if(paren.empty()) return false ;
                char tp = paren.top();
                if(tp != mp[ch]) return false ;
                paren.pop();
            }


        }
        return paren.empty() ;

        
    }
};
