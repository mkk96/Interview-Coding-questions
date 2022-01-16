class Solution {
public:
    vector<string> divideString(string s, int k, char fill) 
    {
        string temp="";
        vector<string> result;
        for(int i=0;i<s.size();i++)
        {
            temp+=s[i];
            if(temp.size()==k)
            {
                result.push_back(temp);
                temp="";
            }
        }
        if(temp!="")
        {
            while(temp.size()!=k)
            {
                temp+=fill;
            }
            result.push_back(temp);
        }
        return result;
    }
};