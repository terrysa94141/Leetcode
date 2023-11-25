class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right)
        {
            int currentArea = min(height[right], height[left]) * (right - left);
            maxArea = max(currentArea, maxArea);

            if (height[left] < height[right])
            {
                left = left + 1;
            }
            else
            {
                right = right - 1;
            }
        }

        return maxArea;
    }
};