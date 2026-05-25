class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        int i = 0;
        int j = 0;

        // Merge until one list is exhausted
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                v.push_back(nums1[i]);
                i++;
            } else {
                v.push_back(nums2[j]);
                j++;
            }
        }

        // Copy any remaining elements from nums1
        while (i < m) {
            v.push_back(nums1[i]);
            i++;
        }

        // Copy any remaining elements from nums2
        while (j < n) {
            v.push_back(nums2[j]);
            j++;
        }

        // Overwrite nums1 with the result
        for (int k = 0; k < v.size(); k++) {
            nums1[k] = v[k];
        }
    }
};
