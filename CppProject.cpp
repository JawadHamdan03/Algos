#include<bits/stdc++.h>
using namespace std;


void bubleSort(vector<int> &nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = 0; j < nums.size()-1; j++)
		{
			if (nums[j] > nums[j + 1]) swap(nums[j],nums[j+1]);
		}
	}
}



int main()
{
	vector<int> vec = { 5,4,3,2,1 };
	
	bubleSort(vec);
	for (int i : vec)
		cout << i << " ";
}
