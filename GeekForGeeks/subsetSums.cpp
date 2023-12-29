#include <bits/stdc++.h>
using namespace std;

void sums(int ind, int sum, int N, vector<int> &arr, vector<int> &ds)
{
    if (ind >= N)
    {
        ds.push_back(sum);
        return;
    }

    sum += arr[ind];
    sums(ind + 1, sum, N, arr, ds);

    sum -= arr[ind];
    sums(ind + 1, sum, N, arr, ds);
}
vector<int> subsetSums(vector<int> arr, int N)
{
    vector<int> ds;
    sums(0, 0, N, arr, ds);
    sort(ds.begin(), ds.end());
    return ds;
}

