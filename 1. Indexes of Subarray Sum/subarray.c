#include <stdio.h>

int subarraySum(int* arr, int n, int target, int* res) {
    int start = 0;
    long long curr_sum = 0;

    for (int end = 0; end < n; end++) {
        curr_sum += arr[end];

        while (curr_sum > target && start < end) {
            curr_sum -= arr[start];
            start++;
        }

        if (curr_sum == target) {
            res[0] = start + 1; // 1-based index
            res[1] = end + 1;
            return 1; // found
        }
    }

    res[0] = -1; // not found
    return 0;
}
