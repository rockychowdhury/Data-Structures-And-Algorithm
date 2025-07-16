#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool isSorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            isSorted = false;
            break;
        }
    }
    cout << (isSorted ? "Sorted" : "Not Sorted") << endl;
    return 0;
}