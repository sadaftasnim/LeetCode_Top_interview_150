# Remove Duplicates from Sorted Array II

## Overview

This program solves the problem of removing duplicates from a sorted array such that each element appears at most twice. It modifies the array in-place and returns the new length of the array with the allowed duplicates.

---

## Problem Statement

Given a sorted array `nums`, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be maintained. After removing the duplicates, return the new length of the array.

---

## Key Features

1. **In-Place Modification**:
   - No extra space is used for another array.
   - Modifies the input array directly.

2. **Handles Sorted Arrays**:
   - Works specifically for arrays sorted in non-decreasing order.

---

## Algorithm

### Steps
1. Use a pointer `i` to track the position in the array where the next valid element should be placed.
2. Iterate through the array with another pointer `j`.
3. For each element at position `j`:
   - If `i < 2` (less than two elements have been processed) or `nums[j] != nums[i-2]` (the current element is not a duplicate exceeding the allowed limit):
     - Place `nums[j]` at position `i`.
     - Increment `i`.
4. At the end of the loop, `i` will represent the new length of the modified array.

---

## Code Explanation

### Input
- A sorted vector `nums`.

### Output
- The length of the array after removing extra duplicates.

### Key Variables
1. **`i`**:
   - Tracks the position for the next valid element.
2. **`j`**:
   - Iterates over the array to check for duplicates.

---

## How to Use

### Example Input
```cpp
vector<int> nums = {1, 1, 1, 2, 2, 3};

Example Output
New length: 5
Modified array: [1, 1, 2, 2, 3]
