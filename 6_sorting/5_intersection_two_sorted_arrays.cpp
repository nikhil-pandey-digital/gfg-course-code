#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{

    vector<int> ans;

    int i = 0, j = 0;
    int n = nums1.size();
    int m = nums2.size();

    while (i < n && j < m)
    {
        if (i > 0 && nums1[i] == nums1[i - 1])
        {
            i++;
            continue;
        }

        else
        {

            if (nums1[i] < nums2[j])
            {
                i++;
            }

            else if (nums1[i] > nums2[j])
            {
                j++;
            }

            else
            {

                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> a = {3, 5, 10, 10, 10, 15, 15, 20};
    vector<int> b = {5, 10, 10, 15, 20};

    vector<int> arr = intersection(a, b);
    for (int x : arr)
    {
        cout << x << " ";
    }
}