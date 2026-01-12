#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


void merge(vector<int>&leftArr , vector<int>& rightArr,vector<int> &arr)
{
    int leftSize = arr.size() / 2;
    int rightSize = arr.size() - leftSize;
    int i = 0, l = 0, r = 0;

    while (l< leftSize && r < rightSize)
    {
        if (leftArr[l] < rightArr[r])
        {
            arr[i] = leftArr[l];
            i++; l++;
        }
        else {
            arr[i] = rightArr[r];
            i++; r++;
        }
    }
    while (l < leftSize)
    {
        arr[i] = leftArr[l];
        i++;
        l++;
    }
    while (r < rightSize)
    {
        arr[i] = rightArr[r];
        i++;
        r++;
    }
}

void MergeSort(vector<int> & arr)
{
    int length = arr.size();

    if (length<=1) // base case 
        return;

    int middle = length / 2;

    vector<int> leftArr(middle);
    vector<int> rightArr(length-middle);

    int i = 0; // left array
    int j = 0; // right array

    for (;i<length;i++)
    {
        if (i<middle)
        {
            leftArr[i] = arr[i];
        }
        else
        {
            rightArr[j] = arr[i];
            j++;
        }
    }
    MergeSort(leftArr);
    MergeSort(rightArr);
    merge(leftArr,rightArr,arr);
    
}

int main()
{
    
    vector<int> arr = {8,2,5,3,4,7,6,1};
    MergeSort(arr);
    for (int i : arr)
        cout << i << " ";
}