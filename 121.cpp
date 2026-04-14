class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int x = 0;
        for(int i = 0;i<prices.size()-1;i++){
            for(int j = i+1;j<prices.size();j++){
                x=prices[j]-prices[i];
                maxi=max(x,maxi);
            }
        }
        return maxi;
    }
};