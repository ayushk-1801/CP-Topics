#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int key, int n) {
    int lo = 0, hi = n - 1;
    int mid;
    while (hi - lo > 1) {
        int mid = (hi + lo) / 2;
        if (arr[mid] < key)
            lo = mid + 1;
        else
            hi = mid;
    }

    if (arr[lo] == key)
        return lo;
    else if (arr[hi] == key)
        return hi;
    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int ans = binarySearch(arr, key, n);
    cout << ans << " " << arr[ans] << endl;

    return 0;
}
