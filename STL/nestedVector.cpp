#include <bits/stdc++.h>
using namespace std;

void printVecOfPairs(vector<pair<int, int>> &v)
{
    cout << "Size : " << v.size() << endl;

    for (auto elm : v)
    {
        cout << elm.first << " " << elm.second << endl;
    }
}

void printArrayOfVectors(vector<int> v)
{
    cout << "Size : " << v.size() << endl;

    for (auto elm : v)
    {
        cout << elm << endl;
    }
}

void printVectorOfVectors(vector<int> v)
{
    cout << "Size : " << v.size() << endl;

    for (auto elm : v)
    {
        cout << elm << " ";
    }
    cout << endl;
}

int main()
{
    // Vector of Pairs
    // vector<pair<int, int>> v;
    // v = {{1, 2}, {2, 3}, {3, 4}};

    // vector<pair<int, int>> &v2 = v;

    // v2.push_back({4, 5});
    // v.push_back({5, 6});

    // printVecOfPairs(v);
    // printVecOfPairs(v2);

    // Array of Vectors
    // int N;
    // cout << "Number of Vectors : ";
    // cin >> N;
    // vector<int> v[N];

    // for (int i = 0; i < N; ++i)
    // {
    //     int n;
    //     cout << "Size of Vector " << i << " : ";
    //     cin >> n;
    //     for (int j = 0; j < n; ++j)
    //     {
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }

    // for (int i = 0; i < N; ++i)
    // {
    //     printArrayOfVectors(v[i]);
    // }

    // Vector of Vectors
    vector<vector<int>> v;
    int N;
    cout << "Number of Vectors : ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        vector<int> temp;
        int n;
        cout << "Size of Vector " << i << " : ";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < N; i++)
    {
        printVectorOfVectors(v[i]);
    }
}