## Differentiate between subsequences and subarrays (or slices) in the context of array or sequence operations. Here's a concise explanation:

### **Subsequence:**
- **Order:** Elements must appear in the same order as in the original array, but they do not have to be contiguous.
- **Selection:** Any number of elements can be selected, as long as the relative order is maintained.
- **Example:**
  - Original array: `[1, 2, 3, 4]`
  - Valid subsequences: `[1, 3]`, `[2, 4]`, `[1, 2, 3]`

### **Subarray (or Slice):**
- **Order:** Elements must appear in the same order as in the original array, and they must be contiguous.
- **Selection:** Must be a contiguous portion of the original array, from the start to the end of the slice.
- **Example:**
  - Original array: `[1, 2, 3, 4]`
  - Valid subarrays: `[1, 2]`, `[2, 3, 4]`, `[3]`

### **Key Differences:**
- **Subarrays** are specific types of subsequences where the elements are contiguous.
- **All subarrays are subsequences**, but not all subsequences are subarrays.

For example:
- The subsequence `[1, 3]` from `[1, 2, 3, 4]` is **not** a subarray because `[1, 3]` is not contiguous.
- The subarray `[2, 3]` is both a subarray and a subsequence.

This distinction is important in problems involving array manipulations, where the difference between contiguous and non-contiguous elements matters.