#include<bits/stdc++.h>
using namespace std;
//#define int long long

bool isvalid(int mid, int x, vector<int>& a) {
    long long ans = 0;
    int n = a.size();
    for (int i = 0; i < n; i++) {

       // if(mid-a[i]>0)
        ans +=max(mid-a[i],0);
        // Ensure the result is non-negative
    }
    return ans <= (long long)x;
}

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    int mini = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > mini) {
            mini = a[i];
        }
    }

    // vector<int> premax(n);
    // vector<int> suffmax(n);
    // premax[0] = a[0];
    // for (int i = 1; i < n; i++) {
    //     premax[i] = max(premax[i - 1], a[i]);
    // }
    // suffmax[n - 1] = a[n - 1];
    // for (int i = n - 2; i >= 0; i--) {
    //     suffmax[i] = max(suffmax[i + 1], a[i]);
    // }

    int low = 1;
    int high = INT_MAX;
    int ans = INT_MAX; // Initialize ans to the minimum possible value.

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isvalid(mid, x, a)) {
            ans = mid;
            low = mid + 1; // Move the lower bound up.
        } else {
            high = mid-1; // Move the upper bound down.
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
