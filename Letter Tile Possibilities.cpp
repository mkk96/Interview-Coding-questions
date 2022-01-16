class Solution {
public:
    int helper(int *hash)
    {
        int count=0;
        for(int i=0;i<26;i++)
        {
            if(hash[i]==0)
            {
                continue;
            }
            hash[i]--;
            count++;
            count+=helper(hash);
            hash[i]++;
        }
        return count;
    }
    int numTilePossibilities(string tiles) 
    {
        int hash[26];
        for(int i=0;i<26;i++)hash[i]=0;
        for(int i=0;i<tiles.size();i++)
        {
            hash[tiles[i]-'A']++;
        }
        return helper(hash);
    }
};