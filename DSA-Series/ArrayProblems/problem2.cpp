#include <bits/stdc++.h>
using namespace std;

int secondLargest(int n, vector<int>& a){
    int largest = a[0], secLargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            secLargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > secLargest)
        {
            secLargest = a[i];
        }
    }
    return secLargest;
}

int secondSmallest(int n, vector<int>& a){
    int smallest = a[0], secSmallest = INT_MAX;
    for (int i = 1; i <n; i++)
    {
        if (a[i] < smallest)
        {
            secSmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] > smallest && a[i] < secSmallest)
        {
            secSmallest = a[i];
        }
    }
    return secSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int>& a) {
    int secLargest = secondLargest(n,a);
    int secSmallest = secondSmallest(n,a);
    return {secLargest, secSmallest};
}

int main()
{
    vector<int> a;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    vector<int>ans = getSecondOrderElements(n, a);

    // for(auto it:ans){
    //     cout << it << " ";
    // }
    // cout << endl;
}