#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"

#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

void solve()
{
    int x, y;
    cin >> x >> y;

    y -= x;
    x -= x;

    int res = 0;
    for (int pow = 1, i = 0; true; pow *= 2, ++i)
    {
        int pos = pow * IF(i % 2, -1, 1);
        if (i % 2)
        {
            if (pos <= y && y <= x)
            {
                cout << res - y;
                return;
            }
        }
        else
            if (x <= y && y <= pos)
            {
                cout << res + y;
                return;
            }
        res += pow * 2;
    }
}

signed main()
{
    FAST_IO;
    OFILE("lostcow.in", "lostcow.out");

    solve();

    return 0;
}
