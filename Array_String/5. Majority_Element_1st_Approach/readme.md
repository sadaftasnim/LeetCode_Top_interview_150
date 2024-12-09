# Majority Element Solution

This repository contains an implementation of the **Boyer-Moore Voting Algorithm** to find the majority element in a given array of integers.

## Problem Statement

The **majority element** is the element that appears more than `n/2` times in an array of size `n`. If no such element exists, the function returns `-1`.

## Implementation Details

### Algorithm Steps
1. **Candidate Selection**:
   - Traverse the array while maintaining a `count` to track the potential majority element.
   - Adjust the `count` as you iterate:
     - Increment if the current element matches the candidate.
     - Decrement otherwise.
   - Reset the candidate if `count` reaches `0`.

2. **Validation**:
   - After selecting a candidate, iterate again to confirm it occurs more than `n/2` times.

### Complexity
- **Time Complexity**: `O(n)` (Linear traversal of the array twice).
- **Space Complexity**: `O(1)` (No extra space is used).




