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

    map<int, int> modindex;
    modindex[0] = 0;

    int ans = 0;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        int val;
        cin >> val;

        sum += val;

        int mod = sum % 7;
        if (modindex.find(mod) != modindex.end())
            ans = max(ans, i - modindex[mod]);
        else
            modindex[mod] = i;
    }

    cout << ans;
}

signed main()
{
    FAST_IO;
    OFILE("div7.in", "div7.out");

    solve();

    return 0;
}
