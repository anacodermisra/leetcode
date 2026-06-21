class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        int icecreams=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<n;i++){
            if(costs[i]<=coins){
                coins=coins-costs[i];
                icecreams++;
            }
        }
        return icecreams;

        
    }
};