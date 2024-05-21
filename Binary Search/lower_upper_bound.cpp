#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> arr, int element) {
    int lo = 0, hi = arr.size() - 1;
    int mid;
    while (hi - lo > 1) {
        int mid = (hi + lo) / 2;
        if (arr[mid] < element)
            lo = mid + 1;
        else
            hi = mid;
    }

    if (arr[lo] >= element)
        return lo;
    else if (arr[hi] >= element)
        return hi;
    return -1;
}

int upper_bound(vector<int> arr, int element) {
    int lo = 0, hi = arr.size() - 1;
    int mid;
    while (hi - lo > 1) {
        int mid = (hi + lo) / 2;
        if (arr[mid] <= element)
            lo = mid + 1;
        else
            hi = mid;
    }

    if (arr[lo] > element)
        return lo;
    else if (arr[hi] > element)
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

    int lb = lower_bound(arr, key);
    cout << lb << " " << arr[lb] << endl;

    int ub = upper_bound(arr, key);
    cout << ub << " " << arr[ub] << endl;
    return 0;
}
