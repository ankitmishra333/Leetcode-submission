class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int i=0;
        int n= nums.size();
        vector<int> temp(n);
        while(i<n){
            temp[(i+k)%n] = nums[i];
            i++;
            
        }
        nums = temp;
        
    }
};