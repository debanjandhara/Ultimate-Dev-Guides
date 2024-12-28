# Recursion: A Comprehensive Guide [Remember : Mathematical Induction (k --> k-1 value) and Call Stack]

Recursion is a concept that many computer science students initially find confusing, but once understood, it becomes a powerful tool for solving problems. In this guide, we will break down recursion into simple steps and explain how to tackle recursive problems. By the end, you'll feel more confident in using recursion to solve various challenges.

---

## Table of Contents

1. [Introduction to Recursion](#introduction-to-recursion)
2. [Five Simple Steps to Solve Recursive Problems](#five-simple-steps-to-solve-recursive-problems)
3. [Example: Printing Numbers from 1 to N](#example-printing-numbers-from-1-to-n)
4. [Example: Sum of Numbers from 1 to N](#example-sum-of-numbers-from-1-to-n)
5. [Understanding the Recursive Leap of Faith](#understanding-the-recursive-leap-of-faith)
6. [Conclusion](#conclusion)

---

## Introduction to Recursion

Recursion is a method of solving problems where the solution to a larger problem depends on solutions to smaller instances of the same problem. It’s like breaking down a complex problem into simpler, easier-to-solve problems.

Key points about recursion:
- 🌱 **Base Case**: The simplest case where the problem can be directly solved.
- 🔁 **Recursive Case**: The general case where the problem is broken down into smaller problems.

---

## Five Simple Steps to Solve Recursive Problems

Here are the **five steps** you can follow to approach and solve any recursive problem:

1. **Identify the Base Case** 🛑  
   Ask yourself: What's the simplest possible input where you can directly provide the answer? This becomes the base case.

2. **Visualize with Examples** 👀  
   Work through a few examples to understand how inputs and outputs interact. This helps in understanding the problem better.

3. **Find Relationships Between Examples** 🔗  
   Look for patterns or relationships between different cases. For example, how does the result of `N=4` relate to `N=5`?

4. **Generalize the Pattern** 🧩  
   Use the relationship you found to create a formula or general rule for solving the problem for any input.

5. **Write Code** 🖥️  
   Combine the base case with the recursive pattern to write your function.

---

## Example: Printing Numbers from 1 to N

Let’s look at an example: printing numbers from 1 to N using recursion.

### 🧐 **Problem**  
Write a function that prints numbers from 1 to N.

### 🔑 **Steps**  
1. **Base Case**:  
   If `n == 1`, print `1`.  
2. **Recursive Case**:  
   For any `n > 1`, first print the numbers from `1 to n-1`, then print `n`.

### 📝 **Python Code**  
```python
def print_1_to_n(n):
    if n == 1:  # Base case
        print(1)
    else:
        print_1_to_n(n-1)  # Recursive call
        print(n)
```

### 👀 **Example Output**  
For `n = 5`, the function will output:
```
1
2
3
4
5
```

---

## Example: Sum of Numbers from 1 to N

Now, let’s explore another example: summing all numbers from 1 to N using recursion.

### 🧐 **Problem**  
Write a function that sums all non-negative integers up to `N`.

### 🔑 **Steps**  
1. **Base Case**:  
   If `n == 0`, return `0` (since the sum of zero numbers is zero).  
2. **Recursive Case**:  
   For any `n > 0`, the sum up to `n` is the sum of numbers up to `n-1` plus `n`.

### 📝 **Python Code**  
```python
def sum_1_to_n(n):
    if n == 0:  # Base case
        return 0
    else:
        return sum_1_to_n(n-1) + n  # Recursive call and summation
```

### 👀 **Example Output**  
For `n = 5`, the function will return:
```
15
```
Explanation:
```
sum_1_to_n(5) = 5 + sum_1_to_n(4)
              = 5 + (4 + sum_1_to_n(3))
              = 5 + (4 + (3 + sum_1_to_n(2)))
              = 5 + (4 + (3 + (2 + sum_1_to_n(1))))
              = 5 + (4 + (3 + (2 + (1 + sum_1_to_n(0)))))
              = 5 + (4 + (3 + (2 + 1)))  = 15
```

---

## Understanding the Recursive Leap of Faith

The **Recursive Leap of Faith** is a concept where you assume that the recursive calls to simpler versions of the problem will work correctly. This mindset can help you think more clearly when solving more complex problems.

### 🧠 **Tip**  
When you are confident that the recursive call for `n-1` works, you can leap to conclude that adding `n` to that result will give the correct answer for `n`. This makes reasoning about recursion faster and more intuitive.

---

## Conclusion

Recursion is a powerful tool that can make solving certain problems elegant and simple once you grasp the underlying logic. By following these five steps:
1. Identifying the base case,
2. Visualizing examples,
3. Finding patterns,
4. Generalizing the solution, and
5. Writing the code,

you will be able to tackle a wide range of recursive problems with confidence.

Happy coding! 😄

[Made from this video](https://www.youtube.com/watch?v=ngCos392W4w&ab_channel=Reducible)
