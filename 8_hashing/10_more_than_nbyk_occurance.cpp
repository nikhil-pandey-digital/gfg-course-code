#include <bits/stdc++.h>
using namespace std;

// given an array with n elements and k we need to return the elements which have occured more than n/k times

// approch 1:-

// using hashmap i.e unordered map
// T.C-> O(n), S.c-> O(n)

void solve(vector<int> &arr, int k)
{
    int n = arr.size();

    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    for (auto x : map)
    {
        if (x.second > n / k)
        {
            cout << x.first << " ";
        }
    }
}

// in the above method if n is very large and k is small than we need to store a lot of elements in the map which are not be our ans
//  as in the ans there can be  atmost k-1 elements ,so we can improve this solutiion

void solve2(vector<int> &arr, int k)
{
    int n = arr.size();

    unordered_map<int, int> map;

    // based on moore voting algo

    // finding the potential elements considering the fact that there can be atmost k-1 elements in the res

    for (int i = 0; i < n; i++)
    {
        if (map.find(arr[i]) != map.end())
        {
            map[arr[i]]++;
        }

        else if ( map.size() < k-1 )
        {
            map.insert({arr[i], 1});
        }
        else
        {
            for (auto x : map)
            {
                x.second--;
                if (x.second == 0)
                {
                    map.erase(x.first);
                }
            }
        }
    }
     
    int count; 
    // conferming the potential elements
    for (auto x : map)
    {
        count=0; 

        for(int i=0;i<n;i++)
        {
            if(x.first==arr[i])
            {
                count++;
            }
        }

        if (count>n/k)
           cout<<x.first<<" ";
    }
}

int main()
{
    int size;
    cout << "enter the size of array" << endl;
    cin >> size;

    int x;
    vector<int> arr;
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < size; i++)
    {

        cin >> x;
        arr.push_back(x);
    }

    int k;
    cout << "enter the value of k" << endl;
    cin >> k;

    //solve(arr, k);

    solve2(arr, k);
}