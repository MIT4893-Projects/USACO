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
    int n, m, k;
    cin >> n >> m >> k;

    vector<string> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < k; ++j)
        {
            for (int l = 0; l < m; ++l)
                for (int t = 0; t < k; ++t)
                    cout << arr[i][l];
            cout << endl;
        }
}

signed main()
{
    FAST_IO;
    OFILE("cowsignal.in", "cowsignal.out");

    solve();

    return 0;
}
