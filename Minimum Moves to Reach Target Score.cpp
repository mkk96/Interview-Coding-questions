class Solution {
public:
    int minMoves(int target, int maxDoubles) 
    {
        int count=0;
        while(target>1)
        {
            if(maxDoubles==0)
            {
                return count+target-1;
            }
            if(target%2==1)
            {
                count++;
                target--;
            }
            else
            {
                count++;
                maxDoubles--;
                target/=2;
            }
        }
        return count;
    }
};