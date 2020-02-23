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
---
## Pro.744 Find Smallest Letter Greater Than Target

examples
```css=
Input:
letters = ["c", "f", "j"]
target = "a"
Output: "c"

Input:
letters = ["c", "f", "j"]
target = "c"
Output: "f"

Input:
letters = ["c", "f", "j"]
target = "d"
Output: "f"

```
```c
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int r = letters.size();
        while(l<r){
            const int m = l+(r-l)/2;
            if(letters[m] <= target){
                l = m+1;
            }else{
                r = m;
            }
        }
        return letters[l % letters.size()];
    }
};
```
---
## palindrome number

```c
#include<stdio.h>
#include<stdlib.h>
int palindrom_num(int num);

int main(){
	int num = 0;
	printf("請輸入一數字是否為回文：");
	scanf("%d", &num);
	// printf("%d\n", num);
	// int palindrom_num(int num);
	int ans = 0;
	ans = palindrom_num(num);
	printf("%d\n",ans);

	if(ans){
		printf("%d is a palindrom number\n", num);
	}else{
		printf("%d is not a palindrom number\n", num);
	}

	return 0;
}

int palindrom_num(int num){
	int copy = 0, reverse = 0;
	copy = num;

	while(num != 0){
		reverse = (reverse*10)+(num%10);
		num/=10;
	}
	return (reverse == copy)?1:0;
}
```
---
## sqrt()
```c
class Sqrt {
  public static void main(String[] args) throws Exception 
  {
    System.out.println("sqrt(5)="+sqrt(5));
  }
 
  public static double sqrt(double x) throws Exception 
  {
    double small = 0.0000001;
    double low, high;
    if (x < 0) throw new Error();
    if (x < 1) { 
      low = 0; high = 1;  // 若 0 < x < 1 則其平方根必然介於 0 與 1之間。
    } else {
      low = 1; high = x;  // 若 x > 1 , 則其平方根必然介於 1 與 x 之間。
    }
    while (high - low > small)  // 不斷逼近，直到範圍夠小為止。
    {
      double mid = (low + high) / 2;
      if (mid*mid > x)          // 解小於 mid , 將上限調為 mid
        high = mid;
      else
        low = mid;              // 解大於 mid , 將下限調為 mid
    }
    return low;
  }
}
```
---
## [Factorial Trailling Zeros pro.172](https://leetcode.com/problems/factorial-trailing-zeroes/)

```c
int trailingZeroes(int n){
    if(n<5)
    {
        return 0;
    }else{
        int res = 0;
        while(n!=0){
            n = n/5;
            res = res + (n);       
        }
        return res;
    }
}
```

---
## 1-2+3-4+5-6...+999-1000=?
```c
int main(){
    int sum = 0;
    for(i=1; i<=1000; i+=2){
        sum = sum + i;
    }
    for(j=2; j<=1000; j+=2){
        sum = sum - j;
    }
    print(sum);
    return 0;
}
```
---
## link list sort
