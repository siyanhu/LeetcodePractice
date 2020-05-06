//
// Created by HU Siyan on 5/5/2020.
//

#include "MergedSortedArray.h"

void MergedSortedArray::merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
    if (nums1.size() < m + n) {
        return;
    }

    nums1.insert(, nums2.begin(), nums2.end());
}
