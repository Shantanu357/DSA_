class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int maxtime=neededTime[0];
        int sum=0;
        for(int i=1;i<colors.size();i++)
        {
            if(colors[i]==colors[i-1])
            {
                sum+=min(maxtime,neededTime[i]);
                maxtime=max(maxtime,neededTime[i]);
            }
            else{
                maxtime=neededTime[i];
            }
        }
        return sum;
    }
};