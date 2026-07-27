class Solution {
public:
    int count(vector<int> coins,int amount,vector<int> & dp)
    {
        if(amount == 0)
            return 0;

        if(amount < 0)
            return INT_MAX/2;

        if(dp[amount] != -1)
            return dp[amount];

        int cnt=INT_MAX;
            for (int i=0;i<coins.size();i++)
            {
                cnt=min(cnt,1+count(coins, amount - coins[i], dp));
            }
        

        return dp[amount] = cnt;
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        int ans=count(coins, amount,dp);
        if (ans>=INT_MAX/2)
        {
            return -1;
        }

        return ans;
    }
};