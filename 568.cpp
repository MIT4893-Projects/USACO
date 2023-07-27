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
    int n, m;
    cin >> n >> m;

    vector<int> limits(101), speed(101);
    
    int start = 0;
    for (int i = 0; i < n; ++i)
    {
        int len, limit;
        cin >> len >> limit;

        for (int j = start; j < start + len; ++j)
            limits[j] = limit;
        start += len;
    }

    start = 0;
    for (int i = 0; i < m; ++i)
    {
        int len, spe;
        cin >> len >> spe;

        for (int j = start; j < start + len; ++j)
            speed[j] = spe;
        start += len;
    }

    int result = 0;
    for (int i = 0; i < 100; ++i)
        if (limits[i] < speed[i])
            result = max(result, speed[i] - limits[i]);
    cout << result;
}

signed main()
{
    FAST_IO;
    OFILE("speeding.in", "speeding.out");

    solve();

    return 0;
}
