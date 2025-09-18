//merge sort then logic of our code 
class Solution {
public:
    int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
        int cnt = 0;
        int j = mid + 1;

        // Count reverse pairs
        for (int i = left; i <= mid; i++) {
            while (j <= right && (long long)arr[i] > 2LL * arr[j]) {
                j++;
            }
            cnt += (j - (mid + 1));
        }

        // Merge step
        vector<int> temp;
        int i = left; 
        j = mid + 1;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
            }
        }

        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= right) temp.push_back(arr[j++]);

        for (int k = left; k <= right; k++) {
            arr[k] = temp[k - left];
        }

        return cnt;
    }

    int mergeSort(vector<int>& arr, int left, int right) {
        if (left >= right) return 0;
        
        int mid = left + (right - left) / 2;
        int cnt = 0;

        cnt += mergeSort(arr, left, mid);
        cnt += mergeSort(arr, mid + 1, right);
        cnt += mergeAndCount(arr, left, mid, right);

        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};
