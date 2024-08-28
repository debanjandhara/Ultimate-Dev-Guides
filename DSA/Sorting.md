# Sorting Algorithms

## 1. Selection Sort

### How It Works
Selection Sort repeatedly selects the smallest (or largest) element from the unsorted portion and moves it to the beginning. It divides the list into a sorted and an unsorted region, reducing the unsorted region by one element each time.

### Pseudo Code
```
for i from 0 to n-1:
    min_index = i
    for j from i+1 to n:
        if array[j] < array[min_index]:
            min_index = j
    if (min_index != i):
        swap(array[i], array[min_index])
```

### Visualization
- **Initial Array**: [29, 10, 14, 37, 13]
- **Pass 1**: [**10**, 29, 14, 37, 13]
- **Pass 2**: [10, **13**, 14, 37, 29]
- **Pass 3**: [10, 13, **14**, 37, 29]
- **Pass 4**: [10, 13, 14, **29**, 37]

## 2. Insertion Sort

### How It Works
Insertion Sort builds the sorted array one element at a time by repeatedly picking the next element and inserting it into its correct position among the previously sorted elements.

### Pseudo Code
```
for i from 1 to len(A)-1:
    j = i
    while j > 0 and A[j-1] > A[j]:
        swap A[j] and A[j-1]
        j = j - 1
```

### Visualization
- **Initial Array**: [29, 10, 14, 37, 13]
- **Pass 1**: [**10**, 29, 14, 37, 13]
- **Pass 2**: [10, **14**, 29, 37, 13]
- **Pass 3**: [10, 14, 29, **37**, 13]
- **Pass 4**: [10, 13, 14, 29, **37**]

## 3. Bubble Sort

### How It Works
Bubble Sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process continues until the list is sorted, with the largest elements "bubbling" to the end of the list.

### Pseudo Code
```
for i from 1 to N:
    for j from 0 to N-i-1:
        if array[j] > array[j + 1]:
            swap(array[j], array[j + 1])
```

### Visualization
- **Initial Array**: [29, 10, 14, 37, 13]
- **Pass 1**: [10, 14, 29, 13, **37**]
- **Pass 2**: [10, 14, 13, **29**, 37]
- **Pass 3**: [10, 13, **14**, 29, 37]
- **Pass 4**: [**10**, 13, 14, 29, 37]

### Difference Between Insertion Sort and Bubble Sort

- **Space of Comparisons**:
  - **Insertion Sort**: 
    - Starts with a smaller comparison space.
    - The number of comparisons decreases as the array gets more sorted.
  - **Bubble Sort**: 
    - Starts with the maximum comparison space.
    - The number of comparisons doesn't decrease as rapidly, as it continuously checks the entire unsorted portion.

### Visualization

```plaintext
Insertion Sort:
Initial:   [ |4, 3, 2, 1]
Step 1:    [4 |3, 2, 1]  -- Smaller comparison space
Step 2:    [3, 4 |2, 1]
Final:     [1, 2, 3, 4 |]

Bubble Sort:
Initial:   [4, 3, 2, 1]
Step 1:    [3, 4, 2, 1]
Step 2:    [3, 2, 4, 1]  -- Maximum comparison space
Final:     [1, 2, 3, 4]
```

- **Insertion Sort**: The comparison space shrinks as sorting progresses.
- **Bubble Sort**: The comparison space remains large, shrinking more slowly.

## 4. **Quick Sort [YT Link](https://www.youtube.com/watch?v=WprjBK0p6rw)**

### How It Works:
Quick Sort is a **divide-and-conquer** algorithm that works by selecting a "pivot" element from the array and partitioning the other elements into two sub-arrays: those less than the pivot and those greater than the pivot. The process is then recursively applied to the sub-arrays.

### Steps:
1. **Choose a Pivot**: Select a pivot element from the array.
2. **Partitioning**: Rearrange the elements so that all elements less than the pivot are on the left, and all elements greater are on the right.
3. **Recursively Sort Sub-arrays**: Apply the same logic to the left and right sub-arrays.
4. **Combine**: Since the array is sorted in-place, no explicit combination step is needed.

### Pseudo Code:
```python
function quickSort(array, low, high):
    if low < high:
        pivot_index = partition(array, low, high)
        quickSort(array, low, pivot_index - 1)  # Sort left sub-array
        quickSort(array, pivot_index + 1, high)  # Sort right sub-array

function partition(array, low, high):
    pivot = array[high]
    i = low - 1
    for j = low to high - 1:
        if array[j] < pivot:
            i += 1
            swap(array[i], array[j])
    swap(array[i + 1], array[high])
    return i + 1
```

### Visualization:
- **Initial Array**: [8, 7, 6, 1, 0, 9, 2]
- **Pivot**: 2
- **Partitioned**: [0, 1, 2, 6, 7, 8, 9]
- **Recursively Apply**: Continue partitioning left and right sub-arrays.

## 5. **Merge Sort [YT Link](https://youtube.com/watch?v=5Z9dn2WTg9o)**

### How It Works:
Merge Sort is also a **divide-and-conquer** algorithm that divides the array into two halves, sorts each half, and then merges them back together in sorted order.

### Steps:
1. **Divide**: Split the array into two halves until each sub-array contains only one element.
2. **Conquer**: Recursively sort each half.
3. **Merge**: Merge the sorted halves to produce a sorted array.

### Pseudo Code:
```python
function mergeSort(array):
    if len(array) > 1:
        mid = len(array) // 2
        left_half = array[:mid]
        right_half = array[mid:]

        mergeSort(left_half)  # Recursively sort left half
        mergeSort(right_half)  # Recursively sort right half

        i = j = k = 0

        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                array[k] = left_half[i]
                i += 1
            else:
                array[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            array[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            array[k] = right_half[j]
            j += 1
            k += 1
```

### Visualization:
- **Initial Array**: [38, 27, 43, 3, 9, 82, 10]
- **Divide**: [38, 27, 43] and [3, 9, 82, 10]
- **Divide Again**: [38] [27, 43] and [3, 9] [82, 10]
- **Merge**: [27, 38, 43] and [3, 9, 10, 82]
- **Final Merge**: [3, 9, 10, 27, 38, 43, 82]

## **Summary of Differences**:
- **Quick Sort**: Efficient, in-place, but not stable (doesn't preserve the order of equal elements).
- **Merge Sort**: Stable, more memory-intensive due to additional arrays, but reliable for large datasets.