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



int partition(vector<int>& arr, int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j <= end - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;
    return i;
}

void QuickSort(vector<int> & arr, int start , int end)
{
    if (end <= start)
    {
        return;
    }

    int pivot = partition(arr, start, end);
    QuickSort(arr,start,pivot-1);
    QuickSort(arr,pivot+1,end);


}



int main()
{
    vector<int> arr = {8,2,5,3,4,7,6,1};
    QuickSort(arr,0,arr.size()-1);
    for (int i : arr)
        cout << i << " ";
}