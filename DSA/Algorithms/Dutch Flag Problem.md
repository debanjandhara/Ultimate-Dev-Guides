The Dutch National Flag algorithm is a famous algorithm introduced by Edsger Dijkstra to solve the problem of sorting an array with three distinct values, typically referred to as "low," "mid," and "high" (or "0," "1," and "2" in the case of sorting an array of 0s, 1s, and 2s).

### Problem Statement
Given an array with three distinct elements, sort the array such that:
- All occurrences of the first element are at the beginning.
- All occurrences of the second element are in the middle.
- All occurrences of the third element are at the end.

### Example
Let's consider an array of 0s, 1s, and 2s: `[2, 0, 2, 1, 1, 0]`.

The goal is to sort it to `[0, 0, 1, 1, 2, 2]`.

### Visualization of the Algorithm

#### Initial Setup:
- **low**: Pointer that starts at the beginning and will track the position of the last 0.
- **mid**: Pointer that starts at the beginning and will traverse the entire array.
- **high**: Pointer that starts at the end and will track the position of the first 2.

**Initial Array:** `[2, 0, 2, 1, 1, 0]`  
**low** = 0, **mid** = 0, **high** = 5

#### Steps:

1. **Step 1:**  
   - **mid** = 0: Check the element at `mid`. It's `2`.
   - Swap the elements at `mid` and `high`.
   - Decrement `high` by 1. Do not increment `mid` because the element swapped to `mid` must be checked.
   
   **Array after swap:** `[0, 0, 2, 1, 1, 2]`  
   **low** = 0, **mid** = 0, **high** = 4

2. **Step 2:**  
   - **mid** = 0: Check the element at `mid`. It's `0`.
   - Swap the elements at `mid` and `low`.
   - Increment both `low` and `mid`.
   
   **Array after swap:** `[0, 0, 2, 1, 1, 2]`  
   **low** = 1, **mid** = 1, **high** = 4

3. **Step 3:**  
   - **mid** = 1: Check the element at `mid`. It's `0`.
   - Swap the elements at `mid` and `low`.
   - Increment both `low` and `mid`.
   
   **Array after swap:** `[0, 0, 2, 1, 1, 2]`  
   **low** = 2, **mid** = 2, **high** = 4

4. **Step 4:**  
   - **mid** = 2: Check the element at `mid`. It's `2`.
   - Swap the elements at `mid` and `high`.
   - Decrement `high` by 1.
   
   **Array after swap:** `[0, 0, 1, 1, 2, 2]`  
   **low** = 2, **mid** = 2, **high** = 3

5. **Step 5:**  
   - **mid** = 2: Check the element at `mid`. It's `1`.
   - Since it's already in the correct place, simply increment `mid`.
   
   **Array remains the same:** `[0, 0, 1, 1, 2, 2]`  
   **low** = 2, **mid** = 3, **high** = 3

6. **Step 6:**  
   - **mid** = 3: Check the element at `mid`. It's `1`.
   - Since it's already in the correct place, simply increment `mid`.
   
   **Array remains the same:** `[0, 0, 1, 1, 2, 2]`  
   **low** = 2, **mid** = 4, **high** = 3

The algorithm terminates when `mid` surpasses `high`. The array is now sorted.

### Final Array: `[0, 0, 1, 1, 2, 2]`

### Summary of the Algorithm
- **Time Complexity**: `O(n)` - The algorithm makes a single pass through the array.
- **Space Complexity**: `O(1)` - It sorts the array in place with no additional memory.

This approach is efficient because it only requires one traversal of the array and handles the sorting with simple swaps.

Here's the pseudocode with a short explanation:

### Pseudocode:

1. **Initialize:**
   - `low = 0`, `mid = 0`
   - `high = end_of_array`

2. **Loop until `mid` > `high`:**
   - **If `array[mid] == 0`:**
     - Swap `array[low]` and `array[mid]`
     - Increment `low` and `mid`
   - **If `array[mid] == 2`:**
     - Swap `array[mid]` and `array[high]`
     - Decrement `high`
   - **If `array[mid] == 1`:**
     - Increment `mid`

3. **End when `mid > high`.**

### Explanation:

- Start with `low`, `mid` at the beginning, `high` at the end.
- Based on `array[mid]`, decide whether to swap and adjust pointers.
- The loop ends when `mid` crosses `high`.