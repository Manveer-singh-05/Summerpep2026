#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;

    int nums[m];

    for (int i = 0; i < m; i++) {
        cin >> nums[i];
    }

    int low = 0;
    int i = 0;
    int high = m - 1;   

    while (i <= high) {
        if (nums[i] == 0) {
            swap(nums[low], nums[i]);
            low++;
            i++;
        }
        else if (nums[i] == 1) {
            i++;
        }
        else {
            swap(nums[high], nums[i]);
            high--;
        }
    }

    for (int i = 0; i < m; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}