class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater = 0;

        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                
                int width = j - i;

                int h = min(height[i], height[j]);

                int area = width * h;

                maxWater = max(maxWater, area);

            }
        }
        return maxWater;
    }
};