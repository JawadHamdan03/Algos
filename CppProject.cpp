#include<bits/stdc++.h>
using namespace std;


// keep finding the idx of the smallest element then swap it with element at i 
// O(n^2)
void SelectionSort(vector<int> &nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		int idx=i;
		int smallest = nums[i];
		for (int j = i+1; j < nums.size() ; j++)
		{
			if (nums[j] < nums[i])
			{
				idx = j;
			}
		}
		swap(nums[i], nums[idx]);
	}
}



int main()
{
	vector<int> vec = { 5,4,3,2,1 };
	
	SelectionSort(vec);
	for (int i : vec)
		cout << i << " ";
}
