#include <string>
class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(auto str :strs)
        {
            int length = str.length();
            encoded+=to_string(length)+"_"+str;
        }
        return encoded;

    }

    vector<string> decode(string s) {
        vector<string>ans;
            string str="";
            int length = 0;

        for(int i = 0 ; i < s.length() ;i++)
        {
            if(s[i]=='_')
            {
                length = stoi(str);
                ans.push_back(s.substr(i+1,length));
                i += length ;
                str = "";
                continue;
            }
            str+=s[i];
            
        }
        return ans;

    }
};
