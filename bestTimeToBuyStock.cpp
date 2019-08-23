class Solution {
public:
    int buff=0;
    int temp = 0;
    int maxProfit(vector<int>& prices) {
        for (int i = prices.size()-1; i > 0; i--)
        {
            for (int j = 0; j <= i; j++)
            {
               temp = prices[i]-prices[j];
                if (buff > temp)
                    temp = buff;
                else
                    buff = temp;
            }
         }
        return temp;     
    }
};