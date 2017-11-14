#include <vector>
using std::vector;
class Solution {
public:
	int maxArea(vector<int>& height) {
		return maxArea(height, 0, height.size() - 1);
	}
private:
	int maxArea(vector<int>& height, int iPosLeft, int iPosRight)
	{
		if (iPosRight <= iPosLeft)
		{
			return 0;
		}
		int value1 = CalArea(iPosLeft, iPosRight, height[iPosLeft], height[iPosRight]);
		if (height[iPosRight] > height[iPosLeft])
		{
			int value2 = maxArea(height, iPosLeft+1, iPosRight);
			return value1>value2 ? value1 : value2;
		}
		else if (height[iPosRight] < height[iPosLeft])
		{
			int value2 = maxArea(height, iPosLeft, iPosRight - 1);
			return value1>value2 ? value1 : value2;
		}
		else
		{
			int value2 = maxArea(height, iPosLeft + 1, iPosRight - 1);
			return value1>value2 ? value1 : value2;
		}
	}
	int CalArea(int x1, int x2, int y1, int y2) {
		int y = y1 > y2 ? y2 : y1;
		return (x2 - x1)*y;
	}
};