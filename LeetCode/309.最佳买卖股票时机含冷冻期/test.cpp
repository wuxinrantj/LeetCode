
#include <iostream>
#include <vector>

using namespace std;
//DP
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp_i_0 = 0;
        int dp_i_1 = INT_MIN;
        int dp_pre_i = 0;

        for(int i = 0; i < prices.size(); ++i) {
            int temp = dp_i_0;
            dp_i_0 = max(dp_i_0, dp_i_1 + prices[i]);
            dp_i_1 = max(dp_i_1, dp_pre_i - prices[i]);
            dp_pre_i = temp;
        }

        return dp_i_0;
    }
};


int main(void)
{
    vector<int> nums{1,2,0,3,2};

    int ans;
    Solution so;
    ans = so.maxProfit(nums);
    cout << ans << endl;

    return 0;
}
