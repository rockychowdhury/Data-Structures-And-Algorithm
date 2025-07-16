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
void reverse(int arr[], int start, int end) { //buildIn reverse function
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
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
    // Perform left rotation k times using reverse method
    reverse(arr, arr + n); // Reverse the entire array
    reverse(arr, arr + k); // Reverse first k elements
    reverse(arr + k, arr + n); // Reverse the remaining n-k elements to get the final result

    // Output the rotated array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}