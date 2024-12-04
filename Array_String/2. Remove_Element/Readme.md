# Remove Element from Array

## Problem Statement
Given an integer array `nums` and an integer `val`, the task is to remove all occurrences of `val` in the array **in-place** and return the new length of the array. The order of elements can be changed, and it doesn't matter what values are left beyond the new length.

---

## Approach

This solution implements an **in-place modification** using a two-pointer technique:

1. Iterate through the array `nums`.
2. If the current element is not equal to `val`, copy it to the current valid index `k` and increment `k`.
3. At the end of the loop, the first `k` elements of the array are the valid elements, and `k` represents the new length.

---


