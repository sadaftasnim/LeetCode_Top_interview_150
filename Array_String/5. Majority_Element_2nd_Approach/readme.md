## Algorithm

The solution uses a hashmap (`std::map`) to count the occurrences of elements and then determines the majority element. Below are the steps:

### Steps:
1. **Initialize a Hashmap**:
   - Create a hashmap (`std::map`) to store the frequency of each element in the array.

2. **Count Frequencies**:
   - Traverse the input array.
   - For each element in the array, increment its count in the hashmap.

3. **Check for Majority Element**:
   - Iterate through the hashmap.
   - For each key-value pair (element and its count), check if the count exceeds `n/2` (where `n` is the size of the array).
   - If such an element is found, return it as the majority element.

4. **Return Result**:
   - If no element satisfies the majority condition, return `-1`.

