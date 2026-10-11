class Solution {
public:
     void backtrack( vector<int>& nums, vector <int> &current, int index, vector<vector<int>> &result){
      if (index==nums.size()){
      result.push_back(current);
      return;
     }
     current.push_back(nums[index]);
     backtrack(nums, current, index+1, result);
     current.pop_back();

     backtrack(nums,  current, index+1, result);
     }
     vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector <int>> result;
        vector <int> current;
        backtrack( nums, current, 0,result);
        return result;
    }
};