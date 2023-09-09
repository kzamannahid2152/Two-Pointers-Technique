class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int diff = INT_MAX;
        int ans = 0;
        
        for (int i = 0; i < nums.size() - 2; i++) {
            int first = nums[i];
            int start = i + 1;
            int end = nums.size() - 1;
            
            while (start < end) {
                int currentSum = first + nums[start] + nums[end];
                int currentDiff = abs(currentSum - target);
                
                if (currentDiff == 0) {
                    return currentSum; // Found an exact match, return early.
                }
                
                if (currentDiff < diff) {
                    diff = currentDiff;
                    ans = currentSum;
                }
                
                if (currentSum > target) {
                    end--;
                } else {
                    start++;
                }
            }
        }
        
        return ans;
    }
};
