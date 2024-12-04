# Remove Duplicates from Sorted Array

## Problem Statement

Given a sorted array `nums`, remove duplicates **in-place** such that each unique element appears only once. The function should return the total number of unique elements in the modified array.

---

## Approach

This solution leverages a **two-pointer technique** to efficiently remove duplicates:

1. **Pointer Explanation**:
   - `i`: Iterates over the array from the second element onward.
   - `insertUniqueEle`: Points to the position where the next unique element should be inserted.
2. **Algorithm**:
   - Start with `insertUniqueEle = 1` (since the first element is always unique).
   - For every element in the array:
     - If the current element `nums[i]` is not equal to the previous element `nums[i-1]`, it is unique.
     - Place the current element at the position indicated by `insertUniqueEle` and increment `insertUniqueEle`.
   - Return `insertUniqueEle`, which represents the count of unique elements in the modified array.

---


