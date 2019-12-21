# Leetcode problem

## pro.190 reverse bit
![](https://i.imgur.com/qh0n17x.png)
![](https://i.imgur.com/qGCpSnO.png)
![](https://i.imgur.com/DkNS3Iu.png)

---
## pro.53 maximum subarray
![](https://i.imgur.com/KxQgvfG.png)
### 只計算最大數列的最大值
```c
class Solution {
public:
        //nums:[-2, 1, -3, 4, -1, 2, 1, -5, 4]
        //f:   [-2, 1, -2, 4, 3, 5, 6, 1, 5]
    int maxSubArray(vector<int>& nums) {
        // f[i] = f[i-1] > 0 ? nums[i]+f[i-1] : nums[i];
        vector<int> f(nums.size());
        int ans = nums[0]; 
        int sum = nums[0];
        for(int i=1; i<nums.size(); i++){
            sum = max(sum+nums[i], nums[i]);
            if(sum>ans){
                ans = sum;
            }
        }
        return ans;
    }
};
```
### print出最大數列及數值
``` c
#include <iostream>
using namespace std;

// Function to print contiguous subarray with the largest sum
// in given set of integers
void kadane(int arr[], int n)
{
	// stores maximum sum subarray found so far
	int max_so_far = 0;

	// stores maximum sum of subarray ending at current position
	int max_ending_here = 0;

	// stores end-points of maximum sum subarray found so far
	int start = 0, end = 0;

	// stores starting index of a positive sum sequence
	int beg = 0;

	// traverse the given array
	for (int i = 0; i < n; i++)
	{
		// update maximum sum of subarray "ending" at index i
		max_ending_here = max_ending_here + arr[i];

		// if maximum sum is negative, set it to 0
		if (max_ending_here < 0)
		{
			max_ending_here = 0;	// empty subarray
			beg = i + 1;
		}

		// update result if current subarray sum is found to be greater
		if (max_so_far < max_ending_here)
		{
			max_so_far = max_ending_here;
			start = beg;
			end = i;
		}
	}

	cout << "The sum of contiguous subarray with the largest sum is " <<
			max_so_far << endl;

	cout << "The contiguous subarray with the largest sum is ";
	for (int i = start; i <= end; i++)
		cout << arr[i] << " ";
}

// main function
int main()
{
	int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	int n = sizeof(arr)/sizeof(arr[0]);

	kadane(arr, n);

	return 0;
}
```