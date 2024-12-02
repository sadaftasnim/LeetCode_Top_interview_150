
# Merge Two Sorted Arrays

## Steps to Merge

1. **Initialize Pointers**:
   - Start three pointers:
     - `i`: Points to the last valid element in `nums1`.
     - `j`: Points to the last element in `nums2`.
     - `k`: Points to the last index of `nums1`.

2. **Compare and Place Elements**:
   - Compare elements from the end of both arrays:
     - Place the larger element at index `k` in `nums1`.
     - Move the corresponding pointer (`i` or `j`) and decrease `k`.

3. **Copy Remaining Elements**:
   - If `nums2` still has elements left, copy them into `nums1`.

4. **Complete**:
   - Stop when all elements are merged.

---

This process ensures the arrays are merged in sorted order into `nums1`.
