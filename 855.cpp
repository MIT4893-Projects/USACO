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
    vector<pair<int, int>> buckets(3);
    for (auto &p : buckets)
        cin >> p.first >> p.second;

    for (int i = 0; i < 100; ++i)
    {
        int start = 0;
        int stop = 1;
        if (i % 3 == 1)
            start = 1, stop = 2;
        else if (i % 3 == 2)
            start = 2, stop = 0;

        int temp = min(buckets[stop].first, buckets[start].second + buckets[stop].second) - buckets[stop].second;
        buckets[stop].second += temp;
        buckets[start].second -= temp;
    }

    cout << buckets[0].second << endl
         << buckets[1].second << endl
         << buckets[2].second;
}

signed main()
{
    FAST_IO;
    OFILE("mixmilk.in", "mixmilk.out");

    solve();

    return 0;
}
