class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int k  ;
        for( int i = 0; i < nums.size(); i++ ){
            if( nums[i] == 1 ) cnt++;
            else
            {
                k = max(k,cnt);
                cnt = 0;
            }
        }
        return max(k,cnt);
        
    }
};
