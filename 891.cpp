#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define pq priority_queue
#define endl "\n"

#define LLMAX INT64_MAX
#define GET(var) getline(cin, var)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

void solve()
{
    int n;
    cin >> n;

    vector<vector<bool>> shells(3, vector<bool>(3));
    for (int i = 0; i < 3; ++i)
        shells[i][i] = true;

    vector<int> result(3);
    while (n--)
    {
        int a, b, g;
        cin >> a >> b >> g;

        --a, --b, --g;

        for (int i = 0; i < 3; ++i)
        {
            swap(shells[i][a], shells[i][b]);
            result[i] += shells[i][g];
        }
    }

    cout << max({result[0], result[1], result[2]});
}

signed main()
{
    FAST_IO;
    OFILE("shell.in", "shell.out");

    solve();

    return 0;
}
