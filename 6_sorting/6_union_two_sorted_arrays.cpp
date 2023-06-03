#include <bits/stdc++.h>
using namespace std;

vector<int> union_(vector<int> &nums1, vector<int> &nums2)
{
    int i = 0, j = 0;

    vector<int> ans;

    int n = nums1.size();
    int m = nums2.size();

    while (i < n && j < m)
    {
        if (i > 0 && nums1[i] == nums1[i - 1])
        {
            i++;
            continue;
        }

        if (j > 0 && nums2[j] == nums2[j - 1])
        {
            j++;
            continue;
        }

        if (nums1[i] < nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
        }

        else if (nums1[i] > nums2[j])
        {
            ans.push_back(nums2[j]);
            j++;
        }

        else
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    while (i < n)
    {
        if (nums1[i] == nums1[i - 1])
        {
            i++;
        }

        else
        {
            ans.push_back(nums1[i]);
            i++;
        }
    }

    while (j < m)
    {
        if (nums2[j] == nums2[j - 1])
        {
            j++;
        }

        else
        {
            ans.push_back(nums2[j]);
            j++;
        }
    }

    return ans;
}

int main()
{
    vector<int> a = {1,4,9};
    vector<int> b = {1,1,1,4,4,4,4,6,9,9,9};

    vector<int> arr = union_(a, b);
    for (int x : arr)
    {
        cout << x << " ";
    }
}