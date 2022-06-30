#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

string func(string s)
{
    if (s.size() == 1)
        return s;

    string part = func(s.substr(1));
    int i = 0, key = s[0];
    while (i < part.size() && s[i] == key)
    {
        i++;
    }
    return part.substr(i);
}

int main()
{
    // int n;
    // cin>>n;
    // vector<vector <int> > arr(n,vector<int>(n));
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //      cin>>arr[i][j];
    // }
    // cout<<"dfs: "<<endl;
    // vector <bool> visited(n,false);
    // dfs(n,0,arr,visited);
    cout << func("missi");
}