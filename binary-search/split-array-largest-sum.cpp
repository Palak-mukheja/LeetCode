class Solution {
public:
    bool ispossible(vector<int>& nums, int k, int X) {
      int parts=1;
      int sum=0;
      for (int i=0; i<nums.size(); i++){
        if (sum + nums[i]<=X){
        sum+=nums[i];
      }  
      else{
        parts++;
        sum=nums[i];
      
    }
    }
    return parts<=k;
    }
     int splitArray(vector<int>& nums, int k) {

        if (k > nums.size())
            return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (ispossible(nums, k, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};