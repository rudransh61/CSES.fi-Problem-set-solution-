#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y; // inputs
        long long int ans;
        long long l = max(x, y) - 1;
        if (l & 1)
        { // odd
            if (x < y)
            {
                ans = l * l + x;
            }
            else
            {
                ans = l * l + 2 * l - y + 2;
            }
        }
        else
        {
            if (x < y)
            {
                ans = l * l + 2 * l - x + 2;
            }
            else{
                ans =l*l + y;
            }
        }
        cout << ans << endl; // o/p
        return 0;
    }
}