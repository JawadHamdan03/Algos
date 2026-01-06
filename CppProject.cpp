#include<bits/stdc++.h>
using namespace std;


// sorting nums[j] and nums[j+1] in i times 
// O(n^2)
void bubbleSort(vector<int> &nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = 0; j < nums.size()-1; j++)
			if (nums[j] > nums[j + 1]) swap(nums[j],nums[j+1]);
	}
}



int main()
{
	vector<int> vec = { 5,4,3,2,1 };
	
	bubbleSort(vec);
	for (int i : vec)
		cout << i << " ";
}
