## Approach

The solution uses **three reverse operations** to achieve the desired array rotation efficiently. This approach ensures optimal time and space complexity.

### Steps:

1. **Normalize `k`**:
   - If `k` is greater than the size of the array (`n`), compute `k % n` to avoid unnecessary rotations.

2. **Reverse the Entire Array**:
   - Reverse all the elements in the array.
   - **Example**:  
     Initial: `[1, 2, 3, 4, 5, 6, 7]`  
     After reversing: `[7, 6, 5, 4, 3, 2, 1]`

3. **Reverse the First `k` Elements**:
   - Reverse the first `k` elements in the array.
   - **Example**:  
     After reversing first `k`: `[5, 6, 7, 4, 3, 2, 1]`

4. **Reverse the Remaining Elements**:
   - Reverse the elements from index `k` to the end of the array.
   - **Example**:  
     Final: `[5, 6, 7, 1, 2, 3, 4]`

### Complexity:

- **Time Complexity**: `O(n)`  
  - Each reverse operation traverses a portion of the array, and there are three reverse operations in total.

- **Space Complexity**: `O(1)`  
  - The algorithm modifies the input array in-place and does not require additional memory.
