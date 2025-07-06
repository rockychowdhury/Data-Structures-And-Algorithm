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

    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int arr3[n + m];
    int idx = 0;
    for (int i = 0; i < n; i++, idx++)
    {
        arr3[idx] = arr1[idx];
    }
    for (int i = 0; i < m; i++, idx++)
    {
        arr3[idx] = arr2[i];
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}