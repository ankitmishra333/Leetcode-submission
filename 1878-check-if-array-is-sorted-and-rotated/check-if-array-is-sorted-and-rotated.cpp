class Solution {
public:
    bool check(vector<int>& nums) {
        int i = 1;
        int n = nums.size();
        int count = 0;

        while (i < n) {
            if (nums[i - 1] > nums[i]) {
                count++;
            }
            i++;
        }
        if (nums[n - 1] > nums[0]){
            count++;
        }
        return count <=1; 
    }   
};