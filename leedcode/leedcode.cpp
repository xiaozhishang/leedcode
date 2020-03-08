#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		int sum = 0;
		int realnum = 0;
		int sumLeft = 0;
		int sumRight = 0;

		for (int i = 0; i < nums.size(); i++) {
			sum += nums[i];
		}

		for (int i = 0; i < nums.size(); i++ ){
			if (i == 0) {
				sumLeft = 0;
			}
			else {
				sumLeft = sumLeft + nums[i - 1];
			}
			sumRight = sum - sumLeft - nums[i];

			if (sumLeft == sumRight) {
				return i;
			}
		}

		return -1;
	}


};

int main() {
	vector<int> nums = { -1,-1,-1,-1,-1,-1 };

	Solution sol = Solution();
	int result = sol.pivotIndex(nums);
	cout << result << endl;
	/*int result = sol.pivotIndex(nums);
	cout << result << endl;*/

}