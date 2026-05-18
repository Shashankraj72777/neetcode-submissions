class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l = 0;
        int r = nums.size() - 1;

        while(l <= r){

            int m = l + (r - l) / 2;

            // target found
            if(nums[m] == target){
                return m;
            }

            // left half sorted
            if(nums[l] <= nums[m]){

                // target inside left half
                if(target >= nums[l] &&
                   target < nums[m]){

                    r = m - 1;
                }
                else{
                    l = m + 1;
                }
            }

            // right half sorted
            else{

                // target inside right half
                if(target > nums[m] &&
                   target <= nums[r]){

                    l = m + 1;
                }
                else{
                    r = m - 1;
                }
            }
        }
        return -1;
    }
};