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
    int n, k;
    cin >> n >> k;

    vector<vector<int>> pref(1002, vector<int>(1002));
    for (int i = 0; i < n; ++i)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        ++x1, ++y1, ++x2, ++y2;
        ++pref[x1][y1];
        ++pref[x2][y2];
        --pref[x2][y1];
        --pref[x1][y2];
    }

    for (int i = 1; i <= 1001; ++i)
        for (int j = 1; j <= 1001; ++j)
            pref[i][j] += pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];

    int result = 0;
    for (int i = 1; i <= 1001; ++i)
        for (int j = 1; j <= 1001; ++j)
            result += pref[i][j] == k;
    cout << result;
}

signed main()
{
    FAST_IO;
    OFILE("paintbarn.in", "paintbarn.out");

    solve();

    return 0;
}
