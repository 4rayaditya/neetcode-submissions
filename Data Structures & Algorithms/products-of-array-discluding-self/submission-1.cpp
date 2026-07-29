class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), prod =1, zeroCount = 0;
        vector<int> res(n);
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
               zeroCount++; 
            }
            else{
                prod *= nums[i];
            }
        }
        if(zeroCount > 1)
            return vector<int>(n, 0);

        for (size_t i = 0; i < n; i++) {
            if(zeroCount > 0){
                res[i] = (nums[i] == 0) ? prod : 0;
            }
            else{
                res[i] = prod/nums[i];
            }
        }
        return res;
    }
};