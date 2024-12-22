class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> tmp;
        for( int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0) 
            tmp.push_back(nums[i]);
        }
        for( int i = 0; i < tmp.size(); i++ )
        {
            nums[i] = tmp[i];
        }
        for( int i = tmp.size(); i < nums.size(); i++ )
        {
            nums[i] = 0;
        }
        

        
    }
};
