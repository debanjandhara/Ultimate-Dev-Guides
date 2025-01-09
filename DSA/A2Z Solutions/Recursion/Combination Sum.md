https://leetcode.com/problems/combination-sum/solutions/6253958/recent-ultimate-guide-easy-explain-like-g9wot


### Guide to Solving "Combination Sum" Problem

#### 1. **Thinking Process**

The "Combination Sum" problem involves finding all unique combinations of numbers that sum up to a target value. Here’s how to think about the solution:

- **Explore all possibilities:** Use recursion to explore all combinations of the given candidates.
- **Two choices at each step:** 
  - **Pick:** Include the current candidate and decrease the target.
  - **Non-Pick:** Skip the current candidate and move to the next one.
- **Backtracking:** If the target becomes negative, backtrack and explore other combinations.

The recursion effectively creates a **decision tree**, where each node represents a decision to pick or not pick a candidate.

---

#### 2. **Pick and Non-Pick Condition**

- **Pick Condition:**  
  Stay at the same index and subtract the candidate from the target. This allows reuse of the same number.  

  ```python
  current.append(candidates[index])  # Add the current number to the result list
  backtrack(index, target - candidates[index], current)  # Recursive call
  current.pop()  # Undo the choice (important for backtracking)
  ```

- **Non-Pick Condition:**  
  Move to the next index without reducing the target.

  ```python
  backtrack(index + 1, target, current)  # Recursive call with the next index
  ```

---

#### 3. **Importance of `pop()` After Recursion**

The `pop()` is crucial because:
- It **removes the last added element** from the result list after the recursion call finishes.
- Without `pop()`, the same element would persist in subsequent paths, leading to incorrect combinations.

Think of it as "cleaning up" after a recursive call to maintain the integrity of the `current` list for other branches of the decision tree.

---

#### 4. **Recursion Stack Tree**

Here’s how the recursion tree looks for candidates `[2, 3, 6, 7]` and target `7`. Each node shows the current index, remaining target, and the result list:

```mermaid
<!-- Placeholder for the recursion stack tree image -->
```

This tree illustrates all possible paths explored during the recursion process.

---

#### 5. **Code Implementation**

Here’s the Python code:

```python
def combinationSum(candidates, target):
    def backtrack(index, target, current):
        # Base case: If the target becomes 0, we've found a valid combination
        if target == 0:
            result.append(list(current))
            return
        
        # Base case: If index exceeds bounds or target becomes negative
        if index == len(candidates) or target < 0:
            return
        
        # Pick the current candidate
        current.append(candidates[index])
        backtrack(index, target - candidates[index], current)
        current.pop()  # Backtrack
        
        # Non-pick: Move to the next candidate
        backtrack(index + 1, target, current)
    
    result = []
    backtrack(0, target, [])
    return result
```

---

#### Key Points
1. **Recursive Exploration:** The algorithm recursively picks and skips candidates to explore all valid combinations.
2. **Backtracking:** Essential to undo choices and explore other paths.
3. **Efficient Stopping Conditions:** The recursion stops when the target is achieved or invalid.

This concise yet detailed explanation, paired with the recursion tree diagram, provides a clear understanding of solving the problem.