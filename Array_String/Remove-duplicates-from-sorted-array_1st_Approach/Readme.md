# Remove Duplicates from Sorted Array

## Problem Statement

Given a sorted array `nums`, the task is to remove duplicates **in-place** such that each unique element appears only once. The relative order of the elements should be maintained. The function should return the total number of unique elements in the modified array.

---

## Approach

This solution removes duplicates by **left-shifting elements** in the array:

1. Start with two pointers:
   - `i` to traverse the array.
   - `j` as the boundary of the valid elements.
2. For each element in the array:
   - If the current element is the same as the next, perform a **left shift** to remove the duplicate.
   - Decrease the size of the valid portion (`j`) by one.
3. Continue until all elements have been processed.
4. Return the count of unique elements (`ans`), which corresponds to the valid portion of the array.

---

