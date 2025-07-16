#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i,s,n)for(int i=s;i<n;i++)
typedef pair<int,int>pii;
const int INF=1e9+7;
const int N=1e5+5;
const int M=1e3+5;
int i,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;

    k = k % n; // Handle cases where k >= n
    if (k < 0) k += n; // Handle negative rotations
    // Perform right rotation k times
    int rotatedArr[n];
    for (int i = 0; i < n; i++) {
        int newIndex = (i + k) % n; // Calculate new index after rotation
        rotatedArr[newIndex] = arr[i];
    }
    // Output the rotated array
    for (int i = 0; i < n; i++)
        cout << rotatedArr[i] << " ";
    cout << endl;   



    return 0;
}