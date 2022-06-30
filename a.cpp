#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = a[0] + 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] && a[i - 1])           
                ans += 5;
            else if (a[i])
                ans++;
            else if (a[i - 1] == 0)
            {
                ans = -1;
                break;
            }
        }
        cout << ans << "\n";
    }
}   