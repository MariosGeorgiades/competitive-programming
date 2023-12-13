#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

const int MAXN = 100005;

int n, m, k;
double x[MAXN];
double a[MAXN];

int main()
cin >> n >> m >> k;

for (int i = 1; i <= n; i++) cin >> x[i];
for (int i = 1; i <= k; i++) {
    int f, c;
    double v;
    cin >> f >> c >> v;
    a[f] += v * x[c];
}

double sum = 0;
for (int i = 1; i <= m; i++) sum += a[i];
double avg = sum / m;

vector<int> ans;
for (int i = 1; i <= m; i++) {
    if (a[i] > avg) ans.push_back(i);
}

cout << ans.size() << endl;
for (int i : ans) cout << i << " " << a[i] - avg << endl;

return 0;

}

}
