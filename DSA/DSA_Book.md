# Ace Your TCS Prime & Infosys DSE Interviews: The Ultimate Python DSA Guide

## 👋 Welcome!

This guide is your comprehensive resource for mastering Data Structures and Algorithms (DSA) in Python, specifically tailored for acing technical interviews at **Tata Consultancy Services (TCS) for Prime roles** and **Infosys for Digital Specialist Engineer (DSE) / Specialist Programmer (SP) roles**.

These companies highly value strong foundational knowledge in DSA. This guide will walk you through essential topics, core concepts, common algorithms, Python-specific implementations, and frequently asked interview questions based on patterns observed in TCS and Infosys hiring processes.

**Why Python for DSA?** Python's concise syntax and powerful built-in data structures make it an excellent language for learning DSA and for coding interviews, allowing you to focus on the logic rather than boilerplate code.

## 🎯 How to Use This Guide

1.  **Understand the Structure:** The guide is organized into chapters, each covering a major DSA topic.
2.  **Sequential Learning:** It's recommended to go through topics in order, as concepts often build upon each other.
3.  **Focus on Concepts:** Memorizing code is not enough. Understand _why_ an algorithm works and its trade-offs.
4.  **Practice Actively:**
    - For each problem, try to solve it yourself in Python before looking at the conceptual solution.
    - Code out the solutions. Use Python's features effectively.
    - Test your code with various edge cases.
5.  **Analyze Complexity:** Always determine the Time and Space Complexity of your solutions. This is a critical discussion point in interviews.
6.  **Python Nuances:** Pay attention to how Python's built-in types (lists, dicts, sets) implement underlying DSA concepts and their performance characteristics.
7.  **Mock Interviews:** Practice explaining your thought process and solutions clearly, as if you are in an actual interview.

## 📚 Table of Contents

- [Chapter 1: Introduction to DSA & Python](#chapter-1-introduction-to-dsa--python)
  - [1.1 What are Data Structures?](#11-what-are-data-structures)
  - [1.2 What are Algorithms?](#12-what-are-algorithms)
  - [1.3 Why DSA is Crucial for Interviews (TCS/Infosys Perspective)](#13-why-dsa-is-crucial-for-interviews-tcs--infosys-perspective)
  - [1.4 Abstract Data Types (ADT)](#14-abstract-data-types-adt)
  - [1.5 Python's Role in DSA](#15-pythons-role-in-dsa)
- [Chapter 2: Algorithm Analysis & Asymptotic Notations](#chapter-2-algorithm-analysis--asymptotic-notations)
  - [2.1 Measuring Algorithm Efficiency](#21-measuring-algorithm-efficiency)
  - [2.2 Time Complexity](#22-time-complexity)
  - [2.3 Space Complexity](#23-space-complexity)
  - [2.4 Asymptotic Notations: Big O, Big Omega (Ω), Big Theta (Θ)](#24-asymptotic-notations-big-o-big-omega-ω-big-theta-θ)
  - [2.5 Analyzing Python Code Complexity](#25-analyzing-python-code-complexity)
  - [2.6 Common Complexity Classes with Examples](#26-common-complexity-classes-with-examples)
- [Chapter 3: Python's Built-in Data Structures - A DSA Perspective](#chapter-3-pythons-built-in-data-structures---a-dsa-perspective)
  - [3.1 Lists (Dynamic Arrays)](#31-lists-dynamic-arrays)
  - [3.2 Tuples (Immutable Sequences)](#32-tuples-immutable-sequences)
  - [3.3 Dictionaries (Hash Maps/Hash Tables)](#33-dictionaries-hash-maps--hash-tables)
  - [3.4 Sets (Hash Sets)](#34-sets-hash-sets)
  - [3.5 Strings (Immutable Character Sequences)](#35-strings-immutable-character-sequences)
- [Chapter 4: Arrays / Lists in Python](#chapter-4-arrays--lists-in-python)
  - [4.1 Concept & Python's `list`](#41-concept--pythons-list)
  - [4.2 Basic Operations & Their Complexities](#42-basic-operations--their-complexities)
  - [4.3 Common Array/List Interview Questions (TCS/Infosys Focus)](#43-common-array--list-interview-questions-tcs--infosys-focus)
    - [4.3.1 Find Missing Number in 1 to N](#431-find-missing-number-in-1-to-n)
    - [4.3.2 Rotate Array by k Positions](#432-rotate-array-by-k-positions)
    - [4.3.3 Largest Sum Contiguous Subarray (Kadane's Algorithm)](#433-largest-sum-contiguous-subarray-kadanes-algorithm)
    - [4.3.4 Find a Pair with Given Sum (Sorted & Unsorted)](#434-find-a-pair-with-given-sum-sorted--unsorted)
    - [4.3.5 Segregate 0s and 1s (or 0s, 1s, 2s - Dutch National Flag)](#435-segregate-0s-and-1s-or-0s-1s-2s---dutch-national-flag)
    - [4.3.6 Find Duplicates in an Array](#436-find-duplicates-in-an-array)
    - [4.3.7 Merge Two Sorted Arrays](#437-merge-two-sorted-arrays)
    - [4.3.8 Find the Leader in an Array](#438-find-the-leader-in-an-array)
- [Chapter 5: Strings in Python](#chapter-5-strings-in-python)
  - [5.1 Concept & Immutability](#51-concept--immutability)
  - [5.2 Common String Operations & Complexities](#52-common-string-operations--complexities)
  - [5.3 Common String Interview Questions (TCS/Infosys Focus)](#53-common-string-interview-questions-tcs--infosys-focus)
    - [5.3.1 Check if Palindrome](#531-check-if-palindrome)
    - [5.3.2 Reverse a String (or words in a string)](#532-reverse-a-string-or-words-in-a-string)
    - [5.3.3 Check if Anagrams](#533-check-if-anagrams)
    - [5.3.4 Find First Non-Repeating Character](#534-find-first-non-repeating-character)
    - [5.3.5 Implement `atoi` (String to Integer)](#535-implement-atoi-string-to-integer)
    - [5.3.6 Longest Substring Without Repeating Characters](#536-longest-substring-without-repeating-characters)
    - [5.3.7 String Matching (Naive, brief mention of KMP/Rabin-Karp concepts)](#537-string-matching-naive-brief-mention-of-kmp--rabin-karp-concepts)
- [Chapter 6: Linked Lists in Python](#chapter-6-linked-lists-in-python)
  - [6.1 Concept: Singly, Doubly, Circular](#61-concept-singly-doubly-circular)
  - [6.2 Python Implementation (Node Class, List Class)](#62-python-implementation-node-class-list-class)
  - [6.3 Operations & Complexities](#63-operations--complexities)
  - [6.4 Common Linked List Interview Questions (TCS/Infosys Focus)](#64-common-linked-list-interview-questions-tcs--infosys-focus)
    - [6.4.1 Reverse a Linked List (Iterative & Recursive)](#641-reverse-a-linked-list-iterative--recursive)
    - [6.4.2 Detect Cycle (Floyd's Cycle-Finding Algorithm)](#642-detect-cycle-floyds-cycle-finding-algorithm)
    - [6.4.3 Find Middle Element](#643-find-middle-element)
    - [6.4.4 Merge Two Sorted Linked Lists](#644-merge-two-sorted-linked-lists)
    - [6.4.5 Delete Nth Node from End](#645-delete-nth-node-from-end)
    - [6.4.6 Check if Linked List is Palindrome](#646-check-if-linked-list-is-palindrome)
    - [6.4.7 Intersection of Two Linked Lists](#647-intersection-of-two-linked-lists)
- [Chapter 7: Stacks in Python](#chapter-7-stacks-in-python)
  - [7.1 Concept (LIFO)](#71-concept-lifo)
  - [7.2 Python Implementation (Using `list`, `collections.deque`)](#72-python-implementation-using-list-collectionsdeque)
  - [7.3 Operations & Complexities](#73-operations--complexities)
  - [7.4 Common Stack Interview Questions (TCS/Infosys Focus)](#74-common-stack-interview-questions-tcs--infosys-focus)
    - [7.4.1 Implement Stack using Queues](#741-implement-stack-using-queues)
    - [7.4.2 Balancing Parentheses / Valid Parentheses](#742-balancing-parentheses--valid-parentheses)
    - [7.4.3 Next Greater Element](#743-next-greater-element)
    - [7.4.4 Min Stack (Get minimum element in O(1))](#744-min-stack-get-minimum-element-in-o1)
    - [7.4.5 Infix to Postfix/Prefix Conversion (Conceptual)](#745-infix-to-postfix--prefix-conversion-conceptual)
- [Chapter 8: Queues in Python](#chapter-8-queues-in-python)
  - [8.1 Concept (FIFO)](#81-concept-fifo)
  - [8.2 Python Implementation (Using `collections.deque`, `queue.Queue`)](#82-python-implementation-using-collectionsdeque-queuequeue)
  - [8.3 Operations & Complexities](#83-operations--complexities)
  - [8.4 Types: Circular Queue, Priority Queue (conceptual), Deque](#84-types-circular-queue-priority-queue-conceptual-deque)
  - [8.5 Common Queue Interview Questions (TCS/Infosys Focus)](#85-common-queue-interview-questions-tcs--infosys-focus)
    - [8.5.1 Implement Queue using Stacks](#851-implement-queue-using-stacks)
    - [8.5.2 Generate Binary Numbers from 1 to N using a Queue](#852-generate-binary-numbers-from-1-to-n-using-a-queue)
    - [8.5.3 Level Order Traversal of a Tree (uses Queue)](#853-level-order-traversal-of-a-tree-uses-queue)
- [Chapter 9: Hashing (Dictionaries & Sets in Python)](#chapter-9-hashing-dictionaries--sets-in-python)
  - [9.1 Concept: Hash Functions, Collision Resolution](#91-concept-hash-functions-collision-resolution)
  - [9.2 Python's `dict` and `set` Internals (High-Level)](#92-pythons-dict-and-set-internals-high-level)
  - [9.3 Operations & Complexities](#93-operations--complexities)
  - [9.4 Common Hashing Interview Questions (TCS/Infosys Focus)](#94-common-hashing-interview-questions-tcs--infosys-focus)
    - [9.4.1 Count Frequency of Elements in an Array/List](#941-count-frequency-of-elements-in-an-array--list)
    - [9.4.2 Find if an Array is a Subset of Another](#942-find-if-an-array-is-a-subset-of-another)
    - [9.4.3 Two Sum Problem (Revisited with Hashing)](#943-two-sum-problem-revisited-with-hashing)
    - [9.4.4 Group Anagrams](#944-group-anagrams)
    - [9.4.5 Longest Consecutive Sequence](#945-longest-consecutive-sequence)
- [Chapter 10: Trees](#chapter-10-trees)
  - [10.1 Basic Terminology (Root, Node, Edge, Parent, Child, Leaf, Height, Depth)](#101-basic-terminology-root-node-edge-parent-child-leaf-height-depth)
  - [10.2 Types of Trees (General, Binary, N-ary)](#102-types-of-trees-general-binary-n-ary)
  - [10.3 Binary Trees (BT)](#103-binary-trees-bt)
    - [10.3.1 Python Implementation (Node Class)](#1031-python-implementation-node-class)
    - [10.3.2 Tree Traversals: Inorder, Preorder, Postorder (Recursive & Iterative using Stack)](#1032-tree-traversals-inorder-preorder-postorder-recursive--iterative-using-stack)
    - [10.3.3 Level Order Traversal (BFS using Queue)](#1033-level-order-traversal-bfs-using-queue)
    - [10.3.4 Common BT Questions: Height, Diameter, Max/Min Element, Check if Balanced, Views (Left, Right, Top, Bottom - conceptual for TCS/Infosys)](#1034-common-bt-questions-height-diameter-max--min-element-check-if-balanced-views-left-right-top-bottom---conceptual-for-tcs--infosys)
  - [10.4 Binary Search Trees (BST)](#104-binary-search-trees-bst)
    - [10.4.1 Properties (Left < Root < Right)](#1041-properties-left--root--right)
    - [10.4.2 Operations: Search, Insert, Delete](#1042-operations-search-insert-delete)
    - [10.4.3 Common BST Questions: Check if BT is BST, Find Kth Smallest/Largest, Lowest Common Ancestor (LCA), Inorder Successor/Predecessor](#1043-common-bst-questions-check-if-bt-is-bst-find-kth-smallest--largest-lowest-common-ancestor-lca-inorder-successor--predecessor)
  - [10.5 (Brief) Other Trees: AVL, Red-Black (Conceptual - understand why they exist: self-balancing)](#105-brief-other-trees-avl-red-black-conceptual---understand-why-they-exist-self-balancing)
- [Chapter 11: Heaps (Priority Queues)](#chapter-11-heaps-priority-queues)
  - [11.1 Concept: Min-Heap, Max-Heap, Complete Binary Tree Property](#111-concept-min-heap-max-heap-complete-binary-tree-property)
  - [11.2 Python's `heapq` Module (Min-Heap)](#112-pythons-heapq-module-min-heap)
  - [11.3 Operations: Insert (`heappush`), Extract-Min (`heappop`), Heapify](#113-operations-insert-heappush-extract-min-heappop-heapify)
  - [11.4 Implementing Max-Heap using Min-Heap](#114-implementing-max-heap-using-min-heap)
  - [11.5 Common Heap Interview Questions (TCS/Infosys Focus)](#115-common-heap-interview-questions-tcs--infosys-focus)
    - [11.5.1 Kth Largest/Smallest Element in an Array](#1151-kth-largest--smallest-element-in-an-array)
    - [11.5.2 Merge K Sorted Arrays/Lists](#1152-merge-k-sorted-arrays--lists)
    - [11.5.3 Find Median from a Data Stream](#1153-find-median-from-a-data-stream)
    - [11.5.4 Top K Frequent Elements](#1154-top-k-frequent-elements)
- [Chapter 12: Graphs](#chapter-12-graphs)
  - [12.1 Terminology (Vertex, Edge, Directed, Undirected, Weighted, Degree)](#121-terminology-vertex-edge-directed-undirected-weighted-degree)
  - [12.2 Graph Representations in Python](#122-graph-representations-in-python)
    - [12.2.1 Adjacency List (using `dict` of `list`s or `list` of `list`s)](#1221-adjacency-list-using-dict-of-lists-or-list-of-lists)
    - [12.2.2 Adjacency Matrix (using nested `list`s)](#1222-adjacency-matrix-using-nested-lists)
  - [12.3 Graph Traversals](#123-graph-traversals)
    - [12.3.1 Breadth-First Search (BFS) - Algorithm & Python Implementation](#1231-breadth-first-search-bfs---algorithm--python-implementation)
    - [12.3.2 Depth-First Search (DFS) - Algorithm & Python Implementation (Recursive & Iterative)](#1232-depth-first-search-dfs---algorithm--python-implementation-recursive--iterative)
  - [12.4 Common Graph Interview Questions (TCS/Infosys Focus - often basic traversals & cycle detection)](#124-common-graph-interview-questions-tcs--infosys-focus---often-basic-traversals--cycle-detection)
    - [12.4.1 Detect Cycle in Undirected Graph (using DFS/BFS)](#1241-detect-cycle-in-undirected-graph-using-dfs--bfs)
    - [12.4.2 Detect Cycle in Directed Graph (using DFS)](#1242-detect-cycle-in-directed-graph-using-dfs)
    - [12.4.3 Number of Connected Components in Undirected Graph](#1243-number-of-connected-components-in-undirected-graph)
    - [12.4.4 Shortest Path in Unweighted Graph (using BFS)](#1244-shortest-path-in-unweighted-graph-using-bfs)
    - [12.4.5 Topological Sort (for Directed Acyclic Graphs - DAGs) (Conceptual)](#1245-topological-sort-for-directed-acyclic-graphs---dags-conceptual)
    - [12.4.6 (Brief) Dijkstra's, Prim's, Kruskal's (Conceptual - understand use cases)](#1246-brief-dijkstras-prims-kruskals-conceptual---understand-use-cases)
- [Chapter 13: Searching Algorithms](#chapter-13-searching-algorithms)
  - [13.1 Linear Search](#131-linear-search)
    - [13.1.1 Algorithm & Python Implementation](#1311-algorithm--python-implementation)
    - [13.1.2 Complexity & Use Cases](#1312-complexity--use-cases)
  - [13.2 Binary Search (for Sorted Data)](#132-binary-search-for-sorted-data)
    - [13.2.1 Algorithm (Iterative & Recursive) & Python Implementation](#1321-algorithm-iterative--recursive--python-implementation)
    - [13.2.2 Complexity & Pre-requisites](#1322-complexity--pre-requisites)
    - [13.2.3 Common variations: Find first/last occurrence, Count occurrences, Search in rotated sorted array](#1323-common-variations-find-first--last-occurrence-count-occurrences-search-in-rotated-sorted-array)
- [Chapter 14: Sorting Algorithms](#chapter-14-sorting-algorithms)
  - [14.1 Importance of Sorting](#141-importance-of-sorting)
  - [14.2 Basic Sorting Algorithms (Often asked for implementation or dry run)](#142-basic-sorting-algorithms-often-asked-for-implementation-or-dry-run)
    - [14.2.1 Bubble Sort: Algorithm, Python, Complexity, Stability](#1421-bubble-sort-algorithm-python-complexity-stability)
    - [14.2.2 Selection Sort: Algorithm, Python, Complexity, Stability](#1422-selection-sort-algorithm-python-complexity-stability)
    - [14.2.3 Insertion Sort: Algorithm, Python, Complexity, Stability, Usefulness for nearly sorted data](#1423-insertion-sort-algorithm-python-complexity-stability-usefulness-for-nearly-sorted-data)
  - [14.3 Efficient Sorting Algorithms (Conceptual understanding is key)](#143-efficient-sorting-algorithms-conceptual-understanding-is-key)
    - [14.3.1 Merge Sort: Algorithm (Divide & Conquer), Python (Conceptual), Complexity, Stability](#1431-merge-sort-algorithm-divide--conquer-python-conceptual-complexity-stability)
    - [14.3.2 Quick Sort: Algorithm (Divide & Conquer, Pivot), Python (Conceptual), Complexity (Avg/Worst), In-place nature, Stability (typically not stable)](#1432-quick-sort-algorithm-divide--conquer-pivot-python-conceptual-complexity-avg--worst-in-place-nature-stability-typically-not-stable)
    - [14.3.3 Heap Sort (using Heaps): Algorithm, Complexity, In-place](#1433-heap-sort-using-heaps-algorithm-complexity-in-place)
  - [14.4 Python's Built-in Sort (`list.sort()`, `sorted()`) - Timsort](#144-pythons-built-in-sort-listsort-sorted---timsort)
  - [14.5 Comparison of Sorting Algorithms (Time, Space, Stability, Use Cases)](#145-comparison-of-sorting-algorithms-time-space-stability-use-cases)
- [Chapter 15: Recursion](#chapter-15-recursion)
  - [15.1 Concept: Base Case, Recursive Step](#151-concept-base-case-recursive-step)
  - [15.2 How Recursion Works (Call Stack)](#152-how-recursion-works-call-stack)
  - [15.3 Recursion vs. Iteration](#153-recursion-vs-iteration)
  - [15.4 Common Recursive Problems (TCS/Infosys Focus)](#154-common-recursive-problems-tcs--infosys-focus)
    - [15.4.1 Factorial](#1541-factorial)
    - [15.4.2 Fibonacci Series](#1542-fibonacci-series)
    - [15.4.3 Sum of N natural numbers](#1543-sum-of-n-natural-numbers)
    - [15.4.4 Power of a Number (x^n)](#1544-power-of-a-number-xn)
    - [15.4.5 String Reversal using Recursion](#1545-string-reversal-using-recursion)
  - [15.5 Pitfalls: Stack Overflow, Performance](#155-pitfalls-stack-overflow-performance)
- [Chapter 16: Backtracking](#chapter-16-backtracking)
  - [16.1 Concept: Exploring all possibilities, Pruning search space](#161-concept-exploring-all-possibilities-pruning-search-space)
  - [16.2 General Algorithmic Template](#162-general-algorithmic-template)
  - [16.3 Common Backtracking Problems (Conceptual understanding, simpler versions for TCS/Infosys)](#163-common-backtracking-problems-conceptual-understanding-simpler-versions-for-tcs--infosys)
    - [16.3.1 N-Queens Problem (Conceptual explanation)](#1631-n-queens-problem-conceptual-explanation)
    - [16.3.2 Rat in a Maze](#1632-rat-in-a-maze)
    - [16.3.3 Generating Permutations/Combinations of a String/List](#1633-generating-permutations--combinations-of-a-string--list)
    - [16.3.4 Sudoku Solver (Conceptual explanation)](#1634-sudoku-solver-conceptual-explanation)
- [Chapter 17: Greedy Algorithms](#chapter-17-greedy-algorithms)
  - [17.1 Concept: Making locally optimal choices hoping for a global optimum](#171-concept-making-locally-optimal-choices-hoping-for-a-global-optimum)
  - [17.2 When to Use Greedy? (Optimal Substructure, Greedy Choice Property)](#172-when-to-use-greedy-optimal-substructure-greedy-choice-property)
  - [17.3 Common Greedy Problems (TCS/Infosys Focus)](#173-common-greedy-problems-tcs--infosys-focus)
    - [17.3.1 Activity Selection Problem / N meetings in one room](#1731-activity-selection-problem--n-meetings-in-one-room)
    - [17.3.2 Fractional Knapsack Problem](#1732-fractional-knapsack-problem)
    - [17.3.3 Huffman Coding (Conceptual)](#1733-huffman-coding-conceptual)
    - [17.3.4 Job Sequencing with Deadlines (Conceptual)](#1734-job-sequencing-with-deadlines-conceptual)
- [Chapter 18: Dynamic Programming (DP)](#chapter-18-dynamic-programming-dp)
  - [18.1 Concept: Overlapping Subproblems, Optimal Substructure](#181-concept-overlapping-subproblems-optimal-substructure)
  - [18.2 Techniques:](#182-techniques)
    - [18.2.1 Memoization (Top-Down)](#1821-memoization-top-down)
    - [18.2.2 Tabulation (Bottom-Up)](#1822-tabulation-bottom-up)
  - [18.3 Common DP Problems (Focus on identification and basic recurrences for TCS/Infosys)](#183-common-dp-problems-focus-on-identification-and-basic-recurrences-for-tcs--infosys)
    - [18.3.1 Fibonacci Series (DP approach)](#1831-fibonacci-series-dp-approach)
    - [18.3.2 Climbing Stairs / Ways to reach Nth stair](#1832-climbing-stairs--ways-to-reach-nth-stair)
    - [18.3.3 0/1 Knapsack Problem (Conceptual or simple recurrence)](#1833-0--1-knapsack-problem-conceptual-or-simple-recurrence)
    - [18.3.4 Longest Common Subsequence (LCS) (Conceptual or simple recurrence)](#1834-longest-common-subsequence-lcs-conceptual-or-simple-recurrence)
    - [18.3.5 Edit Distance (Conceptual)](#1835-edit-distance-conceptual)
    - [18.3.6 Coin Change Problem (Number of ways / Min coins)](#1836-coin-change-problem-number-of-ways--min-coins)
- [Chapter 19: Bit Manipulation](#chapter-19-bit-manipulation)
  - [19.1 Basic Bitwise Operators in Python (`&`, `|`, `^`, `~`, `<<`, `>>`)](#191-basic-bitwise-operators-in-python----)
  - [19.2 Common Bit Manipulation Techniques & Problems (TCS/Infosys may ask simpler ones)](#192-common-bit-manipulation-techniques--problems-tcs--infosys-may-ask-simpler-ones)
    - [19.2.1 Check if a number is Even or Odd](#1921-check-if-a-number-is-even-or-odd)
    - [19.2.2 Check if Kth bit is Set](#1922-check-if-kth-bit-is-set)
    - [19.2.3 Set/Clear/Toggle Kth bit](#1923-set--clear--toggle-kth-bit)
    - [19.2.4 Count Set Bits (Brian Kernighan's Algorithm, Lookup Table)](#1924-count-set-bits-brian-kernighans-algorithm-lookup-table)
    - [19.2.5 Find the only non-repeating element in an array where every other element repeats twice (XOR)](#1925-find-the-only-non-repeating-element-in-an-array-where-every-other-element-repeats-twice-xor)
    - [19.2.6 Power of 2 Check](#1926-power-of-2-check)
- [Chapter 20: Problem-Solving Strategies & Company-Specific Tips](#chapter-20-problem-solving-strategies--company-specific-tips)
  - [20.1 General Approach to Solving Coding Problems](#201-general-approach-to-solving-coding-problems)
    - [20.1.1 Understand the Problem & Ask Clarifying Questions](#2011-understand-the-problem--ask-clarifying-questions)
    - [20.1.2 Devise a Plan (Brute-force, Optimize)](#2012-devise-a-plan-brute-force-optimize)
    - [20.1.3 Write Clean, Modular Code](#2013-write-clean-modular-code)
    - [20.1.4 Test with Edge Cases](#2014-test-with-edge-cases)
    - [20.1.5 Communicate Your Thought Process](#2015-communicate-your-thought-process)
  - [20.2 TCS Prime & Infosys DSE/SP Interview Focus](#202-tcs-prime--infosys-dse--sp-interview-focus)
    - [20.2.1 Emphasis on Fundamentals](#2021-emphasis-on-fundamentals)
    - [20.2.2 Standard DSA Questions](#2022-standard-dsa-questions)
    - [20.2.3 Importance of Complexity Analysis](#2023-importance-of-complexity-analysis)
    - [20.2.4 Coding Proficiency in Chosen Language (Python)](#2024-coding-proficiency-in-chosen-language-python)
    - [20.2.5 Basic Puzzles and Logical Reasoning (sometimes)](#2025-basic-puzzles-and-logical-reasoning-sometimes)
- [Chapter 21: Common Python-Specific Interview Questions (related to DSA)](#chapter-21-common-python-specific-interview-questions-related-to-dsa)
  - [21.1 `list` vs `tuple`: When to use which? Mutability.](#211-list-vs-tuple-when-to-use-which-mutability)
  - [21.2 How `dict` and `set` work internally (high-level hashing concept).](#212-how-dict-and-set-work-internally-high-level-hashing-concept)
  - [21.3 Time complexity of common `list`, `dict`, `set` operations in Python.](#213-time-complexity-of-common-list-dict-set-operations-in-python)
  - [21.4 Python's `sort()` vs `sorted()`.](#214-pythons-sort-vs-sorted)
  - [21.5 Generators and Iterators (briefly, for memory efficiency).](#215-generators-and-iterators-briefly-for-memory-efficiency)
  - [21.6 List Comprehensions: Readability vs. Performance.](#216-list-comprehensions-readability-vs-performance)
  - [21.7 Deep vs. Shallow Copy in Python collections.](#217-deep-vs-shallow-copy-in-python-collections)
- [Chapter 22: Further Learning & Mock Interviews](#chapter-22-further-learning--mock-interviews)
  - [22.1 Recommended Online Platforms for Practice](#221-recommended-online-platforms-for-practice)
  - [22.2 Importance of Mock Interviews](#222-importance-of-mock-interviews)
  - [22.3 Staying Updated](#223-staying-updated)

---

## Chapter 1: Introduction to DSA & Python

### 1.1 What are Data Structures?

- **Concept:** A data structure is a specialized format for organizing, processing, retrieving, and storing data. It's a way to arrange data on a computer so that it can be accessed and updated efficiently.
- **Examples:** Arrays (Lists in Python), Linked Lists, Stacks, Queues, Trees, Graphs, Hash Tables (Dictionaries in Python).
- **Why Python:** Python's built-in data structures like lists, dictionaries, and sets provide high-level, easy-to-use interfaces for many common DSA needs.

### 1.2 What are Algorithms?

- **Concept:** An algorithm is a finite sequence of well-defined, computer-implementable instructions, typically to solve a class of specific problems or to perform a computation.
- **Characteristics:** Input, Output, Definiteness, Finiteness, Effectiveness.
- **Examples:** Sorting algorithms (Merge Sort, Quick Sort), Searching algorithms (Binary Search), Graph traversal algorithms (BFS, DFS).

### 1.3 Why DSA is Crucial for Interviews (TCS/Infosys Perspective)

- **Problem-Solving Assessment:** Companies like TCS and Infosys use DSA questions to evaluate a candidate's analytical and problem-solving skills.
- **Efficiency:** Understanding DSA helps in writing code that is not only correct but also efficient in terms of time and memory.
- **Foundation for Complex Systems:** DSA concepts are the building blocks for more complex software systems.
- **Standardized Evaluation:** DSA provides a common ground to compare candidates from different backgrounds.
- **TCS Prime/Infosys DSE Focus:** These roles often require candidates to solve moderately complex problems involving arrays, strings, linked lists, trees, basic sorting/searching, and hashing. A good grasp of time/space complexity is expected.

### 1.4 Abstract Data Types (ADT)

- **Concept:** An ADT is a mathematical model for data types. It defines a set of operations without specifying how these operations are implemented. It's about _what_ an ADT does, not _how_ it does it.
- **Example:**
  - `List` ADT: Operations like `add(item)`, `remove(item)`, `get(index)`, `size()`. Can be implemented using arrays or linked lists.
  - `Stack` ADT: Operations like `push(item)`, `pop()`, `peek()`.
- **Benefit:** Abstraction, Encapsulation, Reusability.

### 1.5 Python's Role in DSA

- **Readability & Simplicity:** Python's clean syntax allows focusing on algorithms rather than language complexities.
- **Rich Built-in Structures:**
  - `list`: Dynamic arrays.
  - `dict`: Hash tables.
  - `set`: Hash sets.
  - `collections.deque`: Efficient stacks and queues.
  - `heapq`: Module for heap operations.
- **Rapid Prototyping:** Quickly implement and test DSA concepts.
- **Interview Preference:** Widely accepted and often preferred in coding interviews due to its conciseness.

---

## Chapter 2: Algorithm Analysis & Asymptotic Notations

### 2.1 Measuring Algorithm Efficiency

- **Concept:** We need a way to compare algorithms, especially as input size grows. Efficiency is typically measured in terms of:
  - **Time Complexity:** How much time an algorithm takes to run.
  - **Space Complexity:** How much memory an algorithm uses.
- **Goal:** To find the most efficient algorithm for a given problem.

### 2.2 Time Complexity

- **Definition:** The amount of computational time an algorithm takes to complete as a function of the input size (usually denoted as 'n').
- **Focus:** We are interested in how the runtime _grows_ with the input size, not the exact milliseconds.

### 2.3 Space Complexity

- **Definition:** The total amount of memory space used by an algorithm with respect to the input size. This includes:
  - **Input Space:** Space taken by the input data.
  - **Auxiliary Space:** Extra space or temporary space used by the algorithm (e.g., for variables, data structures).
- **In-place algorithms:** Use O(1) auxiliary space.

### 2.4 Asymptotic Notations: Big O, Big Omega (Ω), Big Theta (Θ)

- **Concept:** Mathematical tools to describe the limiting behavior of a function when the argument tends towards a particular value or infinity. Used to describe the performance of an algorithm in a formal, standardized way.
- **Big O Notation (O): Upper Bound (Worst-Case)**
  - Describes the maximum time/space an algorithm will take. "The algorithm's performance is _at most_ this bad."
  - Example: If an algorithm is O(n^2), its runtime grows no faster than quadratically with input size n.
- **Big Omega Notation (Ω): Lower Bound (Best-Case)**
  - Describes the minimum time/space an algorithm will take. "The algorithm's performance is _at least_ this good."
- **Big Theta Notation (Θ): Tight Bound (Average-Case or when Best=Worst)**
  - Describes the exact asymptotic behavior; the algorithm's performance is bounded both above and below by the same function.
- **Interview Focus:** Big O (worst-case) is generally the most important for interview discussions unless specified otherwise.

### 2.5 Analyzing Python Code Complexity

- **Single Statements:** Usually O(1) (e.g., assignment, arithmetic operation).
- **Loops:**
  - `for i in range(n): ...` is O(n) if the loop body is O(1).
  - Nested loops: `for i in range(n): for j in range(m): ...` is O(n\*m).
- **Function Calls:** Complexity of the called function.
- **Python Built-ins:**
  - `list.append()`: Amortized O(1).
  - `list.insert(0, val)`: O(n).
  - `x in list`: O(n).
  - `dict[key] = val`, `dict[key]`, `key in dict`: Average O(1). Worst-case O(n) (due to hash collisions).
  - `set.add(val)`, `val in set`: Average O(1). Worst-case O(n).
  - `list.sort()` or `sorted()`: O(n log n) (Timsort).

### 2.6 Common Complexity Classes with Examples

- **O(1) - Constant Time:** Accessing an element in a Python list by index `my_list[i]`.
- **O(log n) - Logarithmic Time:** Binary search in a sorted list. Finding an element in a balanced BST.
- **O(n) - Linear Time:** Iterating through a list `for item in my_list: ...`. `sum(my_list)`.
- **O(n log n) - Linearithmic Time:** Efficient sorting algorithms like Merge Sort, Heap Sort, Python's `list.sort()`.
- **O(n^2) - Quadratic Time:** Nested loops iterating `n` times each (e.g., Bubble Sort, naive pairwise comparisons).
- **O(2^n) - Exponential Time:** Some recursive algorithms without memoization (e.g., naive Fibonacci).
- **O(n!) - Factorial Time:** Generating all permutations of a list.

**Example Question:**

- **Q: What is the time complexity of the following Python code?**
  ```python
  def find_sum(numbers): # numbers is a list of size n
      total = 0         # O(1)
      for num in numbers: # Loop runs n times
          total += num  # O(1)
      return total      # O(1)
  ```
  - **Answer:** The loop runs `n` times, and operations inside are O(1). So, total time complexity is O(n).

---

## Chapter 3: Python's Built-in Data Structures - A DSA Perspective

_(This chapter connects theoretical DSA concepts to Python's practical implementations.)_

### 3.1 Lists (Dynamic Arrays)

- **DSA Concept:** Dynamic Array.
- **Python `list`:** Ordered, mutable sequence of elements. Can hold heterogeneous data types.
- **Key Operations & Average Time Complexities:**
  - `my_list[i]` (Access): O(1)
  - `my_list[i] = val` (Update): O(1)
  - `my_list.append(val)` (Add to end): Amortized O(1)
  - `my_list.insert(i, val)` (Insert at index i): O(n)
  - `my_list.pop()` (Remove from end): O(1)
  - `my_list.pop(i)` (Remove from index i): O(n)
  - `val in my_list` (Search): O(n)
  - `len(my_list)`: O(1)
  - Slicing `my_list[i:j]`: O(j-i) or O(k) where k is slice length. Creates a new list.
- **Note:** "Amortized O(1)" for append means that while an individual append might occasionally be O(n) (when resizing), the average cost over many appends is O(1).

### 3.2 Tuples (Immutable Sequences)

- **DSA Concept:** Immutable Array/Sequence.
- **Python `tuple`:** Ordered, _immutable_ sequence. Often used for fixed collections of items.
- **Key Operations & Time Complexities:**
  - `my_tuple[i]` (Access): O(1)
  - `val in my_tuple` (Search): O(n)
  - `len(my_tuple)`: O(1)
  - Slicing `my_tuple[i:j]`: O(j-i) or O(k). Creates a new tuple.
- **Use Case:** When you need a sequence that should not be changed (e.g., dictionary keys if they are sequences, returning multiple values from a function).

### 3.3 Dictionaries (Hash Maps/Hash Tables)

- **DSA Concept:** Hash Table or Hash Map.
- **Python `dict`:** Unordered (Python 3.7+ maintains insertion order, but rely on it as a hash map for complexity), mutable collection of key-value pairs. Keys must be hashable and unique.
- **Key Operations & Average Time Complexities:**
  - `my_dict[key]` (Access): Average O(1), Worst O(n)
  - `my_dict[key] = val` (Insert/Update): Average O(1), Worst O(n)
  - `del my_dict[key]` (Delete): Average O(1), Worst O(n)
  - `key in my_dict` (Search for key): Average O(1), Worst O(n)
  - `len(my_dict)`: O(1)
- **Worst Case:** Occurs due to hash collisions, though Python's implementation is highly optimized.

### 3.4 Sets (Hash Sets)

- **DSA Concept:** Hash Set.
- **Python `set`:** Unordered, mutable collection of unique, hashable elements.
- **Key Operations & Average Time Complexities:**
  - `my_set.add(val)` (Add element): Average O(1), Worst O(n)
  - `my_set.remove(val)` (Remove element): Average O(1), Worst O(n) (raises KeyError if not present)
  - `my_set.discard(val)` (Remove element if present): Average O(1), Worst O(n)
  - `val in my_set` (Check membership): Average O(1), Worst O(n)
  - `len(my_set)`: O(1)
  - Set operations (union, intersection, difference): Generally O(len(s1) + len(s2)) or proportional to the size of the sets involved.

### 3.5 Strings (Immutable Character Sequences)

- **DSA Concept:** Sequence of characters, often implemented as an array of characters.
- **Python `str`:** Immutable sequence of Unicode characters.
- **Key Operations & Time Complexities (n = length of string, m = length of other string/substring):**
  - `my_str[i]` (Access char): O(1)
  - `s1 + s2` (Concatenation): O(n+m) (creates a new string)
  - `sub in my_str` (Substring check): O(n\*m) in naive case, but Python's impl is optimized (e.g., Boyer-Moore or similar for O(n+m) on average).
  - Slicing `my_str[i:j]`: O(j-i) or O(k). Creates a new string.
  - `len(my_str)`: O(1) (if length is stored, which it is).

---

## Chapter 4: Arrays / Lists in Python

_(Detailed explanations and common interview questions for arrays/lists will follow the structure below. This is a sample of how each subsequent chapter section would be detailed.)_

### 4.1 Concept & Python's `list`

- **Concept/Theory:** Arrays are collections of items stored at contiguous memory locations (in traditional languages). Python's `list` is a dynamic array, meaning it can grow or shrink in size. It provides an abstraction over raw memory management.
- **Python Implementation Notes:** Python lists are versatile and can store elements of different data types. Internally, they are arrays of pointers to objects.

### 4.2 Basic Operations & Their Complexities

- _(As covered in Chapter 3.1, but could be reiterated here with Python examples)_
  - Access: `my_list[index]` -> O(1)
  - Append: `my_list.append(value)` -> Amortized O(1)
  - Insert: `my_list.insert(index, value)` -> O(N)
  - Delete: `my_list.pop(index)` or `del my_list[index]` -> O(N) (except `pop()` from end is O(1))
  - Search: `value in my_list` -> O(N)
  - Length: `len(my_list)` -> O(1)
  - Iteration: `for x in my_list:` -> O(N)

### 4.3 Common Array/List Interview Questions (TCS/Infosys Focus)

#### 4.3.1 Find Missing Number in 1 to N

- **Q: Given a list of N-1 integers from 1 to N, find the missing integer.**

  - **Underlying Concept/Algorithm:** Summation formula, XOR method.
  - **Pythonic Solution Approach (Summation):**
    1.  Calculate the expected sum of numbers from 1 to N: `expected_sum = N * (N + 1) // 2`.
    2.  Calculate the actual sum of elements in the given list: `actual_sum = sum(given_list)`.
    3.  The missing number is `expected_sum - actual_sum`.
    ```python
    def find_missing_sum(arr, n_val):
        expected_sum = n_val * (n_val + 1) // 2
        actual_sum = sum(arr)
        return expected_sum - actual_sum
    ```
  - **Pythonic Solution Approach (XOR):**

    1.  XOR all numbers from 1 to N: `xor_total = 0; for i in range(1, N + 1): xor_total ^= i`.
    2.  XOR all numbers in the given list: `xor_arr = 0; for num in given_list: xor_arr ^= num`.
    3.  The missing number is `xor_total ^ xor_arr`.

    ```python
    def find_missing_xor(arr, n_val):
        xor_total = 0
        for i in range(1, n_val + 1):
            xor_total ^= i

        xor_arr = 0
        for num in arr:
            xor_arr ^= num

        return xor_total ^ xor_arr
    ```

  - **Complexity:**
    - Summation: Time O(N) (for `sum()`), Space O(1).
    - XOR: Time O(N) (for loops), Space O(1).

#### 4.3.2 Rotate Array by k Positions

- **Q: Rotate a list by `k` positions to the right (or left). E.g., `[1,2,3,4,5]`, k=2 -> `[4,5,1,2,3]`.**

  - **Underlying Concept/Algorithm:** Slicing, Reversal algorithm.
  - **Pythonic Solution Approach (Slicing - simplest for Python):**
    `k = k % len(arr)` (to handle k > len(arr))
    `rotated_arr = arr[-k:] + arr[:-k]`
    ```python
    def rotate_array_slicing(arr, k):
        if not arr:
            return []
        n = len(arr)
        k = k % n
        return arr[-k:] + arr[:-n+k] # Corrected: arr[-k:] + arr[:-k]
    ```
    Corrected slice:
    ```python
    def rotate_array_slicing(arr, k):
        if not arr:
            return []
        n = len(arr)
        k = k % n # Normalize k
        # For right rotation: last k elements + first n-k elements
        return arr[n-k:] + arr[:n-k]
    ```
  - **Pythonic Solution Approach (Reversal Algorithm - for in-place O(1) space):**

    1.  Reverse the first `n-k` elements.
    2.  Reverse the last `k` elements.
    3.  Reverse the entire list.
        (Helper function `reverse(arr, start, end)` needed)

    ```python
    def reverse_sub_array(arr, start, end):
        while start < end:
            arr[start], arr[end] = arr[end], arr[start]
            start += 1
            end -= 1

    def rotate_array_reversal(arr, k):
        n = len(arr)
        if n == 0:
            return
        k = k % n # Normalize k for rotations greater than n

        # For right rotation by k
        reverse_sub_array(arr, 0, n - 1)     # Reverse all
        reverse_sub_array(arr, 0, k - 1)     # Reverse first k
        reverse_sub_array(arr, k, n - 1)     # Reverse remaining n-k
        # This implements left rotation by k. For right rotation:
        # reverse_sub_array(arr, 0, n - k - 1) # Reverse first n-k
        # reverse_sub_array(arr, n - k, n - 1) # Reverse last k
        # reverse_sub_array(arr, 0, n - 1)     # Reverse all
    ```

    Corrected Reversal for **Right Rotation**:

    ```python
    def reverse_sub_array(arr, start, end):
        while start < end:
            arr[start], arr[end] = arr[end], arr[start]
            start += 1
            end -= 1

    def rotate_array_reversal_right(arr, k):
        n = len(arr)
        if n == 0:
            return
        k = k % n
        if k == 0: # No rotation needed
            return

        # 1. Reverse the last k elements
        reverse_sub_array(arr, n - k, n - 1)
        # 2. Reverse the first n-k elements
        reverse_sub_array(arr, 0, n - k - 1)
        # 3. Reverse the entire array
        reverse_sub_array(arr, 0, n - 1)
    ```

  - **Complexity:**
    - Slicing: Time O(N) (due to list concatenation and slicing creating new lists), Space O(N).
    - Reversal: Time O(N) (three passes), Space O(1) (in-place).

#### 4.3.3 Largest Sum Contiguous Subarray (Kadane's Algorithm)

- **Q: Find the contiguous sublist with the largest sum within a given list of numbers (can be negative).**

  - **Underlying Concept/Algorithm:** Dynamic Programming (Kadane's Algorithm).
  - **Pythonic Solution Approach (Kadane's):**
    Iterate through the list, keeping track of `current_max_sum` (max sum ending at current position) and `global_max_sum` (max sum found so far).
    `current_max_sum = max(number, current_max_sum + number)`
    `global_max_sum = max(global_max_sum, current_max_sum)`

    ```python
    def kadane_algorithm(arr):
        if not arr:
            return 0 # Or raise error, or handle as per problem spec

        global_max_sum = arr[0]
        current_max_sum = arr[0]

        for i in range(1, len(arr)):
            num = arr[i]
            current_max_sum = max(num, current_max_sum + num)
            if current_max_sum > global_max_sum:
                global_max_sum = current_max_sum
        return global_max_sum
    ```

  - **Complexity:** Time O(N), Space O(1).

#### 4.3.4 Find a Pair with Given Sum (Sorted & Unsorted)

- **Q: Given a list and a target sum, find if there exists a pair of elements whose sum is equal to the target.**
  - **Unsorted List - Hashing Approach:**
    - **Underlying Concept:** Use a hash set (Python `set`) to store elements encountered so far. For each element `x`, check if `target - x` is in the set.
    ```python
    def two_sum_hashing(arr, target):
        seen = set()
        for num in arr:
            complement = target - num
            if complement in seen:
                return True # Or return (num, complement)
            seen.add(num)
        return False
    ```
    - **Complexity:** Time O(N) (average, due to set lookups), Space O(N) (for the set).
  - **Sorted List - Two-Pointer Approach:**
    - **Underlying Concept:** Use two pointers, one at the beginning (`left`) and one at the end (`right`).
      - If `arr[left] + arr[right] == target`, pair found.
      - If sum < target, `left++` (to increase sum).
      - If sum > target, `right--` (to decrease sum).
    ```python
    def two_sum_sorted_pointers(arr, target): # arr must be sorted
        left, right = 0, len(arr) - 1
        while left < right:
            current_sum = arr[left] + arr[right]
            if current_sum == target:
                return True # Or return (arr[left], arr[right])
            elif current_sum < target:
                left += 1
            else:
                right -= 1
        return False
    ```
    - **Complexity:** Time O(N) (single pass), Space O(1).

## Chapter 4: Arrays / Lists in Python (Continued)

#### 4.3.5 Segregate 0s and 1s (or 0s, 1s, 2s - Dutch National Flag)

- **Q: Given a list containing only 0s and 1s, segregate all 0s to the left and all 1s to the right.**

  - **Underlying Concept/Algorithm:** Two-pointer approach.
  - **Pythonic Solution Approach (0s and 1s):**
    Use a `left` pointer starting at 0 and a `right` pointer starting at `len(arr)-1`.
    Move `left` rightwards as long as `arr[left]` is 0.
    Move `right` leftwards as long as `arr[right]` is 1.
    If `left < right`, swap `arr[left]` and `arr[right]`.
    ```python
    def segregate_0s_and_1s(arr):
        left, right = 0, len(arr) - 1
        while left < right:
            while arr[left] == 0 and left < right:
                left += 1
            while arr[right] == 1 and left < right:
                right -= 1
            if left < right:
                arr[left], arr[right] = arr[right], arr[left]
                left += 1
                right -= 1
        return arr
    ```
  - **Complexity:** Time O(N), Space O(1) (in-place).

- **Q: Given a list containing 0s, 1s, and 2s, sort it in-place (Dutch National Flag problem).**
  - **Underlying Concept/Algorithm:** Three-pointer approach (low, mid, high).
  - **Pythonic Solution Approach (Dutch National Flag):**
    Maintain three pointers: `low=0`, `mid=0`, `high=len(arr)-1`.
    Iterate while `mid <= high`:
    - If `arr[mid] == 0`: swap `arr[low]` with `arr[mid]`, increment `low` and `mid`.
    - If `arr[mid] == 1`: increment `mid`.
    - If `arr[mid] == 2`: swap `arr[mid]` with `arr[high]`, decrement `high`. (Do not increment `mid` here as the swapped element from `high` needs to be processed).
    ```python
    def dutch_national_flag_sort(arr):
        low, mid, high = 0, 0, len(arr) - 1
        while mid <= high:
            if arr[mid] == 0:
                arr[low], arr[mid] = arr[mid], arr[low]
                low += 1
                mid += 1
            elif arr[mid] == 1:
                mid += 1
            else: # arr[mid] == 2
                arr[mid], arr[high] = arr[high], arr[mid]
                high -= 1
        return arr
    ```
  - **Complexity:** Time O(N) (single pass), Space O(1) (in-place).

#### 4.3.6 Find Duplicates in an Array

- **Q: Given a list of integers where numbers are in the range `[1, n]` and the list size is `n+1`, find one duplicate number. (Other variations exist)**
  - **Underlying Concept/Algorithm:**
    1.  **Hashing (Set):** Store elements in a set. If an element is already present, it's a duplicate.
    2.  **Sorting:** Sort the list. Duplicates will be adjacent.
    3.  **Floyd's Cycle-Finding Algorithm (Tortoise and Hare):** If modification is not allowed and space is O(1). Treat array values as "next" pointers.
    4.  **Negative Marking (if modification allowed and numbers are positive):** Iterate through the list. For each number `x`, go to index `abs(x)-1`. If `arr[abs(x)-1]` is negative, `x` is a duplicate. Otherwise, make `arr[abs(x)-1]` negative.
  - **Pythonic Solution Approach (Hashing):**
    ```python
    def find_duplicate_hashing(arr):
        seen = set()
        for num in arr:
            if num in seen:
                return num
            seen.add(num)
        return -1 # Or raise error
    ```
    - **Complexity:** Time O(N), Space O(N).
  - **Pythonic Solution Approach (Sorting):**
    ```python
    def find_duplicate_sorting(arr):
        arr.sort()
        for i in range(len(arr) - 1):
            if arr[i] == arr[i+1]:
                return arr[i]
        return -1
    ```
    - **Complexity:** Time O(N log N) (due to sort), Space O(1) or O(N) depending on Python's sort implementation details (Timsort is O(N) space in worst case).
  - **Pythonic Solution Approach (Negative Marking - for range [1, n-1] in array of size n):**
    ```python
    def find_duplicate_negative_marking(arr):
        # Assumes numbers are in range [1, len(arr)-1] and one duplicate
        for num in arr:
            index = abs(num) - 1 # Adjust if range is [0, n-1]
            if arr[index] < 0:
                return abs(num)
            arr[index] = -arr[index]
        # Restore array (optional, if modification needs to be undone)
        # for i in range(len(arr)): arr[i] = abs(arr[i])
        return -1 # Should not happen if conditions met
    ```
    - **Complexity:** Time O(N), Space O(1) (modifies input array).

#### 4.3.7 Merge Two Sorted Arrays

- **Q: Given two sorted lists, merge them into a single sorted list.**

  - **Underlying Concept/Algorithm:** Two-pointer approach. Compare elements from both lists and add the smaller one to the result.
  - **Pythonic Solution Approach:**

    ```python
    def merge_sorted_arrays(arr1, arr2):
        merged_array = []
        i, j = 0, 0
        while i < len(arr1) and j < len(arr2):
            if arr1[i] < arr2[j]:
                merged_array.append(arr1[i])
                i += 1
            else:
                merged_array.append(arr2[j])
                j += 1

        # Append remaining elements from arr1, if any
        while i < len(arr1):
            merged_array.append(arr1[i])
            i += 1

        # Append remaining elements from arr2, if any
        while j < len(arr2):
            merged_array.append(arr2[j])
            j += 1
        return merged_array
    ```

  - **Complexity:** Time O(N+M) (where N and M are lengths of arr1 and arr2), Space O(N+M) for the new merged list. (If merging into one of the existing arrays and it has space, space can be O(1) but logic is more complex).

#### 4.3.8 Find the Leader in an Array

- **Q: An element is a leader if it is greater than all elements to its right. The rightmost element is always a leader. Find all leaders.**

  - **Underlying Concept/Algorithm:** Iterate from right to left. Keep track of the maximum element seen so far from the right.
  - **Pythonic Solution Approach:**

    ```python
    def find_leaders(arr):
        if not arr:
            return []

        n = len(arr)
        leaders = []
        max_from_right = arr[n-1] # Rightmost element is always a leader
        leaders.append(max_from_right)

        for i in range(n - 2, -1, -1): # Iterate from second last to first
            if arr[i] > max_from_right:
                leaders.append(arr[i])
                max_from_right = arr[i]

        return leaders[::-1] # To return in original order from left to right
    ```

  - **Complexity:** Time O(N) (single pass), Space O(N) in the worst case for storing leaders (e.g., a decreasingly sorted array). O(1) if only printing.

---

## Chapter 5: Strings in Python

### 5.1 Concept & Immutability

- **Concept:** Strings are sequences of characters. In Python, strings are used to represent textual data.
- **Immutability:** A crucial property of Python strings is that they are **immutable**. This means once a string is created, it cannot be changed. Any operation that appears to modify a string (like concatenation, slicing, `replace()`) actually creates a _new_ string object in memory.
  - **Implications:**
    - Efficiency: For frequent modifications (e.g., building a string in a loop), repeatedly concatenating with `+` can be inefficient (O(N^2) for N concatenations of small strings) because new strings are created each time. Use `"".join(list_of_strings)` or f-strings for better performance.
    - Safety: Immutable strings can be safely used as keys in dictionaries or elements in sets.

### 5.2 Common String Operations & Complexities

Let `n` be the length of the string `s1`, and `m` be the length of string `s2` or substring.

- `len(s1)`: O(1) (length is stored with the string object).
- `s1[i]` (Access character): O(1).
- `s1[i:j]` (Slicing): O(j-i) or O(k) where k is slice length. Creates a new string.
- `s1 + s2` (Concatenation): O(n+m). Creates a new string.
- `char_or_substring in s1` (Membership testing):
  - If `char_or_substring` is a single character: O(n) in the worst case.
  - If `char_or_substring` is a substring: Python uses efficient algorithms (like Boyer-Moore or similar variations), making average case often closer to O(n+m) or O(n), but worst-case can be O(n\*m) for naive algorithms.
- `s1.find(substring)`: Similar to membership testing for substrings. Returns index or -1.
- `s1.replace(old, new)`: O(n\*k) in a general sense if `k` replacements are made, and each involves copying parts of the string. If `old` and `new` have different lengths, this can be more complex. In many practical cases, it's closer to O(n). Creates a new string.
- `s1.split(delimiter)`: O(n). Creates a list of new strings.
- `delimiter.join(list_of_strings)`: O(total length of all strings in the list). This is efficient.
- `s1.lower()`, `s1.upper()`, `s1.strip()`: O(n). Creates new strings.

### 5.3 Common String Interview Questions (TCS/Infosys Focus)

#### 5.3.1 Check if Palindrome

- **Q: Given a string, check if it reads the same forwards and backwards (is a palindrome). Consider cases, spaces, and alphanumeric characters if specified.**

  - **Underlying Concept/Algorithm:** Two-pointer technique or compare with reversed string.
  - **Pythonic Solution Approach (Two Pointers):**

    ```python
    def is_palindrome_simple(s):
        left, right = 0, len(s) - 1
        while left < right:
            if s[left] != s[right]:
                return False
            left += 1
            right -= 1
        return True

    def is_palindrome_alphanumeric(s):
        # More robust: considers only alphanumeric and ignores case
        processed_s = "".join(filter(str.isalnum, s)).lower()
        left, right = 0, len(processed_s) - 1
        while left < right:
            if processed_s[left] != processed_s[right]:
                return False
            left += 1
            right -= 1
        return True
    ```

  - **Pythonic Solution Approach (Slicing):**
    ```python
    def is_palindrome_slicing(s):
        processed_s = "".join(filter(str.isalnum, s)).lower() # Optional processing
        return processed_s == processed_s[::-1]
    ```
  - **Complexity:**
    - Two Pointers: Time O(N) (where N is length of string/processed string), Space O(1) (if processing creates a new string, then O(N) space for that string).
    - Slicing: Time O(N) (slicing and comparison take linear time), Space O(N) (for the reversed slice).

#### 5.3.2 Reverse a String (or words in a string)

- **Q: Reverse a given string.**

  - **Underlying Concept/Algorithm:** Slicing, or build reversed string character by character.
  - **Pythonic Solution Approach (Slicing):**
    ```python
    def reverse_string(s):
        return s[::-1]
    ```
  - **Complexity:** Time O(N), Space O(N) (slicing creates a new string).

- **Q: Reverse the order of words in a given string.** (e.g., "hello world" -> "world hello")
  - **Underlying Concept/Algorithm:** Split the string into words, reverse the list of words, then join them back.
  - **Pythonic Solution Approach:**
    ```python
    def reverse_words_in_string(s):
        words = s.split()  # Splits by whitespace and handles multiple spaces
        reversed_words = words[::-1] # or words.reverse() if modifying in-place
        return " ".join(reversed_words)
    ```
  - **Complexity:** Time O(N) (split, reverse list, join are all roughly linear to total string length), Space O(N) (for list of words and new string).

#### 5.3.3 Check if Anagrams

- **Q: Given two strings, check if they are anagrams of each other (i.e., they contain the same characters with the same frequencies).**

  - **Underlying Concept/Algorithm:** Sorting, Character counting (Hashing).
  - **Pythonic Solution Approach (Sorting):**
    ```python
    def are_anagrams_sorting(s1, s2):
        if len(s1) != len(s2):
            return False
        return sorted(s1) == sorted(s2)
    ```
    - **Complexity:** Time O(N log N) (due to sorting, N is length of longer string), Space O(N) (for sorted copies).
  - **Pythonic Solution Approach (Character Counting using `collections.Counter` or a dictionary):**

    ```python
    from collections import Counter

    def are_anagrams_counting(s1, s2):
        if len(s1) != len(s2):
            return False
        return Counter(s1) == Counter(s2)

    # Manual counting with dictionary
    def are_anagrams_manual_dict(s1, s2):
        if len(s1) != len(s2):
            return False

        count1 = {}
        count2 = {}

        for char in s1:
            count1[char] = count1.get(char, 0) + 1
        for char in s2:
            count2[char] = count2.get(char, 0) + 1

        return count1 == count2
    ```

    - **Complexity:** Time O(N) (iterating through strings and dictionary operations are on average O(1) per char), Space O(K) (where K is the size of the character set, e.g., 26 for lowercase English, or number of unique chars. So, effectively O(1) for fixed charsets, or O(N) if all chars are unique).

#### 5.3.4 Find First Non-Repeating Character

- **Q: Given a string, find its first non-repeating character.**

  - **Underlying Concept/Algorithm:** Hashing (character counts and potentially first appearance index).
  - **Pythonic Solution Approach (Using `collections.Counter` or dictionary):**

    1.  Count character frequencies.
    2.  Iterate through the original string again. The first character encountered with a frequency of 1 is the answer.

    ```python
    from collections import Counter

    def first_non_repeating_char(s):
        counts = Counter(s) # Step 1: Count frequencies
        for char in s:      # Step 2: Iterate original string
            if counts[char] == 1:
                return char
        return None # Or "_" or raise error, as per requirements
    ```

  - **Complexity:** Time O(N) (one pass for counting, one pass for finding; Counter creation is O(N)), Space O(K) (for the Counter/dictionary, K is number of unique chars, max alphabet size, so often O(1) in practice for ASCII/limited charsets).

#### 5.3.5 Implement `atoi` (String to Integer)

- **Q: Implement a function that converts a string to an integer, handling optional leading whitespace, sign (+/-), and overflow/underflow according to `int` limits.**

  - **Underlying Concept/Algorithm:** Careful parsing, state management, and boundary checks.
  - **Pythonic Solution Approach:**
    (Python's `int()` is very robust, but an interview might ask for manual implementation)

    ```python
    def my_atoi(s):
        s = s.strip() # 1. Skip leading/trailing whitespace
        if not s:
            return 0

        sign = 1
        i = 0

        # 2. Check for sign
        if s[0] == '+':
            i += 1
        elif s[0] == '-':
            sign = -1
            i += 1

        num = 0
        # 3. Iterate through digits and build number
        while i < len(s) and s[i].isdigit():
            digit = int(s[i])

            # 4. Handle overflow/underflow (Python integers handle large numbers,
            # but for fixed-size int interviews, this is crucial)
            # For a 32-bit signed integer:
            INT_MAX = 2**31 - 1
            INT_MIN = -2**31

            if num > INT_MAX // 10 or (num == INT_MAX // 10 and digit > INT_MAX % 10):
                return INT_MAX if sign == 1 else INT_MIN

            num = num * 10 + digit
            i += 1

        return sign * num
    ```

  - **Complexity:** Time O(N) (where N is the number of relevant characters in the string), Space O(1) (if not considering the input string itself).
  - **Note for Python:** Python's native integers have arbitrary precision, so overflow checks like `INT_MAX` are typically for emulating fixed-size integers from other languages (C++/Java). In a pure Python context, `int(s)` handles most cases robustly. The question is usually to test logic.

#### 5.3.6 Longest Substring Without Repeating Characters

- **Q: Given a string, find the length of the longest substring without repeating characters.**

  - **Underlying Concept/Algorithm:** Sliding window with a hash set/map to keep track of characters in the current window.
  - **Pythonic Solution Approach (Sliding Window with Set):**
    Maintain a window `[left, right]`. Use a set `char_set` to store characters in the current window.
    Expand `right`: If `s[right]` is not in `char_set`, add it and update max length.
    If `s[right]` _is_ in `char_set`, shrink `left` by removing `s[left]` from `char_set` until `s[right]` is no longer a duplicate in the window.

    ```python
    def longest_substring_without_repeating(s):
        if not s:
            return 0

        char_set = set()
        left = 0
        max_length = 0

        for right in range(len(s)):
            while s[right] in char_set: # If char already in window
                char_set.remove(s[left]) # Shrink window from left
                left += 1
            char_set.add(s[right]) # Add current char to window
            max_length = max(max_length, right - left + 1)

        return max_length
    ```

  - **Alternative with Dictionary (to store last seen index):**
    This can optimize the `left` pointer jump.

    ```python
    def longest_substring_without_repeating_dict(s):
        if not s: return 0

        last_seen = {} # Stores char -> last seen index
        left = 0
        max_length = 0

        for right in range(len(s)):
            char = s[right]
            if char in last_seen and last_seen[char] >= left:
                # If char is repeated and its last occurrence is within current window
                left = last_seen[char] + 1 # Move left pointer past last occurrence

            last_seen[char] = right # Update last seen index of current char
            max_length = max(max_length, right - left + 1)

        return max_length
    ```

  - **Complexity:**
    - Set approach: Time O(N) (each character is added and removed from the set at most once, so `left` and `right` pointers each traverse N steps in total). Space O(K) (where K is size of character set, or min(N, K)).
    - Dictionary approach: Time O(N) (single pass). Space O(K).

#### 5.3.7 String Matching (Naive, brief mention of KMP/Rabin-Karp concepts)

- **Q: Find the first occurrence of a pattern string `p` within a text string `t`.**

  - **Underlying Concept/Algorithm (Naive):** Slide the pattern `p` over the text `t` one by one and check for a match at each position.
  - **Pythonic Solution Approach (Naive):**

    ```python
    def naive_string_match(text, pattern):
        n = len(text)
        m = len(pattern)
        if m == 0: return 0 # Empty pattern matches at start
        if m > n: return -1 # Pattern longer than text

        for i in range(n - m + 1): # Iterate through possible start positions in text
            match = True
            for j in range(m): # Compare pattern with substring of text
                if text[i+j] != pattern[j]:
                    match = False
                    break
            if match:
                return i # Pattern found at index i
        return -1 # Pattern not found
    ```

  - **Complexity (Naive):** Time O((N-M+1)*M) which is roughly O(N*M) in worst case. Space O(1).
  - **Python's `text.find(pattern)` or `pattern in text`:** These are highly optimized, often using algorithms like Boyer-Moore or a hybrid, achieving better average-case performance (closer to O(N+M) or O(N)). For interviews, it's good to know the naive approach and mention that more efficient algorithms exist.
  - **Brief Mention of Advanced Algorithms (Conceptual for TCS/Infosys):**
    - **KMP (Knuth-Morris-Pratt):** Uses a precomputed "LPS" (Longest Proper Prefix which is also Suffix) array for the pattern to avoid redundant comparisons by intelligently shifting the pattern. Time O(N+M).
    - **Rabin-Karp:** Uses hashing to compare substrings. Calculates hash of pattern, then rolls a hash window over the text. If hashes match, then verify character by character (to handle collisions). Average Time O(N+M), Worst Case O(N\*M) if many hash collisions.
    - _For TCS/Infosys, usually, implementing naive is sufficient, or discussing the idea of `text.find()` being optimized. A deep KMP/Rabin-Karp implementation might be out of scope unless specifically asked or for higher-tier roles._

---

## Chapter 6: Linked Lists in Python

### 6.1 Concept: Singly, Doubly, Circular

- **Concept:** A linked list is a linear data structure where elements (nodes) are not stored at contiguous memory locations. Instead, each element is a separate object that contains data and a reference (or link/pointer) to the next element in the sequence.
  - **Node:** The basic building block, typically containing:
    - `data`: The value stored in the node.
    - `next`: A pointer/reference to the next node in the list (or `None`/`null` if it's the last node).
- **Types of Linked Lists:**
  - **Singly Linked List (SLL):**
    - Each node has data and a pointer to the _next_ node only.
    - Traversal is unidirectional (forward).
  - **Doubly Linked List (DLL):**
    - Each node has data, a pointer to the _next_ node, and a pointer to the _previous_ node.
    - Allows bidirectional traversal (forward and backward).
    - Operations like deletion can be more efficient if a pointer to the node to be deleted is given (no need to find the previous node).
  - **Circular Linked List (CLL):**
    - The `next` pointer of the last node points back to the first node (head) instead of `None`.
    - Can be singly or doubly circular.
    - Useful for applications where the list needs to be treated as a cycle (e.g., round-robin scheduling).

### 6.2 Python Implementation (Node Class, List Class)

- **Node Class (Singly Linked List):**

  ```python
  class Node:
      def __init__(self, data):
          self.data = data  # Store the data
          self.next = None  # Initialize next as null
  ```

- **Singly Linked List Class (Example with basic operations):**

  ```python
  class SinglyLinkedList:
      def __init__(self):
          self.head = None # Initialize head as null

      def append(self, data): # Add to the end
          new_node = Node(data)
          if not self.head:
              self.head = new_node
              return
          last_node = self.head
          while last_node.next:
              last_node = last_node.next
          last_node.next = new_node

      def prepend(self, data): # Add to the beginning
          new_node = Node(data)
          new_node.next = self.head
          self.head = new_node

      def print_list(self):
          current_node = self.head
          elements = []
          while current_node:
              elements.append(str(current_node.data))
              current_node = current_node.next
          print(" -> ".join(elements))
  ```

- **Node Class (Doubly Linked List):**
  ```python
  class DLLNode:
      def __init__(self, data):
          self.data = data
          self.next = None
          self.prev = None # Additional pointer for previous node
  ```
  _(A full `DoublyLinkedList` class would have similar methods but with more complex pointer manipulation for `prev` pointers.)_

### 6.3 Operations & Complexities

(For a Singly Linked List with `n` nodes, assuming `head` pointer is available)

- **Accessing k-th element:** O(k) or O(n) in worst case (traverse from head).
- **Searching for an element:** O(n) (linear scan).
- **Insertion:**
  - At the beginning (prepend): O(1).
  - At the end (append):
    - O(n) if you only have `head` (need to traverse to find the last node).
    - O(1) if you maintain a `tail` pointer.
  - At a specific position (after a given node or at index k): O(k) or O(n) to reach the position. The linking itself is O(1).
- **Deletion:**
  - At the beginning: O(1).
  - At the end:
    - O(n) (need to traverse to find the second-to-last node).
    - O(1) if doubly linked and tail pointer maintained (or more complex for SLL with tail).
  - At a specific position (given node or index k): O(k) or O(n) to reach the node/previous node. The unlinking itself is O(1).
    - _Special case: Deleting a node given only a pointer to that node (and not the head) in an SLL is tricky if it's not the tail. The common trick is to copy data from the next node and delete the next node._

**Advantages of Linked Lists over Arrays/Python Lists:**

- **Dynamic Size:** Can grow or shrink easily without overallocation or reallocation overhead of arrays.
- **Ease of Insertion/Deletion (at certain positions):** Inserting or deleting elements in the middle is O(1) _once you have the pointer to the previous node_, unlike arrays where elements need to be shifted (O(n)).

**Disadvantages:**

- **No Random Access:** Elements cannot be accessed directly by index in O(1) time. Requires traversal.
- **Extra Memory:** Pointers require extra memory space per node.
- **Cache Performance:** Nodes might not be in contiguous memory, leading to potentially poorer cache locality compared to arrays.

### 6.4 Common Linked List Interview Questions (TCS/Infosys Focus)

#### 6.4.1 Reverse a Linked List (Iterative & Recursive)

- **Q: Given the head of a singly linked list, reverse it.**

  - **Underlying Concept/Algorithm:** Pointer manipulation.
  - **Iterative Approach:**
    Use three pointers: `prev_node`, `current_node`, `next_node`.
    Initialize `prev_node = None`, `current_node = head`.
    In a loop, store `current_node.next` in `next_node`, then point `current_node.next` to `prev_node`. Move `prev_node` to `current_node` and `current_node` to `next_node`.
    Finally, the new head is `prev_node`.

    ```python
    def reverse_linked_list_iterative(head):
        prev_node = None
        current_node = head
        while current_node:
            next_node_temp = current_node.next # Store next
            current_node.next = prev_node    # Reverse current node's pointer

            # Move pointers one position ahead
            prev_node = current_node
            current_node = next_node_temp
        return prev_node # New head
    ```

    - **Complexity:** Time O(N), Space O(1).

  - **Recursive Approach:**
    Base case: If `head` is `None` or `head.next` is `None` (list is empty or has one node), return `head`.
    Recursive step: Recursively reverse the rest of the list (`head.next`). Let the new head of the reversed rest be `reversed_tail_head`.
    Then, make `head.next.next = head` (point the original second node's `next` to the original first node).
    Set `head.next = None` (original first node becomes the new tail).
    Return `reversed_tail_head`.

    ```python
    def reverse_linked_list_recursive(head):
        # Base case
        if not head or not head.next:
            return head

        # Recursively reverse the rest of the list
        reversed_tail_head = reverse_linked_list_recursive(head.next)

        # Reverse the link for the current head
        head.next.next = head
        head.next = None # Current head becomes the new tail

        return reversed_tail_head # The head of the reversed list
    ```

    - **Complexity:** Time O(N) (each node visited once), Space O(N) (due to recursion call stack).

#### 6.4.2 Detect Cycle (Floyd's Cycle-Finding Algorithm)

- **Q: Given the head of a linked list, determine if it has a cycle in it.**

  - **Underlying Concept/Algorithm:** Floyd's Cycle-Finding Algorithm (also known as Hare and Tortoise algorithm).
  - **Pythonic Solution Approach:**
    Use two pointers, `slow` and `fast`.
    `slow` moves one step at a time.
    `fast` moves two steps at a time.
    If there's a cycle, `fast` will eventually meet or overtake `slow` from behind. If `fast` reaches `None` or `fast.next` is `None`, there's no cycle.

    ```python
    def has_cycle(head):
        if not head or not head.next:
            return False

        slow = head
        fast = head.next # Or fast = head, then in loop fast = fast.next.next

        while fast and fast.next:
            if slow == fast:
                return True
            slow = slow.next
            fast = fast.next.next # fast moves two steps
        # If fast or fast.next is None, loop terminates, no cycle
        return False

    # Alternative initialization for fast pointer
    def has_cycle_v2(head):
        slow = head
        fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            if slow == fast: # Meeting point
                return True
        return False
    ```

  - **Complexity:** Time O(N) (In the worst case, slow pointer traverses the list once. Fast pointer might traverse it almost twice). Space O(1).
  - **Follow-up Q: Find the starting node of the cycle.**
    - Once `slow` and `fast` meet, reset `slow` to `head`. Keep `fast` at the meeting point.
    - Move both `slow` and `fast` one step at a time. The point where they meet again is the start of the cycle.

#### 6.4.3 Find Middle Element

- **Q: Given a non-empty singly linked list, find the middle node of the linked list. If there are two middle nodes (even length), return the second middle node.**

  - **Underlying Concept/Algorithm:** Two-pointer technique (slow and fast).
  - **Pythonic Solution Approach:**
    `slow` pointer moves one step.
    `fast` pointer moves two steps.
    When `fast` reaches the end of the list (or `fast.next` is `None`), `slow` will be at the middle.

    ```python
    def find_middle_node(head):
        if not head:
            return None

        slow = head
        fast = head

        # Move fast by two and slow by one
        # When fast reaches the end, slow will be at the middle
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        return slow # slow is at the middle (or second middle for even length)
    ```

  - **Complexity:** Time O(N) (single pass), Space O(1).

#### 6.4.4 Merge Two Sorted Linked Lists

- **Q: Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.**

  - **Underlying Concept/Algorithm:** Similar to merging sorted arrays. Use a dummy head for the result list and iteratively pick the smaller node from the two lists.
  - **Pythonic Solution Approach:**

    ```python
    def merge_two_sorted_lists(l1_head, l2_head):
        dummy_head = Node(0) # Dummy node to simplify edge cases
        current_merged = dummy_head

        p1 = l1_head
        p2 = l2_head

        while p1 and p2:
            if p1.data < p2.data:
                current_merged.next = p1
                p1 = p1.next
            else:
                current_merged.next = p2
                p2 = p2.next
            current_merged = current_merged.next

        # Append remaining nodes from l1 or l2
        if p1:
            current_merged.next = p1
        elif p2:
            current_merged.next = p2

        return dummy_head.next # The actual head of the merged list
    ```

  - **Complexity:** Time O(N+M) (where N and M are lengths of the lists), Space O(1) (if modifying existing nodes' `next` pointers, i.e., true splicing. If creating new nodes for merged list, then O(N+M) space). The dummy node is O(1).

#### 6.4.5 Delete Nth Node from End

- **Q: Given the `head` of a linked list and an integer `n`, remove the `n`-th node from the end of the list and return its head.**

  - **Underlying Concept/Algorithm:** Two-pointer technique.
  - **Pythonic Solution Approach:**

    1.  Create a dummy node `dummy` that points to `head`. This simplifies deleting the head if `n` equals list length.
    2.  Initialize two pointers, `first` and `second`, both at `dummy`.
    3.  Advance `first` pointer `n+1` steps ahead.
    4.  Now, move both `first` and `second` one step at a time until `first` reaches `None`.
    5.  At this point, `second` will be pointing to the node _before_ the Nth node from the end.
    6.  Update `second.next = second.next.next` to remove the Nth node.
    7.  Return `dummy.next`.

    ```python
    def remove_nth_from_end(head, n):
        dummy = Node(0) # Dummy node pointing to head
        dummy.next = head

        first = dummy
        second = dummy

        # Advance first pointer so there is a gap of n nodes between first and second
        for _ in range(n + 1):
            if not first: # Edge case: n is larger than list size (or equal if n+1)
                          # This check depends on how problem defines invalid n.
                          # If n is guaranteed valid, this might not be needed.
                return head # Or handle error for invalid n
            first = first.next

        # Move first to the end, maintaining the gap
        while first:
            first = first.next
            second = second.next

        # second now points to the node before the one to be deleted
        if second and second.next: # Check if second.next exists (it should if n is valid)
            second.next = second.next.next

        return dummy.next
    ```

  - **Complexity:** Time O(L) (where L is the length of the list, as it's a single pass with two pointers), Space O(1).

#### 6.4.6 Check if Linked List is Palindrome

- **Q: Given a singly linked list, determine if it is a palindrome.**

  - **Underlying Concept/Algorithm:**
    1.  Find the middle of the linked list.
    2.  Reverse the second half of the linked list.
    3.  Compare the first half with the reversed second half.
    4.  (Optional) Restore the list by reversing the second half again.
  - **Pythonic Solution Approach:**

    ```python
    def is_palindrome_linked_list(head):
        if not head or not head.next:
            return True

        # 1. Find the middle of the list (slow pointer will be at middle or first of two middles)
        slow = head
        fast = head
        while fast.next and fast.next.next: # fast ends on last or second last
            slow = slow.next
            fast = fast.next.next

        # 2. Reverse the second half (starting from slow.next)
        second_half_head = reverse_linked_list_iterative(slow.next) # Use helper from 6.4.1
        slow.next = None # Split the list into two halves

        # 3. Compare the first half with the reversed second half
        p1 = head
        p2 = second_half_head
        is_pal = True
        while p1 and p2:
            if p1.data != p2.data:
                is_pal = False
                break
            p1 = p1.next
            p2 = p2.next

        # 4. (Optional) Restore the list: Reverse the second half again and connect
        # slow.next = reverse_linked_list_iterative(second_half_head) # Not strictly needed for check

        return is_pal
    ```

  - **Complexity:** Time O(N) (finding middle, reversing, comparing are all O(N)), Space O(1) (if reversal is iterative).

#### 6.4.7 Intersection of Two Linked Lists

- **Q: Given the heads of two singly linked-lists `headA` and `headB`, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return `null`. The lists must retain their original structure after the function returns.**

  - **Underlying Concept/Algorithm:**
    1.  **Length Difference:** Calculate lengths of both lists. Move the pointer of the longer list ahead by the difference in lengths. Then, traverse both lists simultaneously. If they meet, that's the intersection.
    2.  **Two Pointer (A->B, B->A trick):**
        Have two pointers, `pA` starting at `headA` and `pB` starting at `headB`.
        Traverse. If `pA` reaches the end of list A, redirect it to `headB`.
        If `pB` reaches the end of list B, redirect it to `headA`.
        If they intersect, `pA` and `pB` will meet at the intersection node. If they don't intersect, they will both become `None` at the same time after traversing `len(A) + len(B)` nodes.
  - **Pythonic Solution Approach (Two Pointer A->B, B->A):**

    ```python
    def get_intersection_node(headA, headB):
        if not headA or not headB:
            return None

        pA = headA
        pB = headB

        # If pA & pB have different len, this will stop the loop after second iteration
        while pA != pB:
            # For the end of first iteration, we just reset the pointer to the head of the other linked list
            pA = headB if pA is None else pA.next
            pB = headA if pB is None else pB.next

        return pA # Either the intersection node or None if no intersection
    ```

  - **Complexity:** Time O(N+M) (where N and M are lengths of lists), Space O(1).

---

## Chapter 7: Stacks in Python

### 7.1 Concept (LIFO)

- **Concept:** A stack is a linear data structure that follows the **LIFO (Last-In, First-Out)** principle. This means the element added last is the one that will be removed first.
- **Analogy:** A stack of plates. You add a plate to the top, and you remove a plate from the top.
- **Core Operations:**
  - `push(item)`: Adds an item to the top of the stack.
  - `pop()`: Removes and returns the item from the top of the stack. Raises an error or returns a special value if the stack is empty.
  - `peek()` or `top()`: Returns the item at the top of the stack without removing it. Raises an error or returns a special value if the stack is empty.
  - `isEmpty()`: Checks if the stack is empty.
  - `size()`: Returns the number of items in the stack.

### 7.2 Python Implementation (Using `list`, `collections.deque`)

- **Using Python `list`:**

  - Python lists can be used as stacks.
  - `append()` acts as `push()`.
  - `pop()` (without an index) acts as `pop()`.
  - `my_list[-1]` acts as `peek()`.
  - `len(my_list) == 0` for `isEmpty()`.
  - **Efficiency:** `append()` and `pop()` (from end) are amortized O(1).

  ```python
  # Stack using list
  stack_list = []
  stack_list.append(10) # push
  stack_list.append(20)
  print(stack_list[-1]) # peek -> 20
  item = stack_list.pop() # pop -> 20
  print(item)
  ```

- **Using `collections.deque` (Double-Ended Queue):**

  - `deque` is generally preferred for implementing stacks (and queues) in Python because its `append()` and `pop()` operations (from either end) are guaranteed O(1) in the worst case, unlike lists' amortized O(1) for `append()` and `pop()` from the end.
  - `append()` for `push()`.
  - `pop()` for `pop()`.
  - `my_deque[-1]` for `peek()`.

  ```python
  from collections import deque

  # Stack using deque
  stack_deque = deque()
  stack_deque.append(10) # push
  stack_deque.append(20)
  print(stack_deque[-1]) # peek -> 20
  item = stack_deque.pop() # pop -> 20
  print(item)
  ```

### 7.3 Operations & Complexities

(Assuming `collections.deque` or `list` used as described above)

- `push` (`append`): O(1)
- `pop` (`pop` from end): O(1)
- `peek` (`[-1]` access): O(1)
- `isEmpty`: O(1)
- `size` (`len()`): O(1)

### 7.4 Common Stack Interview Questions (TCS/Infosys Focus)

#### 7.4.1 Implement Stack using Queues

- **Q: Implement a LIFO stack using only two FIFO queues.**

  - **Underlying Concept/Algorithm:**
    - **Method 1 (Push costly):**
      - `push(x)`: Enqueue `x` to `q2`. Dequeue all elements from `q1` and enqueue them to `q2`. Swap names of `q1` and `q2`. (So `q1` always holds stack elements in order, `q2` is temp).
      - `pop()`: Dequeue from `q1`.
    - **Method 2 (Pop costly):**
      - `push(x)`: Enqueue `x` to `q1`.
      - `pop()`: Dequeue all elements from `q1` except the last one, and enqueue them to `q2`. The last dequeued element from `q1` is the result. Swap names of `q1` and `q2`.
  - **Pythonic Solution Approach (Method 2 - Pop costly, using `collections.deque` as queues):**

    ```python
    from collections import deque

    class StackUsingQueues:
        def __init__(self):
            self.q1 = deque()
            self.q2 = deque() # Helper queue

        def push(self, x):
            self.q1.append(x)

        def pop(self):
            if not self.q1:
                raise IndexError("pop from empty stack")

            # Move all but the last element from q1 to q2
            while len(self.q1) > 1:
                self.q2.append(self.q1.popleft())

            # The last element in q1 is the top of the stack
            top_element = self.q1.popleft()

            # Swap q1 and q2 so q1 is ready for next operations
            self.q1, self.q2 = self.q2, self.q1
            return top_element

        def top(self): # Similar to pop, but re-enqueue the top element
            if not self.q1:
                raise IndexError("top from empty stack")

            while len(self.q1) > 1:
                self.q2.append(self.q1.popleft())

            top_element = self.q1[0] # Peek at the last element
            self.q2.append(self.q1.popleft()) # Move it to q2

            self.q1, self.q2 = self.q2, self.q1
            return top_element

        def empty(self):
            return not self.q1
    ```

  - **Complexity:**
    - Push costly: `push()` O(N), `pop()` O(1).
    - Pop costly: `push()` O(1), `pop()` O(N), `top()` O(N).

#### 7.4.2 Balancing Parentheses / Valid Parentheses

- **Q: Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid. An input string is valid if: Open brackets must be closed by the same type of brackets. Open brackets must be closed in the correct order.**

  - **Underlying Concept/Algorithm:** Use a stack. Iterate through the string:
    - If an opening bracket is encountered, push it onto the stack.
    - If a closing bracket is encountered, check if the stack is empty or if the top of the stack is the corresponding opening bracket.
      - If match: pop the stack.
      - If mismatch or stack empty: invalid.
    - After iterating, if the stack is empty, the string is valid. Otherwise, invalid.
  - **Pythonic Solution Approach:**

    ```python
    def is_valid_parentheses(s):
        stack = []
        mapping = {")": "(", "}": "{", "]": "["}

        for char in s:
            if char in mapping.values(): # It's an opening bracket
                stack.append(char)
            elif char in mapping.keys(): # It's a closing bracket
                if not stack or mapping[char] != stack.pop():
                    return False
            # else: ignore other characters if any (problem usually specifies only brackets)

        return not stack # Stack should be empty if all matched
    ```

  - **Complexity:** Time O(N) (single pass through string), Space O(N) (in worst case, all opening brackets e.g., "(((((").

#### 7.4.3 Next Greater Element

- **Q: Given a list, find the next greater element (NGE) for every element. The NGE for an element `x` is the first greater element on the right side of `x` in the list. If no such element exists, consider NGE as -1.**

  - **Underlying Concept/Algorithm:** Use a stack to keep track of indices of elements for which NGE is yet to be found. Iterate through the list.
    - If stack is empty or current element <= element at stack top's index, push current element's index.
    - If current element > element at stack top's index, it means current element is NGE for element at stack top. Pop stack, set NGE, and repeat until stack is empty or condition fails. Then push current element's index.
  - **Pythonic Solution Approach:**

    ```python
    def next_greater_element(arr):
        n = len(arr)
        if n == 0:
            return []

        nge_result = [-1] * n # Initialize NGE for all elements as -1
        stack = [] # Stack will store indices

        for i in range(n):
            # While stack is not empty AND current element is greater than
            # element at index stored at top of stack
            while stack and arr[i] > arr[stack[-1]]:
                prev_index = stack.pop()
                nge_result[prev_index] = arr[i]
            stack.append(i) # Push current index

        # Elements remaining in stack have no NGE (already -1)
        return nge_result

    # Common variation: Iterate from right to left
    def next_greater_element_right_to_left(arr):
        n = len(arr)
        if n == 0: return []

        nge_result = [-1] * n
        stack = [] # Stack will store elements themselves

        for i in range(n - 1, -1, -1): # Iterate from right to left
            # Pop elements from stack smaller than or equal to current element
            while stack and stack[-1] <= arr[i]:
                stack.pop()

            # If stack is not empty, top is NGE for current element
            if stack:
                nge_result[i] = stack[-1]
            # Else, no NGE found (already -1)

            stack.append(arr[i]) # Push current element onto stack
        return nge_result
    ```

  - **Complexity:** Time O(N) (each element is pushed and popped at most once). Space O(N) (for the stack in worst case, e.g., decreasingly sorted array).

#### 7.4.4 Min Stack (Get minimum element in O(1))

- **Q: Design a stack that supports `push`, `pop`, `top`, and `retrieving the minimum element` in constant time.**

  - **Underlying Concept/Algorithm:** Use an auxiliary stack (min_stack) to keep track of the minimum elements.
    - `push(x)`: Push `x` onto the main stack. If `min_stack` is empty or `x <= min_stack.top()`, push `x` onto `min_stack`.
    - `pop()`: Pop from main stack. If popped element == `min_stack.top()`, pop from `min_stack` as well.
    - `top()`: Return top of main stack.
    - `getMin()`: Return top of `min_stack`.
  - **Alternative:** Store pairs `(value, current_min_at_this_point)` on a single stack.
  - **Pythonic Solution Approach (Two Stacks):**

    ```python
    class MinStack:
        def __init__(self):
            self.main_stack = []
            self.min_stack = [] # Stores minimums

        def push(self, val: int) -> None:
            self.main_stack.append(val)
            if not self.min_stack or val <= self.min_stack[-1]:
                self.min_stack.append(val)

        def pop(self) -> None:
            if not self.main_stack:
                raise IndexError("pop from empty stack")
            popped_val = self.main_stack.pop()
            if popped_val == self.min_stack[-1]:
                self.min_stack.pop()

        def top(self) -> int:
            if not self.main_stack:
                raise IndexError("top from empty stack")
            return self.main_stack[-1]

        def getMin(self) -> int:
            if not self.min_stack:
                # This case depends on problem spec for empty stack
                raise ValueError("getMin from empty stack")
            return self.min_stack[-1]
    ```

  - **Complexity:** All operations (`push`, `pop`, `top`, `getMin`) are O(1). Space O(N) in the worst case for `min_stack` (e.g., pushing decreasing numbers).

#### 7.4.5 Infix to Postfix/Prefix Conversion (Conceptual)

- **Q: Convert an infix arithmetic expression to postfix (Reverse Polish Notation) or prefix (Polish Notation).** (TCS/Infosys might ask for the algorithm or a dry run for a simple expression rather than full implementation.)

  - **Underlying Concept/Algorithm (Infix to Postfix):**
    1.  Initialize an empty stack (for operators) and an empty list/string for the postfix result.
    2.  Define operator precedence (e.g., `*`/`/` > `+`/`-`).
    3.  Scan the infix expression from left to right:
        - **Operand:** Append to postfix result.
        - **'(':** Push onto the stack.
        - **')':** Pop operators from stack and append to result until an '(' is encountered. Pop and discard the '('.
        - **Operator:**
          - While stack is not empty, top is not '(', AND precedence of current operator <= precedence of stack top:
            Pop from stack and append to result.
          - Push current operator onto stack.
    4.  After scanning, pop any remaining operators from stack and append to result.
  - **Pythonic Solution Approach (Conceptual - showing logic):**

    ```python
    def infix_to_postfix(expression):
        precedence = {'+': 1, '-': 1, '*': 2, '/': 2, '^': 3} # Example precedence
        output = []
        stack = [] # Operator stack

        for token in expression: # Assuming expression is tokenized (e.g., list of strings)
            if token.isalnum(): # Operand
                output.append(token)
            elif token == '(':
                stack.append(token)
            elif token == ')':
                while stack and stack[-1] != '(':
                    output.append(stack.pop())
                if stack and stack[-1] == '(': # Pop the '('
                    stack.pop()
                # else: Mismatched parentheses error (handle as needed)
            else: # Operator
                while (stack and stack[-1] != '(' and
                       precedence.get(stack[-1], 0) >= precedence.get(token, 0)):
                    output.append(stack.pop())
                stack.append(token)

        while stack: # Pop remaining operators
            output.append(stack.pop())

        return "".join(output) # Or " ".join(output) if space separated
    ```

  - **Complexity:** Time O(N) (each token processed once), Space O(N) (for stack in worst case).
  - **Infix to Prefix:** Reverse infix, swap `(` and `)`, convert to postfix, then reverse the result. (Requires care with operator associativity).

---

## Chapter 8: Queues in Python

### 8.1 Concept (FIFO)

- **Concept:** A queue is a linear data structure that follows the **FIFO (First-In, First-Out)** principle. This means the element added first is the one that will be removed first.
- **Analogy:** A queue of people waiting for a service. The first person to join the queue is the first person to be served.
- **Core Operations:**
  - `enqueue(item)` (or `add`, `offer`): Adds an item to the rear (end) of the queue.
  - `dequeue()` (or `remove`, `poll`): Removes and returns the item from the front (head) of the queue. Raises an error or returns a special value if the queue is empty.
  - `front()` (or `peek`, `element`): Returns the item at the front of the queue without removing it. Raises an error or returns a special value if the queue is empty.
  - `isEmpty()`: Checks if the queue is empty.
  - `size()`: Returns the number of items in the queue.

### 8.2 Python Implementation (Using `collections.deque`, `queue.Queue`)

- **Using `collections.deque` (Double-Ended Queue):**

  - `deque` is highly efficient for implementing queues because it supports O(1) appends and pops from both ends.
  - `append()` for `enqueue()` (adds to the right end).
  - `popleft()` for `dequeue()` (removes from the left end).
  - `my_deque[0]` for `front()` (access first element).
  - `len(my_deque) == 0` for `isEmpty()`.

  ```python
  from collections import deque

  # Queue using deque
  queue_deque = deque()
  queue_deque.append(10) # enqueue
  queue_deque.append(20) # enqueue
  print(queue_deque[0])  # front -> 10
  item = queue_deque.popleft() # dequeue -> 10
  print(item)
  print(list(queue_deque)) # [20]
  ```

- **Using `queue.Queue` (Thread-Safe Queue):**

  - The `queue` module provides a synchronized queue class, `Queue`, which is useful for multi-threaded programming (ensures operations are thread-safe). For single-threaded applications or typical coding interview problems, `collections.deque` is often preferred for its simplicity and directness.
  - `put(item)` for `enqueue()`.
  - `get()` for `dequeue()`.
  - `qsize()` for `size()`.
  - `empty()` for `isEmpty()`.
  - `queue.Queue()` can also be configured as a LIFO queue (Stack) or a Priority Queue.

  ```python
  import queue

  # Queue using queue.Queue
  q_module = queue.Queue()
  q_module.put(10) # enqueue
  q_module.put(20)
  # To peek front, you might need to get and then put back if no direct peek method is used,
  # or handle carefully in multithreaded context. For basic use:
  # item = q_module.get()
  # print(item) -> 10
  # q_module.put(item) # if you wanted to peek and restore

  print(q_module.qsize()) # size -> 2
  item = q_module.get()   # dequeue -> 10
  print(item)
  ```

  _For typical DSA interview problems not involving concurrency, `collections.deque` is more common and direct._

### 8.3 Operations & Complexities

(Assuming `collections.deque` used as described above)

- `enqueue` (`append` to right): O(1)
- `dequeue` (`popleft` from left): O(1)
- `front` (`[0]` access): O(1)
- `isEmpty`: O(1)
- `size` (`len()`): O(1)

### 8.4 Types: Circular Queue, Priority Queue (conceptual), Deque

- **Circular Queue (Circular Buffer):**

  - **Concept:** A fixed-size queue implemented using an array where the rear pointer wraps around to the front when the end of the array is reached, effectively making the array circular.
  - **Purpose:** Efficiently uses a fixed block of memory. Avoids shifting elements like a simple array-based queue would when dequeuing from the front.
  - **Implementation:** Requires managing `front` and `rear` pointers and handling full/empty conditions using modulo arithmetic or a size counter.
  - _TCS/Infosys might ask about the concept or a simple implementation if array-based queues are discussed._

- **Priority Queue:**

  - **Concept:** An abstract data type similar to a regular queue, but each element has an associated "priority." Elements with higher priority are served before elements with lower priority. If two elements have the same priority, they are usually served according to their order in the queue (FIFO).
  - **Implementation:** Commonly implemented using a **Heap** (Chapter 11). Python's `heapq` module can be used to build priority queues. The `queue.PriorityQueue` class also provides a thread-safe implementation.
  - _Crucial for many algorithms (e.g., Dijkstra's, Prim's, Huffman coding). Conceptual understanding is important._

- **Deque (Double-Ended Queue):**
  - **Concept:** A generalization of a queue where elements can be added or removed from either the front or the rear. Pronounced "deck".
  - **Python's `collections.deque`** is a direct implementation of this. It can be used as a stack (append/pop from one end) or a queue (append to one end, pop from the other).

### 8.5 Common Queue Interview Questions (TCS/Infosys Focus)

#### 8.5.1 Implement Queue using Stacks

- **Q: Implement a FIFO queue using only two LIFO stacks.**

  - **Underlying Concept/Algorithm:**
    - **Method 1 (Enqueue costly):**
      - `enqueue(x)`: While `stack1` is not empty, pop from `stack1` and push to `stack2`. Push `x` to `stack1`. While `stack2` is not empty, pop from `stack2` and push to `stack1`. (Effectively, `stack1` always holds queue elements in FIFO order).
      - `dequeue()`: Pop from `stack1`.
    - **Method 2 (Dequeue costly - Amortized O(1) for dequeue):**
      - `enqueue(x)`: Push `x` onto `stack1` (input stack).
      - `dequeue()`: If `stack2` (output stack) is empty, pop all elements from `stack1` and push them onto `stack2`. This reverses their order, so `stack2` now holds elements in FIFO order. Pop from `stack2`.
      - `peek()`: Similar to `dequeue()`, ensure `stack2` has elements, then peek from `stack2`.
  - **Pythonic Solution Approach (Method 2 - Amortized O(1) dequeue):**

    ```python
    class QueueUsingStacks:
        def __init__(self):
            self.input_stack = []  # For enqueue operations
            self.output_stack = [] # For dequeue operations

        def enqueue(self, x: int) -> None:
            self.input_stack.append(x)

        def _transfer_if_needed(self) -> None:
            # If output_stack is empty, transfer elements from input_stack
            if not self.output_stack:
                while self.input_stack:
                    self.output_stack.append(self.input_stack.pop())

        def dequeue(self) -> int:
            self._transfer_if_needed()
            if not self.output_stack:
                raise IndexError("dequeue from empty queue")
            return self.output_stack.pop()

        def peek(self) -> int:
            self._transfer_if_needed()
            if not self.output_stack:
                raise IndexError("peek from empty queue")
            return self.output_stack[-1] # Top of output_stack is front of queue

        def empty(self) -> bool:
            return not self.input_stack and not self.output_stack
    ```

  - **Complexity (Method 2):**
    - `enqueue`: O(1).
    - `dequeue`: Amortized O(1). A single `dequeue` can be O(N) if transfer happens, but each element is moved at most twice (once to `input_stack`, once to `output_stack`) over N `dequeue` operations.
    - `peek`: Amortized O(1).
    - `empty`: O(1).

#### 8.5.2 Generate Binary Numbers from 1 to N using a Queue

- **Q: Given an integer `N`, generate and print all binary numbers from 1 to `N` using a queue.**

  - **Underlying Concept/Algorithm:**
    1.  Start with "1" in the queue.
    2.  Dequeue an element `s`. Print `s`.
    3.  If the number of printed elements is less than `N`:
        - Enqueue `s + "0"`.
        - Enqueue `s + "1"`.
    4.  Repeat until `N` numbers are printed.
  - **Pythonic Solution Approach:**

    ```python
    from collections import deque

    def generate_binary_numbers(n):
        if n <= 0:
            return []

        q = deque()
        q.append("1") # Start with the binary representation of 1

        result = []
        count = 0

        while count < n:
            current_binary = q.popleft()
            result.append(current_binary)
            count += 1

            if count < n: # Only enqueue if we need more numbers
                q.append(current_binary + "0")
            if count < n and (current_binary + "1") not in q: # Avoid excessive growth if N is small
                                                              # Check if still need more before appending next
                # Need to be careful with this condition, might be better to check count before each append
                # A simpler way is to just append and let the outer loop control
                pass

        # Simpler loop structure:
        q_alt = deque()
        q_alt.append("1")
        result_alt = []
        for _ in range(n): # Loop exactly N times
            if not q_alt: break # Should not happen if N > 0
            current_binary = q_alt.popleft()
            result_alt.append(current_binary)

            q_alt.append(current_binary + "0")
            q_alt.append(current_binary + "1")
        return result_alt

    # Example usage:
    # print(generate_binary_numbers(5)) # Output: ['1', '10', '11', '100', '101']
    ```

  - **Complexity:** Time O(N) (each number is generated, enqueued, and dequeued once; string concatenations are short). Space O(N) (queue can hold up to N elements in some scenarios, e.g., when N is a power of 2 minus 1).

#### 8.5.3 Level Order Traversal of a Tree (uses Queue)

- **Q: Perform a level order traversal (Breadth-First Traversal) of a binary tree.**
  - **Underlying Concept/Algorithm:** This is a very common application of queues.
    1.  Start with the root node in the queue.
    2.  While the queue is not empty:
        - Dequeue a node. Process/print its data.
        - Enqueue its left child (if it exists).
        - Enqueue its right child (if it exists).
  - **Pythonic Solution Approach (will be detailed in Chapter 10: Trees):**
    ```python
    # (Assuming a TreeNode class exists with data, left, right attributes)
    # from collections import deque
    #
    # def level_order_traversal(root):
    #     if not root:
    #         return []
    #
    #     q = deque([root])
    #     result = []
    #
    #     while q:
    #         node = q.popleft()
    #         result.append(node.data)
    #
    #         if node.left:
    #             q.append(node.left)
    #         if node.right:
    #             q.append(node.right)
    #     return result
    ```
  - **Complexity:** Time O(N) (where N is the number of nodes, each visited once). Space O(W) (where W is the maximum width of the tree, for the queue). In worst case (complete binary tree), W can be N/2, so O(N).

---

## Chapter 9: Hashing (Dictionaries & Sets in Python)

### 9.1 Concept: Hash Functions, Collision Resolution

- **Concept:** Hashing is a technique used to map keys of arbitrary size to values (indices) in a fixed-size table (hash table). This mapping is done by a **hash function**.
- **Hash Function:**
  - A function that takes a key as input and computes an integer hash code.
  - **Properties of a good hash function:**
    - **Deterministic:** Same key always produces the same hash code.
    - **Efficiently computable:** Should be fast.
    - **Uniform distribution:** Should distribute keys as evenly as possible across the hash table to minimize collisions.
- **Hash Table (or Hash Map):**
  - A data structure that implements an associative array (key-value pairs).
  - Uses a hash function to compute an index (or "bucket") into an array from which the desired value can be found.
- **Collision:**
  - Occurs when two different keys produce the same hash code (i.e., map to the same bucket/index in the hash table).
- **Collision Resolution Techniques:** Strategies to handle collisions.
  - **1. Separate Chaining (Open Hashing):**
    - Each bucket in the hash table is a pointer to a linked list (or other data structure) of key-value pairs that hash to that bucket.
    - When a collision occurs, the new key-value pair is added to the linked list at that bucket.
    - Search/Insert/Delete: Hash the key to find the bucket, then traverse the linked list in that bucket.
  - **2. Open Addressing (Closed Hashing):**
    - All key-value pairs are stored directly in the hash table itself.
    - When a collision occurs, a "probing" sequence is used to find an alternative empty slot.
    - **Types of Probing:**
      - **Linear Probing:** If `hash(key) = h` is occupied, try `h+1`, `h+2`, ... (with wrap-around). Can lead to "primary clustering."
      - **Quadratic Probing:** Try `h+1^2`, `h+2^2`, ... Can lead to "secondary clustering."
      - **Double Hashing:** Use a second hash function to determine the step size for probing. `h + i * hash2(key)`. Often gives good distribution.
  - **Load Factor (α):** `α = (Number of keys) / (Number of slots in table)`.
    - Indicates how full the hash table is.
    - High load factor increases collision probability and degrades performance.
    - Hash tables are often resized (rehashed into a larger table) when the load factor exceeds a certain threshold (e.g., 0.7 or 0.75).

### 9.2 Python's `dict` and `set` Internals (High-Level)

- **Python `dict` (Dictionary):**
  - Implemented as a hash table.
  - Keys must be **hashable** (i.e., have a `__hash__()` method and an `__eq__()` method, and hash value should not change over their lifetime). Immutable types like strings, numbers, tuples (containing only hashable types) are hashable. Mutable types like lists are not.
  - Uses open addressing with a custom probing sequence (pseudo-random probing since Python 3.3) to resolve collisions.
  - Resizes dynamically when the load factor gets too high (around 2/3 full for insertion, smaller for deletion).
  - Since Python 3.7 (CPython 3.6), dictionaries maintain insertion order. This is an implementation detail but now part of the language spec.
- **Python `set`:**
  - Also implemented as a hash table, but stores only keys (no associated values, or values are effectively ignored).
  - Elements must be hashable.
  - Similar collision resolution and resizing strategies as `dict`.

### 9.3 Operations & Complexities

(For Python `dict` and `set`)

- **Average Case Time Complexity (due to good hash function & collision resolution):**
  - Insertion (`d[key] = val`, `s.add(item)`): O(1)
  - Deletion (`del d[key]`, `s.remove(item)`): O(1)
  - Search/Access (`d[key]`, `key in d`, `item in s`): O(1)
- **Worst Case Time Complexity (due to many collisions, e.g., all keys hash to same bucket):**
  - Insertion, Deletion, Search/Access: O(N) (where N is the number of items in the dict/set, effectively degenerating to a linear scan of a chain or probe sequence).
  - _However, Python's hash table implementation is highly optimized, making the worst-case very rare in practice with typical data._
- **Space Complexity:** O(N) to store N items.

### 9.4 Common Hashing Interview Questions (TCS/Infosys Focus)

(Many array/string problems can be optimized using hashing)

#### 9.4.1 Count Frequency of Elements in an Array/List

- **Q: Given a list of items, count the frequency of each unique item.**

  - **Underlying Concept/Algorithm:** Use a hash map (dictionary) to store item -> count.
  - **Pythonic Solution Approach (Using `collections.Counter` or manual dict):**

    ```python
    from collections import Counter

    def count_frequencies_counter(arr):
        return Counter(arr)

    def count_frequencies_manual(arr):
        freq_map = {}
        for item in arr:
            freq_map[item] = freq_map.get(item, 0) + 1
        return freq_map
    ```

  - **Complexity:** Time O(N) (iterate through list), Space O(U) (where U is the number of unique items).

#### 9.4.2 Find if an Array is a Subset of Another

- **Q: Given two lists, `arr1` and `arr2`, determine if `arr2` is a subset of `arr1` (all elements of `arr2` are present in `arr1`, considering frequencies if required by problem).**

  - **Underlying Concept/Algorithm:**
    - **Without frequency check:** Add all elements of `arr1` to a set. Then, for each element in `arr2`, check if it's in the set.
    - **With frequency check:** Use hash maps (Counters) for both lists and compare counts.
  - **Pythonic Solution Approach (Without frequency check, using sets):**
    ```python
    def is_subset_simple(arr1, arr2):
        set1 = set(arr1)
        for item in arr2:
            if item not in set1:
                return False
        return True
    # More Pythonic: return set(arr2).issubset(set(arr1))
    ```
    - **Complexity:** Time O(len(arr1) + len(arr2)) (to build set1 and iterate arr2). Space O(len(arr1)) (for set1).
  - **Pythonic Solution Approach (With frequency check, using `Counter`):**

    ```python
    from collections import Counter

    def is_subset_with_frequency(arr1, arr2):
        count1 = Counter(arr1)
        count2 = Counter(arr2)

        for item, freq in count2.items():
            if count1.get(item, 0) < freq:
                return False
        return True
    ```

    - **Complexity:** Time O(len(arr1) + len(arr2)). Space O(len(arr1) + len(arr2)) for counters.

#### 9.4.3 Two Sum Problem (Revisited with Hashing)

- **Q: Given a list of integers and a target sum, find if there exist two numbers in the list that add up to the target. (Return indices or boolean).**
  - **Underlying Concept/Algorithm:** Iterate through the list. For each element `num`, calculate `complement = target - num`. Check if `complement` is in a hash map/set of numbers seen so far.
  - **Pythonic Solution Approach (Returning indices):**
    ```python
    def two_sum_hashing_indices(nums, target):
        seen_map = {} # Stores num -> index
        for i, num in enumerate(nums):
            complement = target - num
            if complement in seen_map:
                return [seen_map[complement], i] # Found pair
            seen_map[num] = i # Store current number and its index
        return [] # No pair found
    ```
  - **Complexity:** Time O(N) (average, one pass). Space O(N) (for `seen_map`).

#### 9.4.4 Group Anagrams

- **Q: Given a list of strings, group the anagrams together.**

  - **Underlying Concept/Algorithm:** Anagrams become identical when their characters are sorted. Use a hash map where the key is the sorted version of a string, and the value is a list of original strings that sort to this key.
  - **Pythonic Solution Approach:**

    ```python
    from collections import defaultdict

    def group_anagrams(strs):
        anagram_map = defaultdict(list) # Values will be lists by default

        for s_orig in strs:
            sorted_s = "".join(sorted(s_orig)) # Create canonical representation (key)
            anagram_map[sorted_s].append(s_orig)

        return list(anagram_map.values())
    ```

  - **Complexity:** Time O(N _ K log K) (where N is number of strings, K is max length of a string; sorting each string takes K log K). Space O(N _ K) (to store all strings in the map).

#### 9.4.5 Longest Consecutive Sequence

- **Q: Given an unsorted list of integers, find the length of the longest consecutive elements sequence.** (e.g., `[100, 4, 200, 1, 3, 2]` -> `[1, 2, 3, 4]` -> length 4)

  - **Underlying Concept/Algorithm:**
    1.  Put all numbers into a set for O(1) lookups.
    2.  Iterate through the numbers in the original list (or set).
    3.  For each number `num`, if `num-1` is NOT in the set, it means `num` can be the start of a new consecutive sequence.
    4.  If it's a start, then count how many consecutive numbers (`num+1`, `num+2`, ...) are in the set. Keep track of the maximum length found.
  - **Pythonic Solution Approach:**

    ```python
    def longest_consecutive_sequence(nums):
        if not nums:
            return 0

        num_set = set(nums) # For O(1) lookups
        max_length = 0

        for num in num_set: # Iterate through unique numbers
            # Check if it's the start of a sequence
            if (num - 1) not in num_set:
                current_num = num
                current_length = 1

                # Count length of this sequence
                while (current_num + 1) in num_set:
                    current_num += 1
                    current_length += 1

                max_length = max(max_length, current_length)

        return max_length
    ```

  - **Complexity:** Time O(N) (Although there's a nested `while` loop, each number is visited at most twice: once by the outer loop and once by the inner `while` loop if it's part of a sequence being counted. Building set is O(N)). Space O(N) (for `num_set`).

---

(Many array/string problems can be optimized using hashing)

## Chapter 10: Trees

### 10.1 Basic Terminology (Root, Node, Edge, Parent, Child, Leaf, Height, Depth)

- **Tree:** A non-linear hierarchical data structure consisting of nodes connected by edges.
- **Node:** An entity that contains a key or value and pointers (references) to its child nodes.
- **Root:** The topmost node in a tree. It's the only node with no parent.
- **Edge:** The link between two nodes. If an edge exists from node A to node B, A is the parent of B, and B is the child of A.
- **Parent:** A node that has an edge to a child node.
- **Child:** A node that has an edge from a parent node.
- **Siblings:** Nodes that share the same parent.
- **Leaf Node (External Node):** A node with no children.
- **Internal Node:** A node with at least one child.
- **Path:** A sequence of nodes and edges connecting a node with a descendant.
- **Depth of a Node:** The number of edges from the root to the node. The depth of the root is 0.
- **Height of a Node:** The number of edges on the longest path from the node to a leaf. The height of a leaf node is 0.
- **Height of a Tree:** The height of its root node (or the length of the longest path from the root to any leaf). Height of an empty tree is often -1, and a tree with one node has height 0.
- **Level of a Node:** 1 + depth of the node. Root is at level 1. (Sometimes root is considered level 0).
- **Subtree:** A tree consisting of a node and its descendants.
- **Degree of a Node:** The number of children a node has.
- **Degree of a Tree:** The maximum degree of a node in the tree.

### 10.2 Types of Trees (General, Binary, N-ary)

- **General Tree:** A tree where a node can have any number of children.
- **N-ary Tree:** A tree where each node can have at most N children.
- **Binary Tree (BT):** An N-ary tree where N=2. Each node has at most two children, referred to as the left child and the right child. This is the most commonly discussed tree type in interviews.
- **Full (or Proper/Strict) Binary Tree:** A binary tree where every node has either 0 or 2 children.
- **Complete Binary Tree:** A binary tree in which all levels are completely filled except possibly the last level, and the last level has all keys as left as possible. Important for heap implementation.
- **Perfect Binary Tree:** A binary tree in which all internal nodes have two children and all leaf nodes are at the same level.
- **Balanced Binary Tree:** A binary tree where the height difference between the left and right subtrees of any node is limited (e.g., not more than 1 for AVL trees). This keeps the height logarithmic.
- **Binary Search Tree (BST):** A binary tree with a specific ordering property (detailed later).

### 10.3 Binary Trees (BT)

- **Q: Tree Views (Left, Right, Top, Bottom - Conceptual for TCS/Infosys).** (Continued)

  - **Left View:**

    - **Algorithm (Level Order Traversal):**
      ```python
      from collections import deque
      def left_view_level_order(root):
          if not root: return []
          result = []
          q = deque([root])
          while q:
              level_size = len(q)
              # Add the first node of the current level to result
              result.append(q[0].val) # The leftmost node at this level
              for _ in range(level_size):
                  node = q.popleft()
                  if node.left: q.append(node.left)
                  if node.right: q.append(node.right)
          return result
      ```
    - **Algorithm (Recursive DFS - Root, Left, Right):**

      ```python
      def left_view_dfs_util(node, current_level, max_level_seen, result):
          if not node:
              return

          if current_level > max_level_seen[0]: # Using a list for mutable integer
              result.append(node.val)
              max_level_seen[0] = current_level

          # Recur for left child first, then right
          left_view_dfs_util(node.left, current_level + 1, max_level_seen, result)
          left_view_dfs_util(node.right, current_level + 1, max_level_seen, result)

      def left_view_dfs(root):
          if not root: return []
          result = []
          max_level_seen = [-1] # Max level seen so far (0-indexed levels)
          left_view_dfs_util(root, 0, max_level_seen, result)
          return result
      ```

  - **Right View:**

    - **Algorithm (Level Order Traversal):**
      ```python
      from collections import deque
      def right_view_level_order(root):
          if not root: return []
          result = []
          q = deque([root])
          while q:
              level_size = len(q)
              # The rightmost node at this level will be the last one processed in this loop
              rightmost_node_val_at_level = None
              for i in range(level_size):
                  node = q.popleft()
                  if i == level_size - 1: # Last node of the current level
                     rightmost_node_val_at_level = node.val
                  if node.left: q.append(node.left)
                  if node.right: q.append(node.right)
              if rightmost_node_val_at_level is not None:
                  result.append(rightmost_node_val_at_level)
          return result
      ```
    - **Algorithm (Recursive DFS - Root, Right, Left):**

      ```python
      def right_view_dfs_util(node, current_level, max_level_seen, result):
          if not node:
              return

          if current_level > max_level_seen[0]:
              result.append(node.val)
              max_level_seen[0] = current_level

          # Recur for right child first, then left
          right_view_dfs_util(node.right, current_level + 1, max_level_seen, result)
          right_view_dfs_util(node.left, current_level + 1, max_level_seen, result)

      def right_view_dfs(root):
          if not root: return []
          result = []
          max_level_seen = [-1]
          right_view_dfs_util(root, 0, max_level_seen, result)
          return result
      ```

  - **Top View & Bottom View (More Advanced - Conceptual for these roles):**
    - These views require considering the horizontal distance of nodes from the root. Nodes are typically assigned a horizontal distance (HD): root is 0, left child is HD-1, right child is HD+1.
    - **Top View:** For each horizontal distance, the first node encountered (highest level) is part of the top view. Can be found using level order traversal with (node, HD) tuples in the queue and a dictionary to store `hd -> node_val` (only updating if HD not seen or current node is at a higher level for same HD - though for top view typically first encountered at an HD is taken).
    - **Bottom View:** For each horizontal distance, the last node encountered (lowest level) is part of the bottom view. Similar to top view, but update `hd -> node_val` for every node encountered at that HD, so the last one (deepest) remains.
    - _Implementation often involves BFS or DFS along with storing horizontal distances._

### 10.4 Binary Search Trees (BST)

#### 10.4.1 Properties (Left < Root < Right)

- A Binary Search Tree is a special type of binary tree where each node has a comparable key (or value) and satisfies the **BST property**:
  1.  The key in any node is **greater than or equal to** any key stored in its **left subtree**. (Some definitions use strictly greater than, this detail matters for handling duplicates).
  2.  The key in any node is **less than or equal to** any key stored in its **right subtree**. (Some definitions use strictly less than).
  3.  Both the left and right subtrees must also be binary search trees.
  4.  **Duplicates:** How duplicates are handled can vary:
      - Not allowed.
      - Allowed in either left or right subtree (e.g., all duplicates go to right).
      - Node stores a count of duplicate values.
      - _For interviews, clarify this if the problem involves duplicates._ Assuming no duplicates or they go to the right is common unless specified.
- **Key Advantage:** The BST property allows for efficient search, insertion, and deletion operations, which are O(H) (height of the tree). For a balanced BST, H = log N, leading to O(log N) average time complexity for these operations.
- **Inorder traversal** of a BST yields elements in **sorted (non-decreasing) order**. This is a fundamental property used in many BST problems.

#### 10.4.2 Operations: Search, Insert, Delete

- **Search in BST:**

  - **Algorithm:**
    1. Start at the root.
    2. Compare the target key with the current node's key.
    3. If target == current node's key, the key is found.
    4. If target < current node's key, move to the left child and repeat from step 2.
    5. If target > current node's key, move to the right child and repeat from step 2.
    6. If you reach a `None` (null) child, the key is not in the tree.
  - **Python Implementation (Iterative):**
    ```python
    def search_bst(root: TreeNode, key_to_find: int) -> TreeNode: # Returns node if found, else None
        current = root
        while current:
            if key_to_find == current.val:
                return current # Found
            elif key_to_find < current.val:
                current = current.left
            else: # key_to_find > current.val
                current = current.right
        return None # Not found
    ```
  - **Complexity:** O(H). Average case O(log N) for a reasonably balanced BST. Worst case O(N) for a skewed BST (degenerate to a linked list).

- **Insert in BST:**

  - **Algorithm:**
    1. Search for the key as if you were trying to find it.
    2. If the key is found, handle duplicates based on the specific BST rules (e.g., ignore, increment a count, or throw an error if duplicates are not allowed).
    3. If the key is not found, the search will terminate at a `None` child link of some parent node. Insert the new node as the child of that parent node, in the correct (left or right) position.
    4. If the tree is empty, the new node becomes the root.
  - **Python Implementation (Iterative):**

    ```python
    def insert_bst(root: TreeNode, key_to_insert: int) -> TreeNode:
        new_node = TreeNode(key_to_insert)
        if not root:
            return new_node # New node becomes the root if tree is empty

        current = root
        parent = None
        while current:
            parent = current
            if key_to_insert < current.val:
                current = current.left
            elif key_to_insert > current.val:
                current = current.right
            else:
                # Handle duplicate: e.g., ignore, update count, or specific logic
                # For this example, we'll assume duplicates are not inserted or handled elsewhere.
                return root # Or raise ValueError("Duplicate key")

        # Insert new_node as child of parent
        if key_to_insert < parent.val:
            parent.left = new_node
        else: # key_to_insert > parent.val (assuming no strict duplicates allowed here for simplicity)
            parent.right = new_node

        return root # Return the (potentially modified) root of the tree
    ```

  - **Complexity:** O(H). Average O(log N), Worst O(N).

- **Delete in BST:** (This is the most complex operation due to various cases)

  - **Algorithm:**
    1.  Find the node to be deleted (`node_to_delete`). If not found, do nothing.
    2.  **Case 1: `node_to_delete` is a leaf node (no children).**
        - Simply remove it by setting its parent's corresponding child pointer to `None`.
    3.  **Case 2: `node_to_delete` has one child.**
        - Replace `node_to_delete` with its single child. (Parent of `node_to_delete` now points to the child of `node_to_delete`).
    4.  **Case 3: `node_to_delete` has two children.**
        - Find its **inorder successor** (the smallest key in its right subtree) OR its **inorder predecessor** (the largest key in its left subtree). Let's use inorder successor.
        - Copy the value of the inorder successor to `node_to_delete.val`.
        - Recursively delete the inorder successor from the right subtree of `node_to_delete`. The inorder successor will have at most one right child (no left child by definition), so its deletion will be a Case 1 or Case 2 scenario.
  - **Python Implementation (Recursive):**

    ```python
    def find_min_bst_node(node: TreeNode) -> TreeNode: # Helper: find min node in a subtree (go left)
        current = node
        # Smallest value is the leftmost node
        while current and current.left:
            current = current.left
        return current

    def delete_bst_node(root: TreeNode, key_to_delete: int) -> TreeNode:
        if not root:
            return None # Key not found, or tree is empty

        # Recur down the tree
        if key_to_delete < root.val:
            root.left = delete_bst_node(root.left, key_to_delete)
        elif key_to_delete > root.val:
            root.right = delete_bst_node(root.right, key_to_delete)
        else: # Node with the key_to_delete is found (this 'root' is the node to delete)
            # Case 1: Node is a leaf or has only one right child
            if not root.left:
                temp_child = root.right # Could be None (leaf) or the right child
                # root = None # Not needed in Python due to garbage collection if unreferenced
                return temp_child # Replace current node with its right child (or None)
            # Case 1 (cont.): Node has only one left child
            elif not root.right:
                temp_child = root.left
                # root = None
                return temp_child # Replace current node with its left child

            # Case 2: Node has two children
            # Find the inorder successor (smallest node in the right subtree)
            inorder_successor_node = find_min_bst_node(root.right)

            # Copy the inorder successor's value to this node
            root.val = inorder_successor_node.val

            # Delete the inorder successor from the right subtree
            root.right = delete_bst_node(root.right, inorder_successor_node.val)

        return root # Return the (possibly modified) root of this subtree
    ```

  - **Complexity:** O(H). Average O(log N), Worst O(N).

#### 10.4.3 Common BST Questions: Check if BT is BST, Find Kth Smallest/Largest, Lowest Common Ancestor (LCA)

- **Q: Check if a Binary Tree is a BST.**

  - **Algorithm 1 (Range Check - Recursive):**
    For each node, ensure its value lies within a valid range `(min_val, max_val)`.
    - The root node starts with the range `(-infinity, +infinity)`.
    - When moving to a left child, the valid range becomes `(min_val, current_node.val)`.
    - When moving to a right child, the valid range becomes `(current_node.val, max_val)`.

  ```python
  def is_valid_bst_util(node, min_val, max_val):
      if not node:
          return True # An empty tree (or subtree) is a valid BST

      if not (min_val < node.val < max_val):
          return False # Node's value violates the BST range property

      # Recursively check left and right subtrees with updated ranges
      return (is_valid_bst_util(node.left, min_val, node.val) and
              is_valid_bst_util(node.right, node.val, max_val))

  def is_valid_bst_range_check(root: TreeNode) -> bool:
      return is_valid_bst_util(root, float('-inf'), float('inf'))
  ```

  - **Algorithm 2 (Inorder Traversal):**
    Perform an inorder traversal of the tree. If the tree is a BST, the inorder traversal will produce a sequence of node values in non-decreasing (sorted) order. Keep track of the previously visited node's value and ensure the current node's value is greater.

  ```python
  class BstValidatorInorder:
      def __init__(self):
          self.prev_val = float('-inf') # Or None and handle first element

      def is_valid_bst_inorder_traversal(self, node: TreeNode) -> bool:
          if not node:
              return True

          # Check left subtree
          if not self.is_valid_bst_inorder_traversal(node.left):
              return False

          # Check current node against previous
          if node.val <= self.prev_val:
              return False
          self.prev_val = node.val # Update previous value

          # Check right subtree
          return self.is_valid_bst_inorder_traversal(node.right)

  # Usage:
  # validator = BstValidatorInorder()
  # result = validator.is_valid_bst_inorder_traversal(root_node)
  ```

  - **Complexity (Both methods):** Time O(N) (each node visited once). Space O(H) (for recursion stack).

- **Q: Find Kth Smallest/Largest Element in a BST.**

  - **Kth Smallest:**

    - **Algorithm (Using Inorder Traversal):** Inorder traversal visits nodes in ascending order. Perform an inorder traversal and stop at the Kth node visited.

    ```python
    def kth_smallest_bst(root: TreeNode, k: int) -> int:
        stack = []
        current = root
        count = 0

        while current or stack:
            while current:
                stack.append(current)
                current = current.left

            current = stack.pop()
            count += 1
            if count == k:
                return current.val

            current = current.right
        return -1 # Should not happen if k is valid and tree has at least k nodes
    ```

  - **Kth Largest:**

    - **Algorithm 1:** Find the `(N - k + 1)`-th smallest element, where N is the total number of nodes in the BST. (Requires finding N first).
    - **Algorithm 2 (Reverse Inorder Traversal):** Perform a reverse inorder traversal (Right - Root - Left). The Kth node visited in this traversal will be the Kth largest element.

    ```python
    def kth_largest_bst(root: TreeNode, k: int) -> int:
        stack = []
        current = root
        count = 0

        while current or stack:
            while current: # Go to the rightmost node
                stack.append(current)
                current = current.right # Traverse right

            current = stack.pop()
            count += 1
            if count == k:
                return current.val

            current = current.left # Then traverse left
        return -1
    ```

  - **Complexity (Kth Smallest/Largest using iterative inorder/reverse inorder):** Time O(H + K) on average (where H is height, as you might traverse deep before finding K elements, then K steps). Worst case O(N). Space O(H) for the stack.
  - _(Can also be solved by augmenting tree nodes to store the size of their left subtree, allowing O(H) lookup for Kth element.)_

- **Q: Lowest Common Ancestor (LCA) in a BST.**
  - LCA of two nodes `p` and `q` in a tree is the lowest (deepest) node that has both `p` and `q` as descendants (where we allow a node to be a descendant of itself).
  - **Algorithm (BST specific - exploits BST property):**
    1. Start from the root.
    2. If both `p.val` and `q.val` are less than `current_node.val`, then the LCA must be in the left subtree. Move to `current_node.left`.
    3. If both `p.val` and `q.val` are greater than `current_node.val`, then the LCA must be in the right subtree. Move to `current_node.right`.
    4. Otherwise (i.e., `current_node.val` is between `p.val` and `q.val`, or `current_node.val` is equal to one of them), then `current_node` is the LCA. This happens when the paths to `p` and `q` diverge at `current_node`, or one of the nodes is an ancestor of the other.
  ```python
  def lca_bst(root: TreeNode, p_node_val: int, q_node_val: int) -> TreeNode:
      current = root
      while current:
          if p_node_val < current.val and q_node_val < current.val:
              current = current.left
          elif p_node_val > current.val and q_node_val > current.val:
              current = current.right
          else:
              # Either one value is on one side and the other on the other side,
              # or one of the values matches current.val. This is the LCA.
              return current
      return None # Should not happen if p and q are guaranteed to be in the tree
  ```
  - **Complexity:** Time O(H) (path from root to LCA). Space O(1) (iterative) or O(H) (if implemented recursively).
  - _(Note: LCA in a general Binary Tree (not BST) has a different, more general solution, often involving DFS to find paths or a recursive approach that returns the LCA from subtrees.)_

### 10.5 (Brief) Other Trees: AVL, Red-Black (Conceptual - understand why they exist: self-balancing)

- **Problem with basic BSTs:** If data is inserted in a sorted or nearly sorted order (e.g., 1, 2, 3, 4, 5), the BST can become skewed or degenerate, essentially turning into a linked list. In this case, the height H becomes N, and operations like search, insert, delete degrade to O(N) performance instead of the desired O(log N).
- **Self-Balancing Binary Search Trees:** These are BSTs that automatically perform re-balancing operations (like rotations) during insertions and deletions to ensure that the tree remains reasonably balanced. This maintains an O(log N) height and thus O(log N) performance for key operations in the worst case.
  - **AVL Tree:**
    - One of the first self-balancing BSTs.
    - **Balance Factor:** For each node, the difference `height(left_subtree) - height(right_subtree)` must be in the range `[-1, 0, 1]`.
    - If an insertion or deletion causes the balance factor of any node to become -2 or +2, **tree rotations** (LL, RR, LR, RL rotations) are performed to restore balance.
    - AVL trees are very strictly balanced, which can lead to faster lookups compared to some other self-balancing trees. However, maintaining this strict balance might require more frequent rotations during insertions/deletions, potentially making these operations slightly slower on average.
  - **Red-Black Tree:**
    - Another type of self-balancing BST. Nodes are colored either Red or Black.
    - A set of specific rules governs the node coloring and structure (e.g., root is black, red nodes cannot have red children, all paths from a node to its descendant null leaves have the same number of black nodes). These rules ensure that the longest path from root to any leaf is no more than twice as long as the shortest path, keeping the tree approximately balanced (height is O(log N)).
    - Re-balancing involves color changes and rotations.
    - Balance is generally less strict than AVL trees, leading to fewer rotations on average for insertions and deletions, making these operations often faster.
    - Widely used in practice, for example, in the C++ Standard Template Library (`std::map`, `std::set`) and Java's `TreeMap` and `TreeSet`.
- **TCS/Infosys Focus:**
  - You are **unlikely** to be asked to implement AVL or Red-Black tree rotations or full insertion/deletion logic from scratch in a typical interview for these roles.
  - However, you **should understand**:
    - **Why** self-balancing trees are needed (to avoid the O(N) worst-case performance of skewed BSTs).
    - The **concept** of self-balancing and that it involves operations like rotations.
    - That these trees **guarantee O(log N)** worst-case time complexity for search, insert, and delete operations.
    - The **names** "AVL Tree" and "Red-Black Tree" as common examples of self-balancing BSTs.
    - A high-level idea of how they achieve balance (e.g., AVL through balance factors, Red-Black through color rules).

---

## Chapter 11: Heaps (Priority Queues)

### 11.1 Concept: Min-Heap, Max-Heap, Complete Binary Tree Property

- **Heap:** A specialized tree-based data structure that satisfies the **heap property**. Heaps are commonly used to implement **Priority Queues**.
  - Typically implemented as a **complete binary tree**. A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible.
  - This complete binary tree structure allows heaps to be efficiently represented using an array (or Python list).
    - If a node is at index `i`:
      - Its left child is at index `2*i + 1`.
      - Its right child is at index `2*i + 2`.
      - Its parent is at index `(i-1) // 2`.
- **Heap Property:** Determines the relationship between a parent node and its children.

  - **Min-Heap:** The value of each node is less than or equal to the values of its children. Thus, the root node holds the minimum value in the heap.
  - **Max-Heap:** The value of each node is greater than or equal to the values of its children. Thus, the root node holds the maximum value in the heap.

- **Priority Queue:** An ADT where each element has an associated priority.
  - Elements with higher priority are served before elements with lower priority.
  - Heaps are a very common and efficient way to implement priority queues.
    - Min-Heap for a min-priority queue (extract minimum element).
    - Max-Heap for a max-priority queue (extract maximum element).

### 11.2 Python's `heapq` Module (Min-Heap)

- Python's standard library includes the `heapq` module, which provides an implementation of the heap queue algorithm, also known as the priority queue algorithm.
- `heapq` **implements a Min-Heap** directly using a Python list.
- Key functions:
  - `heapq.heappush(heap, item)`: Push `item` onto the `heap` (list), maintaining heap property. O(log N).
  - `heapq.heappop(heap)`: Pop and return the smallest `item` from the `heap`. O(log N).
  - `heapq.heapify(list)`: Transform `list` into a heap, in-place, in O(N) time.
  - `heapq.heappushpop(heap, item)`: Pushes `item` then pops smallest. More efficient than `heappush` followed by `heappop`. O(log N).
  - `heapq.heapreplace(heap, item)`: Pops smallest then pushes `item`. (Heap must not be empty). O(log N).
  - `heapq.nsmallest(k, iterable)` / `heapq.nlargest(k, iterable)`: Return a list with the `k` smallest/largest items from `iterable`. O(N log K).

### 11.3 Operations: Insert (`heappush`), Extract-Min (`heappop`), Heapify

(Conceptual understanding of how these work internally, even when using `heapq`)

- **Insert (e.g., `heappush` for Min-Heap):** O(log N)

  1.  Add the new element to the end of the list (bottom-most, right-most available spot in the tree).
  2.  "Heapify-up" or "sift-up": Compare the new element with its parent. If it's smaller than its parent (for min-heap), swap them.
  3.  Repeat step 2 until the element is in its correct place (either it's greater than or equal to its parent, or it becomes the root).

- **Extract-Min (e.g., `heappop` for Min-Heap):** O(log N)

  1.  The minimum element is at the root (index 0 of the list). Store it to return later.
  2.  Move the last element of the list (bottom-most, right-most node) to the root position.
  3.  Remove the last element (effectively shrinking the heap).
  4.  "Heapify-down" or "sift-down": Compare the new root with its children.
      - If it's larger than one or both children (for min-heap), swap it with the smaller of its children.
  5.  Repeat step 4 down the tree until the element is in its correct place (either it's smaller than or equal to both its children, or it becomes a leaf node).

- **Heapify (Build Heap from an arbitrary list):** O(N)
  - A naive approach would be to insert N elements one by one (N \* O(log N) = O(N log N)).
  - A more efficient O(N) method: Start from the last non-leaf node (index `(n//2) - 1`) and go up to the root. For each node, perform a "heapify-down" operation.
  - `heapq.heapify(list)` uses this efficient O(N) approach.

### 11.4 Implementing Max-Heap using Min-Heap (`heapq`)

Since `heapq` only provides a min-heap, to simulate a max-heap, you can:

1.  Store negated values: Insert `-value` into the min-heap. When you pop, negate the result back.

    ```python
    import heapq

    max_heap = []
    heapq.heappush(max_heap, -10) # Store -10 for value 10
    heapq.heappush(max_heap, -30)
    heapq.heappush(max_heap, -5)

    # To get max element:
    # largest = -heapq.heappop(max_heap) # Pop -(-30) -> 30
    ```

2.  If items are tuples (e.g., `(priority, task)`), store `(-priority, task)` for a max-priority queue based on `priority`.

### 11.5 Common Heap Interview Questions (TCS/Infosys Focus)

#### 11.5.1 Kth Largest/Smallest Element in an Array

- **Q: Find the Kth largest (or smallest) element in an unsorted list.**

  - **Underlying Concept/Algorithm:**
    - **Sorting:** Sort the list (O(N log N)) and pick the Kth element (O(1)). Total O(N log N).
    - **Using Min-Heap for Kth Largest:** Maintain a min-heap of size K.
      1. Iterate through the list.
      2. If heap size < K, add element to heap.
      3. Else (heap size == K), if current element > heap_top (min element in heap), pop from heap and add current element.
      4. After iterating, the top of the min-heap is the Kth largest.
    - **Using Max-Heap for Kth Smallest:** Similar logic, maintain max-heap of size K.
  - **Pythonic Solution Approach (Kth Largest using Min-Heap):**

    ```python
    import heapq

    def find_kth_largest(nums, k):
        min_heap = []
        for num in nums:
            if len(min_heap) < k:
                heapq.heappush(min_heap, num)
            elif num > min_heap[0]: # Current num is larger than smallest in heap
                heapq.heapreplace(min_heap, num) # Pop smallest, push current

        return min_heap[0] # Root of min-heap is the Kth largest

    # For Kth smallest, use a max-heap (store negated values)
    def find_kth_smallest(nums, k):
        max_heap = []
        for num in nums:
            # Store negated values to simulate max-heap
            neg_num = -num
            if len(max_heap) < k:
                heapq.heappush(max_heap, neg_num)
            elif neg_num > max_heap[0]: # -num is "larger" (more negative) than current max in heap (least negative)
                                        # This means num is smaller than -(max_heap[0])
                heapq.heapreplace(max_heap, neg_num)

        return -max_heap[0] # Negate back to get actual Kth smallest
    ```

  - **Complexity:** Time O(N log K) (N iterations, each heap operation is log K). Space O(K) (for the heap).
  - Python's `heapq.nlargest(k, nums)[-1]` for Kth largest or `heapq.nsmallest(k, nums)[-1]` for Kth smallest can also be used (Time O(N log K)).

#### 11.5.2 Merge K Sorted Arrays/Lists

- **Q: Given K sorted lists, merge them into a single sorted list.**

  - **Underlying Concept/Algorithm:** Use a min-heap to keep track of the smallest element among the current front elements of all K lists.
    1. Initialize a min-heap.
    2. Push the first element (value, list_index, element_index_in_list) from each of the K non-empty lists into the heap.
    3. While the heap is not empty:
       a. Pop the smallest element `(value, list_idx, elem_idx)` from the heap. Add `value` to the result list.
       b. If the list from which `value` was taken (`list_idx`) still has more elements, push the next element from that list `(next_value, list_idx, next_elem_idx)` into the heap.
  - **Pythonic Solution Approach:**

    ```python
    import heapq

    def merge_k_sorted_lists(lists): # lists is a list of lists
        min_heap = []
        result = []

        # Initialize heap with the first element from each non-empty list
        for i, lst in enumerate(lists):
            if lst: # Check if list is not empty
                # Store (value, list_index, element_index_in_that_list)
                heapq.heappush(min_heap, (lst[0], i, 0))

        while min_heap:
            value, list_idx, elem_idx_in_list = heapq.heappop(min_heap)
            result.append(value)

            # If there are more elements in the list from which 'value' was taken
            if elem_idx_in_list + 1 < len(lists[list_idx]):
                next_elem_idx = elem_idx_in_list + 1
                next_value = lists[list_idx][next_elem_idx]
                heapq.heappush(min_heap, (next_value, list_idx, next_elem_idx))

        return result
    ```

  - **Complexity:** Let N be the total number of elements across all lists, and K be the number of lists.
    - Time: O(N log K). Each element is pushed and popped from the heap once. Heap operations take O(log K).
    - Space: O(K) for the heap (stores at most K elements). O(N) for the result list.

#### 11.5.3 Find Median from a Data Stream

- **Q: Design a data structure that supports adding numbers from a data stream and finding the median of all numbers added so far, efficiently.**

  - **Underlying Concept/Algorithm:** Use two heaps:
    1.  A **Max-Heap (`lower_half`)** to store the smaller half of the numbers.
    2.  A **Min-Heap (`upper_half`)** to store the larger half of the numbers.
    - Maintain the heaps such that:
      - All numbers in `lower_half` are <= all numbers in `upper_half`.
      - The sizes of the heaps are either equal or `lower_half` has one more element than `upper_half`.
    - **Adding a number `num`:**
      - If `lower_half` is empty or `num <= -lower_half[0]` (top of max-heap), add `num` to `lower_half`.
      - Else, add `num` to `upper_half`.
    - **Rebalance heaps:**
      - If `len(lower_half) > len(upper_half) + 1`, move max from `lower_half` to `upper_half`.
      - If `len(upper_half) > len(lower_half)`, move min from `upper_half` to `lower_half`.
    - **Finding Median:**
      - If `len(lower_half) > len(upper_half)`, median is `-lower_half[0]` (top of max-heap).
      - Else (lengths are equal), median is `(-lower_half[0] + upper_half[0]) / 2`.
  - **Pythonic Solution Approach:**

    ```python
    import heapq

    class MedianFinder:
        def __init__(self):
            self.lower_half = []  # Max-heap (store negative numbers)
            self.upper_half = []  # Min-heap

        def addNum(self, num: int) -> None:
            # Add to lower_half (max-heap) by default or if num is smaller than largest in lower_half
            if not self.lower_half or num <= -self.lower_half[0]:
                heapq.heappush(self.lower_half, -num)
            else:
                heapq.heappush(self.upper_half, num)

            # Rebalance the heaps
            # 1. lower_half might have too many
            if len(self.lower_half) > len(self.upper_half) + 1:
                heapq.heappush(self.upper_half, -heapq.heappop(self.lower_half))
            # 2. upper_half might have too many
            elif len(self.upper_half) > len(self.lower_half):
                heapq.heappush(self.lower_half, -heapq.heappop(self.upper_half))

        def findMedian(self) -> float:
            if not self.lower_half and not self.upper_half:
                # Or raise error depending on spec
                return 0.0

            if len(self.lower_half) > len(self.upper_half):
                return float(-self.lower_half[0])
            else: # len(self.lower_half) == len(self.upper_half)
                  # (This case should be hit for even numbers due to rebalancing)
                return (-self.lower_half[0] + self.upper_half[0]) / 2.0
    ```

  - **Complexity:**
    - `addNum`: O(log N) (due to heap pushes and pops).
    - `findMedian`: O(1).
    - Space: O(N) (to store all N numbers).

#### 11.5.4 Top K Frequent Elements

- **Q: Given a non-empty list of integers, return the `k` most frequent elements.**

  - **Underlying Concept/Algorithm:**
    1.  Count frequencies of all numbers using a hash map (dictionary or `collections.Counter`).
    2.  Use a min-heap of size `k` to find the `k` elements with the highest frequencies.
        - Iterate through (element, frequency) pairs from the map.
        - If heap size < `k`, push `(frequency, element)` to heap.
        - Else, if current element's `frequency > heap_top[0]` (frequency of smallest in heap), pop from heap and push current `(frequency, element)`.
    3.  The elements in the heap are the top `k` frequent.
  - **Pythonic Solution Approach:**

    ```python
    import heapq
    from collections import Counter

    def top_k_frequent(nums, k):
        if k == len(nums): # Optimization: if k is all numbers, no need for heap
            return list(set(nums))

        counts = Counter(nums) # Step 1: Count frequencies

        # Step 2: Use a min-heap to keep track of k elements with highest frequencies
        # Heap stores (frequency, element) tuples
        min_heap = []
        for num, freq in counts.items():
            if len(min_heap) < k:
                heapq.heappush(min_heap, (freq, num))
            elif freq > min_heap[0][0]: # Current element's freq is higher than smallest freq in heap
                heapq.heapreplace(min_heap, (freq, num))

        # Step 3: Extract elements from heap
        return [item[1] for item in min_heap]

    # Alternative using heapq.nlargest (simpler to write)
    def top_k_frequent_nlargest(nums, k):
        counts = Counter(nums)
        # nlargest works on an iterable and uses a key function to determine "largeness"
        # Here, key is the frequency (counts.get)
        return heapq.nlargest(k, counts.keys(), key=counts.get)
    ```

  - **Complexity (Manual Heap):**
    - Time: O(N) for counting frequencies. O(U log K) for heap operations, where U is number of unique elements. So, O(N + U log K).
    - Space: O(U) for frequency map, O(K) for heap.
  - **Complexity (`heapq.nlargest`):** O(N log K) if N is number of unique elements, or O(TotalElements log K) if counts.keys() iterates over many items and key lookup is involved. More accurately, it's O(N + U log K) where N is to build counter, U for iterating unique items.

---

## Chapter 12: Graphs

### 12.1 Terminology (Vertex, Edge, Directed, Undirected, Weighted, Degree)

- **Graph:** A non-linear data structure consisting of a set of **vertices** (or nodes) and a set of **edges** that connect pairs of vertices. `G = (V, E)`.
- **Vertex (V):** A fundamental part of a graph. Represents an entity.
- **Edge (E):** A connection between two vertices.
- **Undirected Graph:** Edges have no orientation. An edge `(u, v)` is the same as `(v, u)`.
- **Directed Graph (Digraph):** Edges have a direction. An edge `(u, v)` goes from `u` (source) to `v` (destination).
- **Weighted Graph:** Each edge has an associated numerical value, called its weight or cost. (e.g., distance between cities, cost of a connection).
- **Unweighted Graph:** Edges do not have weights (or can be considered to have a weight of 1).
- **Degree of a Vertex (Undirected):** The number of edges incident to it.
  - **Handshaking Lemma:** Sum of degrees of all vertices = `2 * |E|`.
- **In-degree of a Vertex (Directed):** The number of edges pointing _to_ it.
- **Out-degree of a Vertex (Directed):** The number of edges pointing _from_ it.
- **Path:** A sequence of vertices such that there is an edge from each vertex to the next in the sequence.
- **Simple Path:** A path where all vertices are distinct (except possibly the first and last).
- **Cycle:** A path that starts and ends at the same vertex and contains at least one edge.
  - **Acyclic Graph:** A graph with no cycles.
  - **DAG (Directed Acyclic Graph):** A directed graph with no directed cycles. Important for tasks like topological sort.
- **Connected Graph (Undirected):** There is a path between every pair of vertices.
- **Disconnected Graph:** Not connected. Consists of multiple **connected components**.
- **Strongly Connected Graph (Directed):** There is a directed path from every vertex to every other vertex.
- **Subgraph:** A graph `G'=(V', E')` such that `V'` is a subset of `V` and `E'` is a subset of `E`.
- **Tree (as a graph):** A connected acyclic undirected graph.

### 12.2 Graph Representations in Python

- **1. Adjacency List:**

  - **Concept:** For each vertex, store a list of its adjacent vertices.
  - **Python Implementation:** Often a dictionary where keys are vertices and values are lists (or sets) of their neighbors.
    ```python
    # Undirected graph
    graph_adj_list = {
        'A': ['B', 'C'],
        'B': ['A', 'D', 'E'],
        'C': ['A', 'F'],
        'D': ['B'],
        'E': ['B', 'F'],
        'F': ['C', 'E']
    }
    # Or using integers for vertices (common in competitive programming)
    # num_vertices = 5
    # adj = [[] for _ in range(num_vertices)]
    # adj[0].append(1)
    # adj[1].append(0)
    ```
  - **Pros:** Space-efficient for sparse graphs (where `|E|` is much smaller than `|V|^2`). Easy to iterate over neighbors of a vertex.
  - **Cons:** Checking if an edge `(u, v)` exists can take O(degree(u)) time.
  - **Space Complexity:** O(|V| + |E|).

- **2. Adjacency Matrix:**

  - **Concept:** A 2D matrix `adj[V][V]` where `adj[i][j] = 1` (or weight) if there's an edge from vertex `i` to vertex `j`, and `0` (or infinity) otherwise. For undirected graphs, the matrix is symmetric.
  - **Python Implementation:** List of lists.
    ```python
    # For vertices 0, 1, 2
    #      0  1  2
    #  0 [[0, 1, 0],  # Edge 0-1
    #  1  [1, 0, 1],  # Edge 1-0, 1-2
    #  2  [0, 1, 0]]  # Edge 2-1
    # num_vertices = 3
    # adj_matrix = [[0 for _ in range(num_vertices)] for _ in range(num_vertices)]
    # adj_matrix[0][1] = 1
    # adj_matrix[1][0] = 1 # For undirected
    ```
  - **Pros:** Checking for an edge `(u, v)` is O(1). Efficient for dense graphs.
  - **Cons:** Space-inefficient for sparse graphs (O(|V|^2) space). Iterating over neighbors of a vertex takes O(|V|) time.
  - **Space Complexity:** O(|V|^2).

- **3. Edge List (Less common as primary representation for traversals):**
  - **Concept:** A list of all edges, where each edge is represented as a pair (or triplet for weighted) of vertices.
  - **Example:** `edges = [('A', 'B'), ('A', 'C'), ('B', 'D'), ...]`
  - Useful for some algorithms like Kruskal's.

**Choosing a Representation:** Adjacency lists are generally preferred for most graph problems, especially if the graph is sparse, as is common.

### 12.3 Graph Traversals

Visiting all vertices of a graph in a systematic way.

#### 12.3.1 Breadth-First Search (BFS) - Algorithm & Python Implementation

- **Algorithm:**
  1.  Start at a source vertex `s`. Mark `s` as visited and enqueue it.
  2.  While the queue is not empty:
      a. Dequeue a vertex `u`.
      b. For each unvisited neighbor `v` of `u`:
      i. Mark `v` as visited.
      ii. Enqueue `v`.
      iii. (Optional: Record `u` as parent of `v`, or distance `dist[v] = dist[u] + 1`).
- **Properties:**
  - Explores the graph layer by layer.
  - Finds the shortest path (in terms of number of edges) from the source to all other reachable vertices in an unweighted graph.
  - Uses a queue.
- **Python Implementation (Adjacency List):**

  ```python
  from collections import deque

  def bfs(graph, start_node): # graph is an adjacency list (dict)
      if start_node not in graph:
          return [] # Or raise error

      visited = set()
      queue = deque([start_node])
      visited.add(start_node)
      traversal_order = []

      while queue:
          vertex = queue.popleft()
          traversal_order.append(vertex)

          for neighbor in graph.get(vertex, []): # Use .get for safety if node might not be in graph keys
              if neighbor not in visited:
                  visited.add(neighbor)
                  queue.append(neighbor)

      return traversal_order

  # Example:
  # graph_adj = {'A': ['B', 'C'], 'B': ['D', 'E'], 'C': ['F'], 'D': [], 'E': ['F'], 'F': []}
  # print(bfs(graph_adj, 'A')) # Output might be: ['A', 'B', 'C', 'D', 'E', 'F'] (order of B/C or D/E can vary)
  ```

- **Complexity:**
  - Time: O(|V| + |E|) because each vertex is enqueued/dequeued once, and each edge is examined once.
  - Space: O(|V|) for the `visited` set and the `queue` in the worst case (e.g., a star graph or a line graph).

#### 12.3.2 Depth-First Search (DFS) - Algorithm & Python Implementation (Recursive & Iterative)

- **Algorithm (Recursive):**
  1.  Start at a source vertex `s`. Mark `s` as visited. Process `s`.
  2.  For each unvisited neighbor `v` of `s`:
      a. Recursively call DFS on `v`.
- **Algorithm (Iterative using a Stack):**
  1.  Start at a source vertex `s`. Mark `s` as visited and push it onto a stack.
  2.  While the stack is not empty:
      a. Pop a vertex `u` from the stack. Process `u`.
      b. For each unvisited neighbor `v` of `u` (often in reverse order of how you'd explore them naturally to mimic recursion):
      i. Mark `v` as visited.
      ii. Push `v` onto the stack.
- **Properties:**
  - Explores as far as possible along each branch before backtracking.
  - Uses a stack (implicitly for recursion, explicitly for iterative).
  - Useful for cycle detection, topological sort, finding connected components.
- **Python Implementation (Recursive - Adjacency List):**

  ```python
  def dfs_recursive_util(graph, node, visited, traversal_order):
      visited.add(node)
      traversal_order.append(node)

      for neighbor in graph.get(node, []):
          if neighbor not in visited:
              dfs_recursive_util(graph, neighbor, visited, traversal_order)

  def dfs_recursive(graph, start_node):
      if start_node not in graph:
          return []

      visited = set()
      traversal_order = []
      dfs_recursive_util(graph, start_node, visited, traversal_order)
      return traversal_order
  ```

- **Python Implementation (Iterative - Adjacency List):**

  ```python
  def dfs_iterative(graph, start_node):
      if start_node not in graph:
          return []

      visited = set()
      stack = [start_node] # Initialize stack with start_node
      traversal_order = []

      while stack:
          vertex = stack.pop()

          if vertex not in visited: # Process node only if not visited
              visited.add(vertex)
              traversal_order.append(vertex)

              # Add unvisited neighbors to stack.
              # Add in reverse order of desired processing if specific order matters
              # (e.g., to mimic recursive DFS's typical left-to-right neighbor exploration)
              # For simple traversal, order doesn't strictly matter.
              for neighbor in reversed(graph.get(vertex, [])): # reversed() helps mimic recursion
                  if neighbor not in visited: # Push only if not going to be processed from stack top
                      stack.append(neighbor)
      return traversal_order

  # Example:
  # graph_adj = {'A': ['B', 'C'], 'B': ['D', 'E'], 'C': ['F'], 'D': [], 'E': ['F'], 'F': []}
  # print(dfs_recursive(graph_adj, 'A')) # E.g., ['A', 'B', 'D', 'E', 'F', 'C']
  # print(dfs_iterative(graph_adj, 'A')) # E.g., ['A', 'C', 'F', 'B', 'E', 'D'] (order can vary based on neighbor processing)
  ```

- **Complexity:**
  - Time: O(|V| + |E|).
  - Space: O(|V|) for `visited` set. O(H) for recursion stack (H is max depth, |V| in worst case). O(|V|) for iterative stack in worst case.

### 12.4 Common Graph Interview Questions (TCS/Infosys Focus - often basic traversals & cycle detection)

#### 12.4.1 Detect Cycle in Undirected Graph (using DFS/BFS)

- **Q: Given an undirected graph, determine if it contains a cycle.**

  - **Using DFS:**

    - During DFS traversal, for a vertex `u` and its neighbor `v`:
      - If `v` is already visited AND `v` is not the parent of `u` in the DFS tree, then a cycle is detected (a back edge).
    - Need to pass parent to DFS calls.

    ```python
    def has_cycle_undirected_dfs_util(graph, u, visited, parent):
        visited.add(u)
        for v in graph.get(u, []):
            if v not in visited:
                if has_cycle_undirected_dfs_util(graph, v, visited, u):
                    return True
            elif v != parent: # v is visited and not parent of u
                return True
        return False

    def has_cycle_undirected(graph):
        visited = set()
        for node in graph: # Handle disconnected graphs
            if node not in visited:
                # For the first node in a component, parent can be None or a dummy value
                if has_cycle_undirected_dfs_util(graph, node, visited, -1): # -1 as dummy parent
                    return True
        return False
    ```

  - **Using BFS:**
    - During BFS, if we encounter a visited neighbor that is not the parent of the current node (from which we reached it in BFS), there's a cycle. (This requires tracking parent in BFS queue items `(node, parent)`).
  - **Complexity:** O(|V| + |E|).

#### 12.4.2 Detect Cycle in Directed Graph (using DFS)

- **Q: Given a directed graph, determine if it contains a cycle.**

  - **Using DFS:**

    - Maintain two sets: `visited` (nodes visited in current DFS path or completed paths) and `recursion_stack` (nodes currently in the recursion call stack for the current DFS path).
    - For a vertex `u` and its neighbor `v`:
      - If `v` is in `recursion_stack`, a back edge is found -> cycle.
      - If `v` is not in `visited`, recurse on `v`.
    - Before returning from DFS call for `u`, remove `u` from `recursion_stack`.

    ```python
    def has_cycle_directed_dfs_util(graph, u, visited, recursion_stack):
        visited.add(u)
        recursion_stack.add(u)

        for v in graph.get(u, []):
            if v not in visited:
                if has_cycle_directed_dfs_util(graph, v, visited, recursion_stack):
                    return True
            elif v in recursion_stack: # Found a back edge
                return True

        recursion_stack.remove(u) # Backtrack: remove from current path
        return False

    def has_cycle_directed(graph):
        visited = set()
        recursion_stack = set()
        for node in graph: # Handle disconnected graphs
            if node not in visited:
                if has_cycle_directed_dfs_util(graph, node, visited, recursion_stack):
                    return True
        return False
    ```

  - **Complexity:** O(|V| + |E|).

#### 12.4.3 Number of Connected Components in Undirected Graph

- **Q: Find the number of connected components in an undirected graph.**
  - **Algorithm:**
    1. Initialize `count = 0` and a `visited` set.
    2. Iterate through all vertices `v` from 0 to `|V|-1` (or all keys if dict representation).
    3. If `v` is not visited:
       a. Increment `count`.
       b. Start a traversal (BFS or DFS) from `v` to find all nodes in its component and mark them visited.
    4. Return `count`.
  ```python
  def count_connected_components(graph):
      visited = set()
      count = 0
      for node in graph: # Iterate through all potential starting nodes
          if node not in visited:
              # Start a traversal (e.g., BFS) from this node
              # bfs_component(graph, node, visited) # This BFS would mark all in component
              queue = deque([node])
              visited.add(node)
              while queue:
                  curr = queue.popleft()
                  for neighbor in graph.get(curr, []):
                      if neighbor not in visited:
                          visited.add(neighbor)
                          queue.append(neighbor)
              count += 1 # Found a new component
      return count
  ```
  - **Complexity:** O(|V| + |E|) as traversals cover all nodes and edges eventually.

#### 12.4.4 Shortest Path in Unweighted Graph (using BFS)

- **Q: Find the shortest path (in terms of number of edges) from a source vertex `src` to all other vertices (or a specific target `dest`) in an unweighted graph.**

  - **Algorithm:** BFS naturally finds the shortest path.
    - Maintain `distance[v]` array, initialized to infinity. `distance[src] = 0`.
    - When exploring neighbor `v` of `u`: `distance[v] = distance[u] + 1`.
    - Can also store `parent[v] = u` to reconstruct the path.

  ```python
  def shortest_path_bfs(graph, start_node, end_node):
      if start_node not in graph or end_node not in graph: return []

      queue = deque([(start_node, [start_node])]) # (current_node, current_path_list)
      visited = {start_node} # To avoid cycles and redundant paths

      while queue:
          current_vertex, path = queue.popleft()

          if current_vertex == end_node:
              return path # Found shortest path

          for neighbor in graph.get(current_vertex, []):
              if neighbor not in visited:
                  visited.add(neighbor)
                  new_path = list(path) # Create a new path list
                  new_path.append(neighbor)
                  queue.append((neighbor, new_path))

      return [] # Path not found
  ```

  - **Complexity:** O(|V| + |E|). Storing paths in queue can increase space/time factor slightly if paths are long, but core graph traversal is O(V+E).

#### 12.4.5 Topological Sort (for Directed Acyclic Graphs - DAGs) (Conceptual)

- **Q: Given a DAG, find a linear ordering of its vertices such that for every directed edge `(u, v)`, vertex `u` comes before vertex `v` in the ordering.**
  - **Use Cases:** Task scheduling, dependency resolution.
  - **Kahn's Algorithm (BFS-based):**
    1. Compute in-degrees of all vertices.
    2. Initialize a queue with all vertices having an in-degree of 0.
    3. While queue is not empty:
       a. Dequeue vertex `u`. Add `u` to topological sort result.
       b. For each neighbor `v` of `u`:
       i. Decrement in-degree of `v`.
       ii. If in-degree of `v` becomes 0, enqueue `v`.
    4. If result contains `|V|` vertices, it's a valid topological sort. Otherwise, graph has a cycle.
  - **DFS-based Algorithm:**
    1. Perform DFS.
    2. After visiting all descendants of a vertex `u` (i.e., when the recursive call for `u` finishes), add `u` to the _front_ of a list (or to a stack, then pop all). The reverse postorder traversal is a topological sort.
  - **Complexity:** O(|V| + |E|).
  - _TCS/Infosys: Conceptual understanding and perhaps Kahn's algorithm outline is usually sufficient._

#### 12.4.6 (Brief) Dijkstra's, Prim's, Kruskal's (Conceptual - understand use cases)

These are more advanced and may not be primary focus for TCS/Infosys entry roles unless specified, but knowing their purpose is good.

- **Dijkstra's Algorithm:**

  - **Purpose:** Finds the shortest path from a single source vertex to all other vertices in a **weighted graph with non-negative edge weights**.
  - **Method:** Greedy approach using a priority queue (min-heap) to select the unvisited vertex with the smallest known distance from the source.
  - **Complexity:** O(E log V) or O((E+V) log V) with adjacency list and binary heap. O(E + V log V) with Fibonacci heap.

- **Prim's Algorithm:**

  - **Purpose:** Finds a Minimum Spanning Tree (MST) for a weighted, connected, undirected graph. An MST is a subgraph that connects all vertices with the minimum possible total edge weight.
  - **Method:** Greedy. Starts with an arbitrary vertex and grows the MST by adding the cheapest edge connecting a vertex in the MST to a vertex not yet in the MST. Uses a priority queue.
  - **Complexity:** Similar to Dijkstra's, O(E log V).

- **Kruskal's Algorithm:**
  - **Purpose:** Also finds an MST for a weighted, connected, undirected graph.
  - **Method:** Greedy. Sorts all edges by weight. Adds edges one by one to the MST if they don't form a cycle with previously added edges. Uses a Disjoint Set Union (DSU) data structure to efficiently check for cycles.
  - **Complexity:** O(E log E) or O(E log V) (dominated by edge sorting).

---

## Chapter 13: Searching Algorithms

Searching is the process of finding a particular item (target) within a collection of items.

### 13.1 Linear Search

- **Concept:** The simplest search algorithm. It sequentially checks each element in the collection (e.g., list, array) until a match is found or the entire collection has been searched.
- **Use Cases:**
  - When the collection is unsorted.
  - For small collections where the overhead of more complex algorithms isn't justified.
- **Algorithm & Python Implementation:**
  ```python
  def linear_search(arr, target):
      for i in range(len(arr)):
          if arr[i] == target:
              return i  # Return index of target if found
      return -1         # Return -1 if target not found
  ```
- **Complexity & Use Cases:**
  - **Time Complexity:**
    - Best Case: O(1) (target is the first element).
    - Average Case: O(N) (target is somewhere in the middle).
    - Worst Case: O(N) (target is the last element or not present).
  - **Space Complexity:** O(1) (iterative).

### 13.2 Binary Search (for Sorted Data)

- **Concept:** An efficient algorithm for finding an item from a **sorted** collection of items. It works by repeatedly dividing the search interval in half.
- **Pre-requisite:** The collection **must be sorted**.
- **Algorithm (Iterative & Recursive):**
  1.  Compare the target value with the middle element of the sorted collection.
  2.  If the target value matches the middle element, its position is found.
  3.  If the target value is less than the middle element, narrow the search to the lower half.
  4.  If the target value is greater than the middle element, narrow the search to the upper half.
  5.  Repeat steps 1-4 until the value is found or the interval is empty.
- **Python Implementation (Iterative):**

  ```python
  def binary_search_iterative(sorted_arr, target):
      low = 0
      high = len(sorted_arr) - 1

      while low <= high:
          mid = (low + high) // 2 # or low + (high - low) // 2 to prevent overflow in other languages

          if sorted_arr[mid] == target:
              return mid # Target found at index mid
          elif sorted_arr[mid] < target:
              low = mid + 1 # Search in the right half
          else: # sorted_arr[mid] > target
              high = mid - 1 # Search in the left half

      return -1 # Target not found
  ```

- **Python Implementation (Recursive):**

  ```python
  def binary_search_recursive(sorted_arr, target, low, high):
      if low > high:
          return -1 # Base case: target not found

      mid = (low + high) // 2

      if sorted_arr[mid] == target:
          return mid
      elif sorted_arr[mid] < target:
          return binary_search_recursive(sorted_arr, target, mid + 1, high)
      else:
          return binary_search_recursive(sorted_arr, target, low, mid - 1)

  # Wrapper for recursive version
  # def search_recursive_wrapper(sorted_arr, target):
  #     return binary_search_recursive(sorted_arr, target, 0, len(sorted_arr) - 1)
  ```

- **Complexity & Pre-requisites:**
  - **Time Complexity:** O(log N) (because search space is halved in each step).
  - **Space Complexity:**
    - Iterative: O(1).
    - Recursive: O(log N) (due to recursion call stack).
- **Python's `bisect` module:** Provides functions for binary search on sorted lists (e.g., `bisect_left`, `bisect_right`).

#### 13.2.3 Common variations: Find first/last occurrence, Count occurrences, Search in rotated sorted array

- **Q: Find First or Last Occurrence of an Element in a Sorted Array.**

  - **Algorithm:** Modify binary search.
    - For first occurrence: If `arr[mid] == target`, store `mid` as a potential answer and try to find an earlier occurrence by setting `high = mid - 1`.
    - For last occurrence: If `arr[mid] == target`, store `mid` and try to find a later occurrence by setting `low = mid + 1`.

  ```python
  def find_first_occurrence(sorted_arr, target):
      low, high = 0, len(sorted_arr) - 1
      first_pos = -1
      while low <= high:
          mid = low + (high - low) // 2
          if sorted_arr[mid] == target:
              first_pos = mid
              high = mid - 1 # Try to find an earlier one
          elif sorted_arr[mid] < target:
              low = mid + 1
          else:
              high = mid - 1
      return first_pos
  # (find_last_occurrence is similar with low = mid + 1)
  ```

- **Q: Count Occurrences of an Element in a Sorted Array.**

  - **Algorithm:** Find first occurrence index (`first`) and last occurrence index (`last`). Count = `last - first + 1` (if found).

- **Q: Search in a Rotated Sorted Array.**

  - **Problem:** A sorted array is rotated at some pivot point. E.g., `[4,5,6,7,0,1,2]` was `[0,1,2,4,5,6,7]`. Find a target.
  - **Algorithm:** Modified binary search. In each step, determine which half is sorted.
    1. Find `mid`.
    2. If `arr[mid] == target`, return `mid`.
    3. Check if left half (`arr[low]` to `arr[mid]`) is sorted:
       - If `arr[low] <= arr[mid]`:
         - If `target` is within this sorted left half (`arr[low] <= target < arr[mid]`), search left (`high = mid - 1`).
         - Else, search right (`low = mid + 1`).
    4. Else (right half `arr[mid]` to `arr[high]` must be sorted):
       - If `arr[mid] < target <= arr[high]`, search right (`low = mid + 1`).
       - Else, search left (`high = mid - 1`).

  ```python
  def search_rotated_sorted_array(nums, target):
      low, high = 0, len(nums) - 1
      while low <= high:
          mid = low + (high - low) // 2
          if nums[mid] == target:
              return mid

          # Left part is sorted
          if nums[low] <= nums[mid]:
              if nums[low] <= target < nums[mid]:
                  high = mid - 1
              else:
                  low = mid + 1
          # Right part is sorted
          else:
              if nums[mid] < target <= nums[high]:
                  low = mid + 1
              else:
                  high = mid - 1
      return -1
  ```

  - **Complexity:** O(log N).

---

## Chapter 14: Sorting Algorithms

Sorting arranges items in a collection in a specific order (ascending or descending).

### 14.1 Importance of Sorting

- Makes searching efficient (e.g., enables binary search).
- Fundamental for many other algorithms (e.g., finding duplicates, median, Kth element).
- Data presentation and analysis.

### 14.2 Basic Sorting Algorithms (Often asked for implementation or dry run)

#### 14.2.1 Bubble Sort

- **Algorithm:** Repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. Largest elements "bubble" to the end.
- **Python Implementation:**
  ```python
  def bubble_sort(arr):
      n = len(arr)
      for i in range(n): # Number of passes
          swapped = False
          for j in range(0, n - i - 1): # Inner loop for comparisons
              if arr[j] > arr[j+1]:
                  arr[j], arr[j+1] = arr[j+1], arr[j] # Swap
                  swapped = True
          if not swapped: # Optimization: if no swaps in a pass, list is sorted
              break
      return arr
  ```
- **Complexity:**
  - Time: O(N^2) in average and worst cases. O(N) in best case (already sorted, with optimization).
  - Space: O(1) (in-place).
- **Stability:** Stable (maintains relative order of equal elements).

#### 14.2.2 Selection Sort

- **Algorithm:** Repeatedly finds the minimum element from the unsorted part of the list and puts it at the beginning of the unsorted part.
- **Python Implementation:**
  ```python
  def selection_sort(arr):
      n = len(arr)
      for i in range(n): # Iterate through each position to place the correct element
          min_idx = i
          for j in range(i + 1, n): # Find minimum in unsorted part
              if arr[j] < arr[min_idx]:
                  min_idx = j
          arr[i], arr[min_idx] = arr[min_idx], arr[i] # Swap with current position
      return arr
  ```
- **Complexity:**
  - Time: O(N^2) in all cases (best, average, worst) due to nested loops.
  - Space: O(1) (in-place).
- **Stability:** Not inherently stable, but can be made stable with minor modifications (e.g., by shifting instead of direct swapping if multiple mins exist, but this adds complexity). Standard implementation is not stable.

#### 14.2.3 Insertion Sort

- **Algorithm:** Builds the final sorted list one item at a time. Takes each element from the input and inserts it into its correct position in the already sorted part of the list.
- **Python Implementation:**

  ```python
  def insertion_sort(arr):
      for i in range(1, len(arr)): # Start from the second element
          key = arr[i] # Element to be inserted
          j = i - 1    # Last element of the sorted portion

          # Move elements of arr[0..i-1], that are greater than key,
          # to one position ahead of their current position
          while j >= 0 and key < arr[j]:
              arr[j+1] = arr[j]
              j -= 1
          arr[j+1] = key # Insert key at correct position
      return arr
  ```

- **Complexity:**
  - Time: O(N^2) in average and worst cases. O(N) in best case (already sorted).
  - Space: O(1) (in-place).
- **Stability:** Stable.
- **Usefulness:** Efficient for small datasets or nearly sorted datasets. Used as a part of hybrid sorting algorithms like Timsort.

### 14.3 Efficient Sorting Algorithms (Conceptual understanding is key)

#### 14.3.1 Merge Sort

- **Algorithm (Divide & Conquer):**
  1.  **Divide:** If the list has more than one element, divide it into two (roughly equal) halves.
  2.  **Conquer:** Recursively sort each half.
  3.  **Combine:** Merge the two sorted halves into a single sorted list.
- **Python Implementation (Conceptual - `merge` helper is crucial):**

  ```python
  def merge(left_half, right_half):
      merged = []
      i, j = 0, 0
      while i < len(left_half) and j < len(right_half):
          if left_half[i] < right_half[j]:
              merged.append(left_half[i])
              i += 1
          else:
              merged.append(right_half[j])
              j += 1
      merged.extend(left_half[i:])
      merged.extend(right_half[j:])
      return merged

  def merge_sort(arr):
      if len(arr) <= 1:
          return arr

      mid = len(arr) // 2
      left_half = merge_sort(arr[:mid])
      right_half = merge_sort(arr[mid:])

      return merge(left_half, right_half)
  ```

- **Complexity:**
  - Time: O(N log N) in all cases (best, average, worst).
  - Space: O(N) (due to the auxiliary space needed for merging). Not in-place.
- **Stability:** Stable.

#### 14.3.2 Quick Sort

- **Algorithm (Divide & Conquer, Pivot):**
  1.  **Pick a Pivot:** Choose an element from the list as a pivot (e.g., first, last, median, random).
  2.  **Partition:** Rearrange the list so that all elements smaller than the pivot come before it, and all elements greater come after it. Equal elements can go on either side. After partitioning, the pivot is in its final sorted position.
  3.  **Conquer:** Recursively apply Quick Sort to the sub-list of elements smaller than the pivot and the sub-list of elements greater than the pivot.
- **Python Implementation (Conceptual - `partition` logic varies):**

  ```python
  def partition(arr, low, high): # Lomuto partition scheme example
      pivot = arr[high] # Choosing last element as pivot
      i = low - 1 # Index of smaller element

      for j in range(low, high):
          if arr[j] <= pivot:
              i += 1
              arr[i], arr[j] = arr[j], arr[i] # Swap

      arr[i+1], arr[high] = arr[high], arr[i+1] # Place pivot in correct spot
      return i + 1 # Return pivot index

  def quick_sort_recursive(arr, low, high):
      if low < high:
          pivot_index = partition(arr, low, high)
          quick_sort_recursive(arr, low, pivot_index - 1)
          quick_sort_recursive(arr, pivot_index + 1, high)

  def quick_sort(arr):
      quick_sort_recursive(arr, 0, len(arr) - 1)
      return arr
  ```

- **Complexity:**
  - Time:
    - Best & Average Case: O(N log N).
    - Worst Case: O(N^2) (occurs with bad pivot choices, e.g., already sorted list and picking first/last element as pivot). Random pivot or median-of-three helps mitigate this.
  - Space: O(log N) on average (recursion stack depth for balanced partitions). O(N) in worst case (skewed partitions).
- **In-place nature:** Typically considered in-place as it sorts by rearranging within the original array (though recursion stack uses space).
- **Stability:** Not inherently stable (depends on partition implementation).

#### 14.3.3 Heap Sort (using Heaps)

- **Algorithm:**
  1.  **Build Heap:** Build a Max-Heap from the input list (O(N)).
  2.  **Sort:** Repeatedly extract the maximum element from the heap (which is the root) and move it to the end of the list (sorted portion).
      - Swap root with the last element of the heap.
      - Reduce heap size by 1.
      - Heapify-down the new root to maintain heap property.
      - Repeat N-1 times.
- **Complexity:**
  - Time: O(N log N) (Build heap O(N) + N extractions \* O(log N) per extraction).
  - Space: O(1) (if heap is built in-place within the input array).
- **In-place:** Yes.
- **Stability:** Not stable.

### 14.4 Python's Built-in Sort (`list.sort()`, `sorted()`) - Timsort

- Python's default sorting algorithm is **Timsort**.
- **Timsort:** A hybrid stable sorting algorithm, derived from Merge Sort and Insertion Sort.
  - Designed to perform well on many kinds of real-world data.
  - Divides the list into "runs" (monotonically increasing or decreasing subsequences).
  - Uses Insertion Sort for small runs.
  - Merges these runs using a modified Merge Sort strategy.
- **Complexity:**
  - Time: O(N log N) worst-case and average-case. O(N) best-case (if nearly sorted).
  - Space: O(N) in worst-case (for merging), can be O(log N) or less for partially sorted data.
- **Stability:** Stable.
- `list.sort()`: Sorts the list in-place.
- `sorted(iterable)`: Returns a new sorted list from the items in an iterable.

### 14.5 Comparison of Sorting Algorithms (Time, Space, Stability, Use Cases)

| Algorithm        | Time (Best) | Time (Avg) | Time (Worst) | Space (Worst)  | Stable | Notes                                              |
| ---------------- | ----------- | ---------- | ------------ | -------------- | ------ | -------------------------------------------------- |
| Bubble Sort      | O(N)        | O(N^2)     | O(N^2)       | O(1)           | Yes    | Simple, good for educational purposes.             |
| Selection Sort   | O(N^2)      | O(N^2)     | O(N^2)       | O(1)           | No     | Minimal swaps (N).                                 |
| Insertion Sort   | O(N)        | O(N^2)     | O(N^2)       | O(1)           | Yes    | Efficient for small/nearly sorted data. Online.    |
| Merge Sort       | O(N log N)  | O(N log N) | O(N log N)   | O(N)           | Yes    | Consistent performance, good for external sorting. |
| Quick Sort       | O(N log N)  | O(N log N) | O(N^2)       | O(log N)/O(N)  | No     | Often fastest in practice, good cache locality.    |
| Heap Sort        | O(N log N)  | O(N log N) | O(N log N)   | O(1)           | No     | In-place, good worst-case time.                    |
| Timsort (Python) | O(N)        | O(N log N) | O(N log N)   | O(N) / O(logN) | Yes    | Hybrid, adaptive, practical default.               |

---

## Chapter 15: Recursion

### 15.1 Concept: Base Case, Recursive Step

- **Recursion:** A problem-solving technique where a function calls itself directly or indirectly to solve smaller instances of the same problem.
- **Components of a Recursive Function:**
  1.  **Base Case(s):** One or more conditions that terminate the recursion. It's a simple case that can be solved directly without further recursion. _Crucial to prevent infinite recursion._
  2.  **Recursive Step (or Recursive Call):** The part of the function where it calls itself with modified arguments, moving closer to the base case. The problem is broken down into smaller, similar subproblems.

### 15.2 How Recursion Works (Call Stack)

- When a function is called, an **activation record** (or stack frame) is created on the **call stack**. This frame stores:
  - Local variables of the function.
  - Parameters passed to the function.
  - Return address (where to go back after function finishes).
- In recursion, each recursive call adds a new frame to the stack.
- When a base case is reached, the function returns, and its frame is popped from the stack. Execution resumes at the return address in the caller's frame.
- This process continues until the initial call returns.

### 15.3 Recursion vs. Iteration

- Any problem solvable with recursion can also be solved with iteration (using loops and often an explicit stack if needed for complex recursion patterns like tree traversals).
- **Recursion Pros:**
  - Often leads to more elegant, concise, and easier-to-understand code for problems that are naturally recursive (e.g., tree traversals, Divide & Conquer algorithms like Merge Sort).
  - Closer to mathematical definitions for some problems.
- **Recursion Cons:**
  - Can be less efficient due to function call overhead (creating stack frames).
  - **Stack Overflow Risk:** If recursion is too deep (many nested calls without reaching base case quickly), the call stack can run out of memory, leading to a stack overflow error. Python has a recursion depth limit (can be checked with `sys.getrecursionlimit()` and changed with `sys.setrecursionlimit()`, but generally not advised to increase it too much).
  - Debugging can sometimes be harder.
- **Iteration Pros:**
  - Generally more efficient in terms of speed and memory (no function call overhead, no deep call stack unless explicitly managed).
  - No risk of stack overflow from recursion depth.
- **Iteration Cons:**
  - Can sometimes lead to more complex code for problems that are naturally recursive.

### 15.4 Common Recursive Problems (TCS/Infosys Focus)

#### 15.4.1 Factorial

- `n! = n * (n-1)!`
- Base Case: `0! = 1`, `1! = 1`.
  ```python
  def factorial(n):
      if n < 0:
          raise ValueError("Factorial not defined for negative numbers")
      if n == 0 or n == 1: # Base case
          return 1
      else: # Recursive step
          return n * factorial(n - 1)
  ```

#### 15.4.2 Fibonacci Series

- `fib(n) = fib(n-1) + fib(n-2)`
- Base Cases: `fib(0) = 0`, `fib(1) = 1`.

  ```python
  # Naive recursive (very inefficient due to re-computation)
  def fibonacci_naive(n):
      if n < 0:
          raise ValueError("Fibonacci not defined for negative numbers")
      if n == 0: return 0 # Base case
      if n == 1: return 1 # Base case
      return fibonacci_naive(n-1) + fibonacci_naive(n-2) # Recursive step

  # (Memoized recursive version is much better - see DP chapter)
  ```

#### 15.4.3 Sum of N natural numbers

- `sum(n) = n + sum(n-1)`
- Base Case: `sum(0) = 0` or `sum(1) = 1`.
  ```python
  def sum_n_natural_recursive(n):
      if n < 0:
          raise ValueError("Sum not defined for negative count")
      if n == 0: # Base case
          return 0
      else: # Recursive step
          return n + sum_n_natural_recursive(n - 1)
  ```

#### 15.4.4 Power of a Number (x^n)

- `power(x, n) = x * power(x, n-1)`
- Base Case: `power(x, 0) = 1`.
  ```python
  def power_recursive(base, exp):
      if exp == 0: # Base case
          return 1
      elif exp < 0: # Handle negative exponent if needed (e.g., 1 / power(base, -exp))
          return 1 / power_recursive(base, -exp)
      else: # Recursive step
          return base * power_recursive(base, exp - 1)
  # Optimized (O(log n) version for exponentiation by squaring):
  # def power_optimized(base, exp):
  #     if exp == 0: return 1
  #     if exp < 0: return 1 / power_optimized(base, -exp)
  #     half = power_optimized(base, exp // 2)
  #     if exp % 2 == 0: return half * half
  #     else: return base * half * half
  ```

#### 15.4.5 String Reversal using Recursion

- Reverse `s` is `reverse(s[1:]) + s[0]`.
- Base Case: If string is empty or has one char, return it.
  ```python
  def reverse_string_recursive(s):
      if len(s) <= 1: # Base case
          return s
      else: # Recursive step
          return reverse_string_recursive(s[1:]) + s[0]
  ```

### 15.5 Pitfalls: Stack Overflow, Performance

- **Stack Overflow:** As mentioned, deep recursion can exhaust call stack memory. Always ensure your base case is reachable and logic reduces problem size towards it.
- **Performance:**
  - **Function Call Overhead:** Each call adds some overhead.
  - **Redundant Computations:** Naive recursive solutions (like Fibonacci) can recompute the same subproblems multiple times, leading to exponential time complexity. This is where memoization (Dynamic Programming) helps.
- **Tail Recursion:** A special form where the recursive call is the very last operation. Some compilers/interpreters can optimize tail recursion into iteration (Tail Call Optimization - TCO). Python's default interpreter **does not** perform TCO.

---

## Chapter 16: Backtracking

### 16.1 Concept: Exploring all possibilities, Pruning search space

- **Backtracking:** An algorithmic technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, and removing those solutions ("backtracking") that fail to satisfy the constraints of the problem at any point in time.
- It's a refined brute-force approach that systematically explores the solution space.
- Often used for constraint satisfaction problems like puzzles (Sudoku, N-Queens), pathfinding (Rat in a Maze), and generating combinations/permutations.
- **Key Idea:**
  1.  **Choose:** Make a choice at the current step.
  2.  **Explore:** Recursively try to solve the problem with this choice.
  3.  **Unchoose (Backtrack):** If the recursive call doesn't lead to a solution, undo the choice made in step 1 and try another alternative.

### 16.2 General Algorithmic Template

```python
# def solve_backtracking(current_state, other_params):
#     if is_solution(current_state):
#         add_to_solutions(current_state)
#         return # Or return True if only one solution needed

#     for choice in generate_possible_choices(current_state, other_params):
#         if is_valid(choice, current_state):
#             make_choice(choice, current_state) # Modify state

#             solve_backtracking(current_state, other_params) # Explore

#             unmake_choice(choice, current_state) # Backtrack - undo modification
```

### 16.3 Common Backtracking Problems (Conceptual understanding, simpler versions for TCS/Infosys)

Backtracking is well-suited for problems where you need to explore many possibilities to find a solution or all solutions.

#### 16.3.1 N-Queens Problem (Conceptual explanation)

- **Problem:** The N-Queens puzzle is the problem of placing N chess queens on an N×N chessboard such that no two queens threaten each other. This means no two queens can be on the same row, column, or diagonal.
- **Backtracking Approach:**
  - We try to place queens one by one, typically row by row (or column by column).
  - Let `solve(row)` be a function that tries to place queens from `row` to `N-1`.
  - **Base Case:** If `row == N` (meaning all N queens have been successfully placed in rows 0 to N-1), a solution is found. Add the current board configuration to a list of solutions.
  - **Recursive Step:** For the current `row`, iterate through each column `col` from `0` to `N-1`.
    - **Check Safety:** Before placing a queen at `(row, col)`, check if this position is safe (i.e., no other queen attacks this square). This involves checking the current column, and both upper-left and upper-right diagonals (since we are placing row by row, previous rows are already filled).
    - **Choose:** If `(row, col)` is safe, place a queen there (e.g., `board[row][col] = 'Q'`).
    - **Explore:** Recursively call `solve(row + 1)` to try and place queens in subsequent rows.
    - **Unchoose (Backtrack):** If the recursive call `solve(row + 1)` does not lead to a solution (or if you are looking for all solutions and it returns after finding some), remove the queen from `(row, col)` (e.g., `board[row][col] = '.'`) so that other columns in the current `row` can be tried, or so that previous recursive calls can explore different configurations.
- **Safety Checks:**
  - To check column safety: Maintain an array/set of occupied columns.
  - To check diagonal safety:
    - Left diagonal: `row - col` is constant.
    - Right diagonal: `row + col` is constant.
    - Maintain sets/arrays for occupied diagonals.
- **TCS/Infosys Focus:** Understanding the backtracking logic (place, check, recurse, backtrack) is key. Full N-Queens implementation might be complex for a timed interview unless N is very small, but explaining the approach is common.

#### 16.3.2 Rat in a Maze

- **Problem:** A rat is placed at `(0,0)` in a square N×N maze (represented by a binary matrix where `1` means the block is a valid path and `0` means the block is a wall). The rat wants to reach the destination `(N-1, N-1)`. Find if a path exists, and if so, print one such path (e.g., by marking the path cells in a solution matrix). The rat can move in specified directions (e.g., Down and Right).
- **Backtracking Approach:**
  - Let `solveMazeUtil(maze, x, y, N, sol_matrix)` be the recursive function.
  - **Base Case:** If `(x, y)` is the destination `(N-1, N-1)` AND `maze[x][y] == 1`:
    - Mark `sol_matrix[x][y] = 1` (part of the path).
    - Return `True` (path found).
  - **Recursive Step & Safety Check:**
    - Check if `(x, y)` is a valid cell to move to:
      - Within maze boundaries (`0 <= x < N` and `0 <= y < N`).
      - Cell is open (`maze[x][y] == 1`).
      - Cell has not been visited yet in the current path (`sol_matrix[x][y] == 0`).
    - If valid:
      - **Choose:** Mark `sol_matrix[x][y] = 1`.
      - **Explore (e.g., Down then Right):**
        - If `solveMazeUtil(maze, x + 1, y, N, sol_matrix)` returns `True` (path found by moving Down), return `True`.
        - If `solveMazeUtil(maze, x, y + 1, N, sol_matrix)` returns `True` (path found by moving Right), return `True`.
        - (Can add other moves like Up, Left if allowed by problem).
      - **Unchoose (Backtrack):** If none of the moves from `(x, y)` lead to a solution, mark `sol_matrix[x][y] = 0` (this cell is not part of the correct path).
      - Return `False`.
    - Else (not a valid cell to move to), return `False`.
- **Initial Call:** `solveMazeUtil(maze, 0, 0, N, sol_matrix_initialized_to_0s)`.
- **TCS/Infosys Focus:** Explaining the recursive exploration with backtracking is important. A simplified version or dry run might be asked.

#### 16.3.3 Generating Permutations/Combinations of a String/List

- **Generating All Permutations (all possible orderings of elements):**

  - **Approach:** For each position in the permutation, try placing each unused element.
  - `generatePerms(elements_list, current_permutation, used_elements_mask, all_permutations_list)`:
    - **Base Case:** If `len(current_permutation) == len(elements_list)`, a full permutation is formed. Add a copy of `current_permutation` to `all_permutations_list`.
    - **Recursive Step:** Iterate through each element `el` at index `i` in `elements_list`.
      - If `elements_list[i]` has not been used yet (check `used_elements_mask`):
        - **Choose:** Add `elements_list[i]` to `current_permutation`. Mark `elements_list[i]` as used (update `used_elements_mask`).
        - **Explore:** Call `generatePerms(...)` recursively.
        - **Unchoose (Backtrack):** Remove `elements_list[i]` from `current_permutation`. Mark `elements_list[i]` as unused.

  ```python
  def generate_permutations(arr):
      result = []
      n = len(arr)

      def backtrack_permute(current_perm, used_indices_set):
          if len(current_perm) == n:
              result.append(list(current_perm)) # Add a copy
              return

          for i in range(n):
              if i not in used_indices_set:
                  # Choose
                  current_perm.append(arr[i])
                  used_indices_set.add(i)

                  # Explore
                  backtrack_permute(current_perm, used_indices_set)

                  # Unchoose (Backtrack)
                  used_indices_set.remove(i)
                  current_perm.pop()

      if n == 0: return [[]] # Permutation of empty is an empty list within a list
      backtrack_permute([], set())
      return result
  ```

- **Generating Combinations (select `k` elements from `n`, order doesn't matter):**

  - **Approach:** For each element, decide whether to include it in the current combination or exclude it.
  - `generateCombs(elements_list, k, start_index, current_combination, all_combinations_list)`:
    - **Base Case 1:** If `len(current_combination) == k`, a valid combination is formed. Add a copy to `all_combinations_list`.
    - **Base Case 2:** If `start_index == len(elements_list)` (no more elements to consider), return.
    - **Recursive Step:**
      - **Include `elements_list[start_index]`:**
        - Add `elements_list[start_index]` to `current_combination`.
        - Recursively call `generateCombs(elements_list, k, start_index + 1, ...)` (move to next element).
        - Backtrack: Remove `elements_list[start_index]` from `current_combination`.
      - **Exclude `elements_list[start_index]`:**
        - Recursively call `generateCombs(elements_list, k, start_index + 1, ...)` (move to next element without including current).

  ```python
  def generate_combinations(arr, k):
      result = []
      n = len(arr)

      def backtrack_combine(start_idx, current_combo):
          # Base case: if a combination of size k is formed
          if len(current_combo) == k:
              result.append(list(current_combo)) # Add a copy
              return

          # Base case: if no more elements to pick from or not enough elements left
          if start_idx == n or (k - len(current_combo)) > (n - start_idx):
              return

          # Iterate through possible elements to add to the current combination
          # To avoid duplicates and ensure combinations (not permutations),
          # the next element chosen must be from start_idx onwards.
          for i in range(start_idx, n):
              # Choose
              current_combo.append(arr[i])
              # Explore (next element to choose must be after current i)
              backtrack_combine(i + 1, current_combo)
              # Unchoose (Backtrack)
              current_combo.pop()

      if k < 0 or k > n: return []
      if k == 0: return [[]] # Combination of size 0 is one empty list
      backtrack_combine(0, [])
      return result
  ```

#### 16.3.4 Sudoku Solver (Conceptual explanation)

- **Problem:** Fill a 9x9 Sudoku grid, which is partially filled with digits, such that every row, every column, and every one of the nine 3x3 subgrids contain all of the digits from 1 to 9 exactly once.
- **Backtracking Approach:**
  - `solveSudoku(grid)`:
    - **Find Empty Cell:** Iterate through the `grid` to find the next empty cell (e.g., marked with 0 or '.'). Let its position be `(row, col)`.
    - **Base Case:** If no empty cell is found, the Sudoku is solved. Return `True`.
    - **Recursive Step:** For the empty cell `(row, col)`, try placing each digit `num` from 1 to 9:
      - **Check Validity:** If placing `num` at `(row, col)` is valid/safe (i.e., `num` does not already exist in the current `row`, `col`, or the 3x3 subgrid containing `(row, col)`):
        - **Choose:** Place `num` in `grid[row][col]`.
        - **Explore:** Recursively call `solveSudoku(grid)`. If this call returns `True` (meaning the rest of the puzzle could be solved with this `num`), then return `True`.
        - **Unchoose (Backtrack):** If `solveSudoku(grid)` returns `False` (meaning placing `num` here didn't lead to a solution), reset `grid[row][col]` to its empty state (0 or '.') to try the next digit for `(row, col)`.
    - If no digit from 1 to 9 can be validly placed in `(row, col)` to lead to a solution, return `False` (this triggers backtracking in the previous call).
- **Helper function `isSafe(grid, row, col, num)`:** Checks if `num` can be placed at `grid[row][col]` without violating Sudoku rules.

---

## Chapter 17: Greedy Algorithms

### 17.1 Concept: Making locally optimal choices hoping for a global optimum

- **Greedy Algorithm:** An algorithmic paradigm that builds up a solution piece by piece, always choosing the next piece that offers the most obvious and immediate benefit (locally optimal choice) at each step.
- The core idea is to make a choice that looks best _at the moment_ without considering future consequences or backtracking on previous choices.
- It hopes that by making these locally optimal choices, it will arrive at a globally optimal solution for the entire problem.
- Greedy algorithms do not always yield globally optimal solutions for all problems (e.g., 0/1 Knapsack, Traveling Salesperson Problem). However, for certain classes of problems, they are proven to provide the global optimum and are often very efficient.

### 17.2 When to Use Greedy? (Optimal Substructure, Greedy Choice Property)

For a greedy algorithm to work correctly and provide a globally optimal solution, the problem must typically exhibit two key characteristics:

1.  **Greedy Choice Property:**

    - This property means that a globally optimal solution can be achieved by making a locally optimal (greedy) choice.
    - In other words, making the choice that seems best at the current moment, without considering future steps, will lead to an overall optimal solution. The choice made at one step does not prevent us from reaching the global optimum.
    - Proving this often involves showing that the greedy choice is part of _some_ optimal solution, and then using induction.

2.  **Optimal Substructure:**
    - A problem exhibits optimal substructure if an optimal solution to the overall problem contains within it optimal solutions to its subproblems.
    - After making a greedy choice, the remaining problem (if any) must also have an optimal solution that can be found by applying the same greedy strategy to it.
    - (This property is also shared with Dynamic Programming, but the key difference is how choices are made. DP explores multiple choices for subproblems, while Greedy commits to one.)

_Proving a greedy algorithm's correctness can be non-trivial and often involves an "exchange argument" (assume there's an optimal solution that doesn't use the greedy choice, then show you can swap elements to include the greedy choice without making the solution worse, or even making it better, until it matches the greedy solution)._

### 17.3 Common Greedy Problems (TCS/Infosys Focus)

#### 17.3.1 Activity Selection Problem / N meetings in one room

- **Problem:** Given N activities, each with a start time and a finish time. Select the maximum number of non-overlapping activities that can be performed by a single person (or in a single room), assuming that a person can only work on one activity at a time.
- **Greedy Choice:** Sort the activities based on their **finish times** in ascending order.
- **Algorithm:**

  1.  Sort the activities by their finish times.
  2.  Select the first activity from this sorted list (the one with the earliest finish time). Add it to your set of selected activities.
  3.  Keep track of the finish time of the last activity selected.
  4.  Iterate through the rest of the sorted activities. For each activity, if its start time is greater than or equal to the finish time of the last selected activity, then select this activity, add it to your set, and update the finish time of the last selected activity.

  ```python
  def activity_selection(activities_with_times): # activities is list of (start_time, finish_time) tuples
      if not activities_with_times:
          return 0, [] # Returns count and list of (start, finish) for selected

      # Sort activities by their finish times (second element of tuple)
      activities_with_times.sort(key=lambda x: x[1])

      count_selected = 0
      selected_activities_list = []

      # Select the first activity
      if activities_with_times: # Ensure list is not empty after potential sort
          selected_activities_list.append(activities_with_times[0])
          count_selected = 1
          last_activity_finish_time = activities_with_times[0][1]

          # Iterate through the rest of the activities
          for i in range(1, len(activities_with_times)):
              current_activity_start_time = activities_with_times[i][0]
              if current_activity_start_time >= last_activity_finish_time:
                  selected_activities_list.append(activities_with_times[i])
                  count_selected += 1
                  last_activity_finish_time = activities_with_times[i][1]

      return count_selected, selected_activities_list
  ```

  - **Complexity:** O(N log N) (dominated by the sorting step). If the activities are already sorted by finish times, the selection process is O(N).

#### 17.3.2 Fractional Knapsack Problem

- **Problem:** You are given `N` items, each with a weight `w_i` and a value `v_i`. You have a knapsack with a maximum weight capacity `W`. Your goal is to select items (or fractions of items) to put into the knapsack such that the total value of the items in the knapsack is maximized, without exceeding the knapsack's capacity.
- **Greedy Choice:** Calculate the value-to-weight ratio (`value / weight`) for each item. Always pick the item (or fraction of an item) with the highest value-to-weight ratio first.
- **Algorithm:**

  1.  For each item, calculate its value-per-unit-weight (ratio = `value / weight`).
  2.  Sort the items in descending order based on this ratio.
  3.  Initialize `total_value_in_knapsack = 0.0` and `current_weight_in_knapsack = 0.0`.
  4.  Iterate through the sorted items:
      - If the current item can be fully added without exceeding capacity `W` (i.e., `current_weight_in_knapsack + item.weight <= W`):
        - Take the whole item: Add its full value to `total_value_in_knapsack`. Add its full weight to `current_weight_in_knapsack`.
      - Else (the current item cannot be fully added):
        - Calculate the remaining capacity: `remaining_capacity = W - current_weight_in_knapsack`.
        - Take a fraction of the current item: `fraction_to_take = remaining_capacity / item.weight`.
        - Add `item.value * fraction_to_take` to `total_value_in_knapsack`.
        - Set `current_weight_in_knapsack = W` (knapsack is now full).
        - Break the loop (since knapsack is full).

  ```python
  def fractional_knapsack(items_data, capacity_W): # items_data is list of (value, weight)
      # Create a list of items with their value-to-weight ratio
      items_with_ratio = []
      for i, (value, weight) in enumerate(items_data):
          if weight == 0: # Handle items with zero weight
              # If value > 0, it's infinitely valuable if capacity allows any item.
              # This needs specific problem rule. Assuming weight > 0 for standard problems.
              # If allowed, these could be prioritized.
              ratio = float('inf') if value > 0 else 0.0
          else:
              ratio = value / weight
          items_with_ratio.append({'value': value, 'weight': weight, 'ratio': ratio, 'id': i})

      # Sort items by their value-to-weight ratio in descending order
      items_with_ratio.sort(key=lambda x: x['ratio'], reverse=True)

      total_value = 0.0

      for item in items_with_ratio:
          if capacity_W == 0: # Knapsack is full
              break

          # If the item fits completely
          if item['weight'] <= capacity_W:
              total_value += item['value']
              capacity_W -= item['weight']
          else:
              # Take a fraction of the item
              fraction = capacity_W / item['weight']
              total_value += item['value'] * fraction
              capacity_W = 0 # Knapsack is now full
              break

      return total_value
  ```

  - **Complexity:** O(N log N) (dominated by sorting the items based on their ratios). The iteration is O(N).

#### 17.3.3 Huffman Coding (Conceptual)

- **Problem:** Given a set of characters and their frequencies of occurrence in a text, find a prefix-free binary code (a binary string for each character) such that no character's code is a prefix of another character's code. The goal is to minimize the total number of bits required to encode the text (i.e., minimize the expected codeword length).
- **Use Case:** Lossless data compression.
- **Greedy Choice:** At each step, combine the two characters (or existing combined subtrees) that have the smallest frequencies.
- **Algorithm:**
  1.  Create a leaf node for each unique character and assign its frequency as its weight.
  2.  Use a min-priority queue (min-heap) to store these nodes, where the priority is the frequency (weight).
  3.  While there is more than one node in the priority queue:
      a. Extract the two nodes with the minimum frequencies from the priority queue (say `node1` and `node2`).
      b. Create a new internal node. Make `node1` and `node2` its children. The frequency (weight) of this new internal node is the sum of the frequencies of `node1` and `node2`.
      c. Insert this new internal node back into the priority queue.
  4.  The single node remaining in the priority queue is the root of the Huffman tree.
  5.  To generate the Huffman codes for each character: Traverse the Huffman tree from the root to each leaf node (character node). Assign '0' to edges leading to a left child and '1' to edges leading to a right child. The sequence of 0s and 1s along the path from the root to a leaf forms the Huffman code for that character.
- **TCS/Infosys Focus:** Conceptual understanding is key:
  - Purpose: Data compression by assigning shorter codes to more frequent characters.
  - Greedy strategy: Merging two least frequent items/subtrees.
  - Use of a min-heap to efficiently find least frequent items.
  - Property: Prefix-free codes.
  - _Full implementation of building the tree and then generating codes might be too extensive for a standard interview slot unless simplified._

#### 17.3.4 Job Sequencing with Deadlines (Conceptual)

- **Problem:** Given a set of `N` jobs, where each job `j_i` has a deadline `d_i` and an associated profit `p_i`. Each job takes one unit of time to complete. The goal is to find a sequence of jobs that can be completed by their respective deadlines such that the total profit earned is maximized.
- **Greedy Choice:** Process jobs with higher profits first.
- **Algorithm:**
  1.  Sort all jobs in decreasing order of their profit.
  2.  Initialize a result schedule (e.g., an array representing time slots, initially all empty/available). The size of this schedule array can be up to the maximum deadline among all jobs.
  3.  Iterate through the sorted jobs (highest profit first):
      - For the current job `j_i` with profit `p_i` and deadline `d_i`:
        - Try to find the latest possible available time slot `t` such that `1 <= t <= d_i` and slot `t` is currently empty in the schedule. This is done by checking from `d_i` (or `min(max_deadline_overall, d_i)`) down to slot 1.
        - If such an available slot `t` is found:
          - Schedule job `j_i` in slot `t`.
          - Add `p_i` to the total profit.
          - Mark slot `t` as occupied.
  4.  A Disjoint Set Union (DSU) data structure can be used to optimize the process of finding the latest available time slot efficiently. Each set in DSU would represent a contiguous block of available slots.
- **TCS/Infosys Focus:** Understanding the greedy strategy: prioritize higher profit jobs and try to schedule them as late as possible within their deadlines to keep earlier slots free for other potentially high-profit jobs with earlier deadlines. The DSU optimization is more advanced.

---

## Chapter 18: Dynamic Programming (DP)

### 18.1 Concept: Overlapping Subproblems, Optimal Substructure

- **Dynamic Programming (DP):** An algorithmic optimization technique used for solving complex problems by breaking them down into simpler, **overlapping subproblems**. The key idea is to solve each subproblem only once and store its result (typically in an array or hash map, often called a "DP table" or "memo"). When the same subproblem is encountered again, its pre-computed result is retrieved instead of re-computing it, thus saving computation time.
- DP is applicable when a problem exhibits two fundamental characteristics:

  1.  **Overlapping Subproblems:** A problem has overlapping subproblems if finding its solution involves solving the same subproblems multiple times. For example, in the naive recursive calculation of Fibonacci numbers, `fib(n) = fib(n-1) + fib(n-2)`, `fib(n-2)` is computed independently by both the `fib(n-1)` call and the direct call from `fib(n)`.
  2.  **Optimal Substructure:** A problem is said to have optimal substructure if an optimal solution to the overall problem can be constructed from the optimal solutions of its subproblems. If you make an optimal choice at one step, the remaining subproblem must also be solved optimally to achieve an overall optimal solution.

- **DP vs. Divide and Conquer:** Both break problems into subproblems. However, in Divide and Conquer (e.g., Merge Sort, Quick Sort), the subproblems are typically disjoint (independent). In DP, the subproblems overlap.
- **DP vs. Greedy:** Both often deal with optimization problems and may use optimal substructure. Greedy makes a locally optimal choice at each step, committing to it without looking back. DP explores all possible choices for subproblems (or uses stored results of these choices) to ensure global optimality.

### 18.2 Techniques:

DP problems are generally solved using one of two approaches:

#### 18.2.1 Memoization (Top-Down DP)

- This approach is essentially an optimized version of a standard recursive solution.
- **How it works:**
  1.  Write a recursive function to solve the problem.
  2.  Add a mechanism (e.g., a dictionary or an array, often called `memo` or `cache`) to store the results of subproblems that have already been solved.
  3.  Before making a recursive call for a subproblem, check if its solution is already in the `memo`.
      - If yes, return the stored result.
      - If no, compute the result recursively, store it in the `memo` for future use, and then return it.
- This approach solves subproblems "on demand" as they are encountered from the top-level problem down to the base cases.
- **General Structure:**

  ```python
  memo_cache = {} # e.g., a dictionary

  def solve_dp_memoized(params_defining_subproblem):
      # Create a unique key for the current subproblem state
      memo_key = tuple(params_defining_subproblem) # Or any hashable representation

      if memo_key in memo_cache:
          return memo_cache[memo_key]

      if is_base_case(params_defining_subproblem):
          result = solve_base_case_directly(params_defining_subproblem)
      else:
          # Decompose into smaller subproblems and make recursive calls
          # result = logic_combining_results_of(
          #     solve_dp_memoized(subproblem1_params),
          #     solve_dp_memoized(subproblem2_params),
          #     ...
          # )
          pass # Placeholder for problem-specific recursive logic

      memo_cache[memo_key] = result
      return result
  ```

#### 18.2.2 Tabulation (Bottom-Up DP)

- This approach is iterative and involves building up a table (usually 1D or 2D array, often called `dp`) of solutions to subproblems.
- **How it works:**
  1.  Identify the subproblems and the order in which they should be solved. Typically, you start with the smallest, simplest subproblems (base cases).
  2.  Create a DP table of appropriate size to store the solutions to subproblems.
  3.  Initialize the table entries corresponding to the base cases.
  4.  Iterate through the subproblems in the determined order. For each subproblem, compute its solution using the already computed solutions of smaller/previous subproblems stored in the DP table.
  5.  The final entry in the DP table corresponding to the original problem size/state will be the answer.
- This approach systematically fills the DP table from the "bottom" (base cases) up to the desired solution.
- **General Structure:**

  ```python
  # dp_table = array_or_matrix_of_appropriate_size(...)

  # Initialize base cases in dp_table
  # E.g., dp_table[0] = base_value_0
  # E.g., dp_table[0][j] = base_value_for_row_0_col_j
  # E.g., dp_table[i][0] = base_value_for_col_0_row_i

  # Iterate to fill the dp_table based on recurrence relation
  # for i from ... :
  #     for j from ... : (if 2D DP)
  #         # dp_table[i][j] = formula_using(dp_table[prev_i_1][prev_j_1],
  #         #                                dp_table[prev_i_2][prev_j_2], ...)
  #         pass # Placeholder for problem-specific iterative logic

  # return dp_table[index_for_original_problem]
  ```

- **Memoization vs. Tabulation:**
  - **Ease of Coding:** Memoization is often easier to code if you can first devise a plain recursive solution, as it's a direct enhancement. Tabulation requires careful thought about the order of iteration and table dimensions.
  - **Subproblems Solved:** Memoization only solves subproblems that are actually reached by the recursive calls from the top problem. Tabulation typically solves all subproblems in a defined range, some of which might not be strictly necessary for the final answer to the specific input (but are part of the general solution structure).
  - **Performance:** Tabulation can sometimes be slightly faster due to avoiding recursion overhead (function call stack). However, for some problems, if many subproblems are never reached, memoization might be faster by avoiding computation for those.
  - **Stack Overflow:** Memoization (being recursive) can hit Python's recursion depth limit for problems with deep recursion chains. Tabulation (being iterative) avoids this.

### 18.3 Common DP Problems (Focus on identification and basic recurrences for TCS/Infosys)

The key for TCS/Infosys interviews is often to identify if a problem can be solved using DP and to explain the state definition and recurrence relation. Full optimized code might be expected for simpler DP problems.

#### 18.3.1 Fibonacci Series (DP approach)

- **Problem:** Find the Nth Fibonacci number, where `F(0) = 0, F(1) = 1`, and `F(n) = F(n-1) + F(n-2)` for `n > 1`.
- **Overlapping Subproblems:** Naive recursion recomputes `F(k)` many times.
- **Optimal Substructure:** `F(n)` is built from optimal solutions of `F(n-1)` and `F(n-2)`.
- **Memoization (Top-Down):**
  ```python
  def fib_memo(n):
      memo = {0: 0, 1: 1} # Cache for results
      def _fib(k):
          if k in memo:
              return memo[k]
          # Recursive step
          memo[k] = _fib(k-1) + _fib(k-2)
          return memo[k]
      if n < 0: raise ValueError("Input must be non-negative")
      return _fib(n)
  ```
- **Tabulation (Bottom-Up):**

  ```python
  def fib_tabulation(n):
      if n < 0: raise ValueError("Input must be non-negative")
      if n <= 1:
          return n

      dp = [0] * (n + 1) # dp[i] will store F(i)
      # Base cases
      dp[0] = 0
      dp[1] = 1

      # Fill table iteratively
      for i in range(2, n + 1):
          dp[i] = dp[i-1] + dp[i-2]

      return dp[n]

  # Space optimized tabulation (only need last two values)
  def fib_tab_optimized_space(n):
      if n < 0: raise ValueError("Input must be non-negative")
      if n <= 1:
          return n

      a, b = 0, 1 # Represents F(i-2) and F(i-1) respectively
      for _ in range(2, n + 1):
          next_fib = a + b
          a = b      # Update a to previous b
          b = next_fib # Update b to current fib
      return b # b holds F(n)
  ```

  - **Complexity (DP versions):**
    - Time: O(N) (each Fibonacci number up to N is computed once).
    - Space: O(N) for memoization (recursion stack + memo dict) or standard tabulation (DP array). O(1) for space-optimized tabulation.

#### 18.3.2 Climbing Stairs / Ways to reach Nth stair

- **Problem:** You are climbing a staircase. It takes `n` steps to reach the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
- **Recursive Relation:** `ways(n) = ways(n-1)` (if the last step was 1 stair) `+ ways(n-2)` (if the last step was 2 stairs). This is structurally identical to the Fibonacci sequence.
- **Base Cases:**
  - `ways(0) = 1` (one way to be at the 0th stair: do nothing - often used if starting at 0).
  - `ways(1) = 1` (one way to reach the 1st stair: take one 1-step).
  - `ways(2) = 2` (ways: 1+1 or 2).
- **Tabulation Approach (similar to Fibonacci):**

  ```python
  def climb_stairs_dp(n):
      if n <= 0: return 0 # Or 1 if n=0 is considered a valid way (problem dependent)
      if n == 1: return 1
      if n == 2: return 2 # (1,1), (2)

      # dp[i] will store the number of ways to reach stair i
      dp = [0] * (n + 1)
      dp[1] = 1
      dp[2] = 2

      for i in range(3, n + 1):
          dp[i] = dp[i-1] + dp[i-2]

      return dp[n]
  ```

  - **Complexity:** Time O(N), Space O(N) (can be optimized to O(1) like Fibonacci).

#### 18.3.3 0/1 Knapsack Problem (Conceptual or simple recurrence)

- **Problem:** Given `N` items, each with a weight `w_i` and a value `v_i`. You have a knapsack with a maximum weight capacity `W`. Determine the subset of items to include in the knapsack such that the total value is maximized, and the sum of their weights does not exceed `W`. You **cannot take fractions** of items (either take the whole item or leave it).
- **DP State:** `dp[i][cap]` = maximum value that can be obtained using items from index `0` up to `i-1` (i.e., the first `i` items, if 0-indexed items) with a knapsack of current capacity `cap`.
- **Recursive Relation (considering item `i-1` with `weights[i-1]` and `values[i-1]`):**
  For each item `i` (using 0-based indexing for `weights` and `values` arrays, so `dp` table might be `n+1` by `W+1`):
  - `dp[item_idx+1][current_capacity]`
  - **Option 1: Exclude item `item_idx`:**
    The value is the same as the max value obtainable without this item, using the same capacity: `dp[item_idx][current_capacity]`.
  - **Option 2: Include item `item_idx` (only if `weights[item_idx] <= current_capacity`):**
    The value is `values[item_idx] + dp[item_idx][current_capacity - weights[item_idx]]` (value of current item + max value from previous items with remaining capacity).
  - `dp[item_idx+1][current_capacity] = max(Option 1, Option 2_if_possible_else_Option1)`
- **Base Cases:**
  - `dp[0][cap] = 0` for all `cap` (if no items are considered, value is 0).
  - `dp[i][0] = 0` for all `i` (if knapsack capacity is 0, value is 0).
- **Tabulation Approach:**

  ```python
  def knapsack_01_dp(values, weights, capacity_W):
      n = len(values)
      # dp[i][w] will store the maximum value using items up to index i-1
      # with a knapsack of capacity w
      dp = [[0 for _ in range(capacity_W + 1)] for _ in range(n + 1)]

      for i in range(1, n + 1): # Iterate through items (1-indexed for dp table)
          item_weight = weights[i-1] # 0-indexed access for actual weights/values
          item_value = values[i-1]
          for w_cap in range(capacity_W + 1): # Iterate through capacities
              # Option 1: Don't include the current item (i-1)
              value_without_current_item = dp[i-1][w_cap]

              # Option 2: Include the current item (i-1), if it fits
              value_with_current_item = 0
              if item_weight <= w_cap:
                  value_with_current_item = item_value + dp[i-1][w_cap - item_weight]

              dp[i][w_cap] = max(value_without_current_item, value_with_current_item)

      return dp[n][capacity_W]
  ```

- **Complexity:**
  - Time: O(N \* W) (N items, W capacity levels).
  - Space: O(N \* W) for the DP table.
- **Space Optimization:** Notice that `dp[i][...]` only depends on `dp[i-1][...]`. So, the space complexity can be optimized to O(W) by using only two rows of the DP table, or even a single 1D array (iterating `w_cap` carefully from `W` down to `weights[i-1]` to use `dp[i-1]` values before they are overwritten for current `i`).
- _TCS/Infosys: Understanding the core concept, the difference from Fractional Knapsack (Greedy), and being able to explain the recurrence relation is usually sufficient. Full implementation might be asked for simpler versions._

#### 18.3.4 Longest Common Subsequence (LCS) (Conceptual or simple recurrence)

- **Problem:** Given two strings, `s1` and `s2`, find the length of the longest subsequence that is present in both strings. A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements. (e.g., "ace" is a subsequence of "abcde").
- **DP State:** `dp[i][j]` = length of the LCS of the prefix `s1[0...i-1]` (first `i` characters of `s1`) and the prefix `s2[0...j-1]` (first `j` characters of `s2`).
- **Recursive Relation:**
  - If `s1[i-1] == s2[j-1]` (the last characters of the current prefixes match):
    The LCS includes this common character. So, `dp[i][j] = 1 + dp[i-1][j-1]` (1 + LCS of the strings excluding these last characters).
  - Else (if `s1[i-1] != s2[j-1]`):
    The LCS does not include both these characters simultaneously. It's the longer of the LCS found by:
    1. Excluding the last character of `s1`: `dp[i-1][j]`.
    2. Excluding the last character of `s2`: `dp[i][j-1]`.
       So, `dp[i][j] = max(dp[i-1][j], dp[i][j-1])`.
- **Base Cases:**
  - `dp[0][j] = 0` for all `j` (LCS of an empty string `s1` and any prefix of `s2` is 0).
  - `dp[i][0] = 0` for all `i` (LCS of any prefix of `s1` and an empty string `s2` is 0).
- **Tabulation Approach:**

  ```python
  def lcs_dp(s1, s2):
      m = len(s1)
      n = len(s2)

      # dp[i][j] will store the length of LCS of s1[0...i-1] and s2[0...j-1]
      dp = [[0 for _ in range(n + 1)] for _ in range(m + 1)]

      for i in range(1, m + 1):
          for j in range(1, n + 1):
              if s1[i-1] == s2[j-1]: # Last characters match
                  dp[i][j] = 1 + dp[i-1][j-1]
              else: # Last characters don't match
                  dp[i][j] = max(dp[i-1][j], dp[i][j-1])

      return dp[m][n] # Length of LCS of full s1 and s2
  ```

- **Complexity:**
  - Time: O(M \* N) (where M and N are the lengths of the strings).
  - Space: O(M \* N) for the DP table. (This can also be space-optimized to O(min(M,N)) if only the length is needed, not the subsequence itself).

#### 18.3.5 Edit Distance (Levenshtein Distance) (Conceptual)

- **Problem:** Given two strings, `word1` and `word2`, find the minimum number of single-character edit operations (insertions, deletions, or substitutions) required to transform `word1` into `word2`.
- **DP State:** `dp[i][j]` = minimum edit distance to transform the prefix `word1[0...i-1]` (first `i` characters of `word1`) into the prefix `word2[0...j-1]` (first `j` characters of `word2`).
- **Recursive Relation:**
  - If `word1[i-1] == word2[j-1]` (last characters match):
    No operation is needed for these characters. `dp[i][j] = dp[i-1][j-1]`.
  - Else (if `word1[i-1] != word2[j-1]`):
    We need to perform one operation. Consider the three possibilities:
    1.  **Insert:** Insert `word2[j-1]` into `word1` to match. Cost is `1 + dp[i][j-1]` (cost to transform `word1[0...i-1]` to `word2[0...j-2]`, then insert `word2[j-1]`).
    2.  **Delete:** Delete `word1[i-1]` from `word1`. Cost is `1 + dp[i-1][j]` (cost to transform `word1[0...i-2]` to `word2[0...j-1]`, then delete `word1[i-1]`).
    3.  **Substitute:** Substitute `word1[i-1]` with `word2[j-1]`. Cost is `1 + dp[i-1][j-1]` (cost to transform `word1[0...i-2]` to `word2[0...j-2]`, then substitute).
        `dp[i][j] = 1 + min(dp[i][j-1], dp[i-1][j], dp[i-1][j-1])`.
- **Base Cases:**
  - `dp[i][0] = i` for all `i` (to transform `word1[0...i-1]` to an empty string, `i` deletions are needed).
  - `dp[0][j] = j` for all `j` (to transform an empty string to `word2[0...j-1]`, `j` insertions are needed).
- **Complexity:** Time O(M*N), Space O(M*N). (Space can be optimized).

#### 18.3.6 Coin Change Problem (Number of ways / Min coins)

- **Problem Variation 1: Minimum Coins to Make Amount**

  - Given a list of coin denominations (assume infinite supply of each) and a target amount, find the minimum number of coins required to make that amount.
  - **DP State:** `dp[k]` = minimum number of coins needed to make amount `k`.
  - **Recursive Relation:** For each amount `a` from 1 to `target_amount`:
    `dp[a] = min(1 + dp[a - coin_val])` for all `coin_val` in `coins` such that `a - coin_val >= 0` and `dp[a - coin_val]` is not infinity (meaning `a - coin_val` is achievable).
  - **Base Case:** `dp[0] = 0` (0 coins are needed to make amount 0). Initialize other `dp` entries to infinity.

  ```python
  def min_coins_dp(coins, amount):
      # dp[i] will store the minimum number of coins to make amount i
      dp = [float('inf')] * (amount + 1)
      dp[0] = 0 # Base case

      for i in range(1, amount + 1): # For each amount from 1 to target amount
          for coin_val in coins:
              if i - coin_val >= 0 and dp[i - coin_val] != float('inf'):
                  dp[i] = min(dp[i], 1 + dp[i - coin_val])

      return dp[amount] if dp[amount] != float('inf') else -1 # -1 if amount cannot be made
  ```

  - **Complexity:** Time O(NumCoins \* Amount), Space O(Amount).

- **Problem Variation 2: Number of Ways to Make Change (Combinations, order doesn't matter)**

  - Given coin denominations (infinite supply) and a target amount, find the number of distinct combinations of coins that sum up to the amount.
  - **DP State:** `dp[k]` = number of ways (combinations) to make amount `k`.
  - **Recursive Relation:** Iterate through each coin. For a `coin_val`, it can contribute to making amounts `j` from `coin_val` up to `target_amount`. The number of ways to make amount `j` using this `coin_val` is added from the number of ways to make `j - coin_val`.
  - **Base Case:** `dp[0] = 1` (there is one way to make amount 0: by using no coins).

  ```python
  def coin_change_ways_combinations_dp(coins, amount):
      # dp[i] will store the number of ways to make up amount i
      dp = [0] * (amount + 1)
      dp[0] = 1 # Base case: one way to make amount 0 (use no coins)

      # Iterate through each coin denomination
      for coin_val in coins:
          # For each coin, update the dp table for amounts it can contribute to
          for current_sum in range(coin_val, amount + 1):
              dp[current_sum] += dp[current_sum - coin_val]

      return dp[amount]
  ```

  - **Complexity:** Time O(NumCoins \* Amount), Space O(Amount).
  - _(Note: If permutations of coins are counted, the inner loop would be over amounts and outer over coins, or vice-versa, but the logic changes slightly in terms of how subproblems are defined and combined.)_

---

# Ace Your TCS Prime & Infosys DSE Interviews: The Ultimate Python DSA Guide

... (Content from Chapter 1 up to and including 18.3.6 ends here) ...

---

## Chapter 19: Bit Manipulation

Bit manipulation involves performing operations directly on the binary representations (bits) of numbers. This can lead to very efficient solutions for certain problems, often with O(1) or O(log N) complexity where N is the value of the number, or O(number of bits).

### 19.1 Basic Bitwise Operators in Python (`&`, `|`, `^`, `~`, `<<`, `>>`)

- **`&` (Bitwise AND):**

  - Result bit is 1 if both corresponding operand bits are 1; otherwise, it's 0.
  - Example: `0b1010 & 0b1100  ->  0b1000` (decimal: 10 & 12 -> 8)
  - Use case: Checking if a bit is set, clearing bits.

- **`|` (Bitwise OR):**

  - Result bit is 1 if at least one of the corresponding operand bits is 1; otherwise, it's 0.
  - Example: `0b1010 | 0b1100  ->  0b1110` (decimal: 10 | 12 -> 14)
  - Use case: Setting bits.

- **`^` (Bitwise XOR - Exclusive OR):**

  - Result bit is 1 if the corresponding operand bits are different; otherwise, it's 0.
  - Example: `0b1010 ^ 0b1100  ->  0b0110` (decimal: 10 ^ 12 -> 6)
  - Key Properties:
    - `x ^ x = 0` (XORing a number with itself yields zero)
    - `x ^ 0 = x` (XORing a number with zero yields the number itself)
    - XOR is commutative (`a ^ b = b ^ a`) and associative (`a ^ (b ^ c) = (a ^ b) ^ c`).
  - Use case: Toggling bits, finding unique elements, swapping numbers without a temp variable.

- **`~` (Bitwise NOT / Complement):**

  - Inverts all the bits of its single operand (0s become 1s, 1s become 0s).
  - In Python, integers have arbitrary precision. For positive integers, `~x` is `-(x+1)` due to how Python handles negative numbers (internally it's like infinite two's complement).
  - Example: `~0b00001010` (which is 10) results in `...11110101`. If interpreted as a signed integer (e.g., in a fixed-width system or by Python's behavior), this is -11.
  - To get a bitmask of `k` ones, you might use `(1 << k) - 1`. To get the complement within a certain bit width (e.g., 8 bits for `x`), you might do `(~x) & 0xFF`.

- **`<<` (Left Shift):**

  - Shifts the bits of the first operand to the left by the number of positions specified by the second operand. The rightmost new bits are filled with 0s.
  - Effectively multiplies the number by `2^n` (where `n` is the number of shifts).
  - Example: `0b00001010 << 2  ->  0b00101000` (decimal: 10 << 2 -> 40)

- **`>>` (Right Shift):**
  - Shifts the bits of the first operand to the right by the number of positions specified by the second operand.
  - For positive numbers, the leftmost new bits are filled with 0s (this is a **logical right shift**).
  - For negative numbers in Python (and many languages using two's complement), it performs an **arithmetic right shift**, meaning the sign bit (the leftmost bit) is copied into the new leftmost positions to preserve the sign of the number.
  - Effectively divides the number by `2^n` (integer division).
  - Example (positive): `0b00101000 >> 2  ->  0b00001010` (decimal: 40 >> 2 -> 10)
  - Example (negative, Python): `-40 >> 2` would be `-10`. (`bin(-40)` gives `'-0b101000'`, `bin(-10)` gives `'-0b1010'`).

### 19.2 Common Bit Manipulation Techniques & Problems (TCS/Infosys may ask simpler ones)

#### 19.2.1 Check if a number is Even or Odd

- An odd number always has its least significant bit (LSB) set to 1. An even number has its LSB set to 0.
- **Technique:** `(number & 1)`

  - If `(number & 1) == 1`, the number is odd.
  - If `(number & 1) == 0`, the number is even.

  ```python
  def is_odd(n):
      return (n & 1) == 1

  def is_even(n):
      return (n & 1) == 0
  ```

#### 19.2.2 Check if Kth bit is Set (0-indexed from right)

- To check if the k-th bit (from the right, starting at index 0) of a number `n` is set (i.e., is 1).
- **Technique:** Create a mask with only the k-th bit set (`1 << k`). Then, AND this mask with the number `n`. If the result is non-zero, the k-th bit was set.
  - Mask: `mask = 1 << k`
  - Check: `(n & mask) != 0` or `(n & (1 << k)) != 0`
  ```python
  def is_kth_bit_set(n, k):
      # k is 0-indexed from the right
      if k < 0: return False # Or raise error
      mask = 1 << k
      return (n & mask) != 0
  ```

#### 19.2.3 Set/Clear/Toggle Kth bit

- **Set Kth bit (make it 1):**
  - Technique: `number | (1 << k)`
  ```python
  def set_kth_bit(n, k):
      return n | (1 << k)
  ```
- **Clear Kth bit (make it 0):**
  - Technique: `number & (~(1 << k))`
  - Create a mask with the k-th bit as 0 and all other bits as 1 (`~(1 << k)`). ANDing with this mask clears the k-th bit.
  ```python
  def clear_kth_bit(n, k):
      return n & (~(1 << k))
  ```
- **Toggle Kth bit (flip it: 0->1, 1->0):**
  - Technique: `number ^ (1 << k)`
  ```python
  def toggle_kth_bit(n, k):
      return n ^ (1 << k)
  ```

#### 19.2.4 Count Set Bits (Brian Kernighan's Algorithm, Lookup Table)

- **Problem:** Count the number of bits that are set to 1 in the binary representation of an integer (also known as Hamming weight or population count).
- **Method 1: Loop and Check LSB (Naive)**
  Iterate while number > 0. In each step, check if LSB is 1 (`num & 1`), then right shift `num >>= 1`. O(log N) or O(number of bits in N).
- **Method 2: Brian Kernighan's Algorithm**

  - **Technique:** In a loop, `n = n & (n - 1)`. This operation clears the least significant set bit of `n`. Count how many times this operation can be performed until `n` becomes 0.

  ```python
  def count_set_bits_kernighan(n):
      count = 0
      # Handle negative numbers if needed, usually applied to non-negative
      if n < 0: n = abs(n) # Or handle based on problem's two's complement expectation

      while n > 0:
          n &= (n - 1) # Clears the least significant set bit
          count += 1
      return count
  ```

  - **Complexity (Kernighan):** O(number of set bits in `n`). This is very efficient if `n` has few set bits.

- **Method 3: Python's Built-in**
  ```python
  def count_set_bits_pythonic(n):
      if n < 0:
          # bin() on negative numbers in Python gives a '-' prefix and two's complement style for magnitude
          # e.g. bin(-5) is '-0b101'. Problem context for negative numbers is important.
          # Usually, bit counting is for non-negative.
          return bin(n).count('1') -1 # if you must count for python's negative bin()
      return bin(n).count('1')
  ```
- **Lookup Table (for fixed-width numbers, e.g., 8-bit bytes):** Precompute counts for all possible small numbers (e.g., 0-255) and store in a table. For larger numbers, break them into chunks and use the lookup table.

#### 19.2.5 Find the only non-repeating element in an array where every other element repeats twice (XOR)

- **Problem:** Given an array of integers where every element appears twice except for one element which appears only once. Find that unique element.
- **Technique:** Use the XOR property `x ^ x = 0` and `x ^ 0 = x`.
  XOR all the elements in the array together. The elements that appear twice will XOR to 0 and cancel each other out. The unique element (which appears once) will remain.
  ```python
  def find_single_non_repeating_xor(arr):
      unique_element = 0
      for num in arr:
          unique_element ^= num
      return unique_element
  ```
  - **Complexity:** Time O(N) (one pass through the array). Space O(1).
- **Variation:** Find two non-repeating elements where others repeat twice. (More complex: involves XORing all, then partitioning based on a set bit in the XOR sum, then XORing within partitions).

#### 19.2.6 Power of 2 Check

- **Problem:** Check if a given positive integer `n` is a power of 2 (e.g., 1, 2, 4, 8, 16...).
- **Technique:** A number `n > 0` is a power of 2 if and only if it has exactly one bit set in its binary representation.

  - If `n` is a power of 2 (e.g., `0b00010000`), then `n-1` will have all bits to the right of that single set bit as 1s, and that bit itself as 0 (e.g., `0b00001111`).
  - Therefore, `n & (n-1)` will be `0` if `n` is a power of 2 (and `n > 0`).

  ```python
  def is_power_of_two(n):
      if n <= 0: # Powers of 2 are positive
          return False
      return (n & (n - 1)) == 0
  ```

  - **Complexity:** O(1).

- **Other common bit manipulation questions:**
  - Swap two numbers without a temporary variable (using XOR).
  - Find the missing number in an array of 1 to N (using XOR sum).
  - Find the bitwise AND/OR/XOR of a range of numbers.
  - Convert a number to binary or count trailing zeros.
  - Check if two numbers have opposite signs (`(x ^ y) < 0`).

---

## Chapter 20: Problem-Solving Strategies & Company-Specific Tips

### 20.1 General Approach to Solving Coding Problems

A structured approach can significantly improve performance in coding interviews. Consider the **REACTO** framework or similar methods:

1.  **R - Repeat/Rephrase:**

    - Make sure you understand the problem correctly. Rephrase it in your own words back to the interviewer.
    - "So, if I understand correctly, you want me to find/build/implement X, given Y, with constraints Z?"

2.  **E - Examples:**

    - Work through the examples provided by the interviewer.
    - Create your own examples, especially edge cases:
      - Empty inputs (`[]`, `""`, `None`, `0`).
      - Single element inputs.
      - Inputs with all identical elements.
      - Large inputs (consider time/memory limits).
      - Inputs with negative numbers, zeros, special characters.
      - Pre-sorted or reverse-sorted inputs for sorting/searching problems.
    - This helps clarify ambiguities and test your understanding.

3.  **A - Approach:**

    - Discuss your initial thoughts and approach before coding.
    - Start with a brute-force or naive solution if an optimal one isn't immediately obvious. Explain its logic and complexity. This shows you can solve the problem, even if inefficiently.
    - Then, discuss how to optimize it. Think about:
      - Are there redundant computations?
      - Can a different data structure help (e.g., hash map for lookups, heap for priority)?
      - Does sorting the input help?
      - Common patterns: Two-pointers, sliding window, divide and conquer, greedy, DP, BFS/DFS.
    - Explain the trade-offs of different approaches (e.g., time vs. space).

4.  **C - Code:**

    - Once you and the interviewer agree on an approach, start coding.
    - Write clean, readable, and modular code.
    - Use meaningful variable and function names.
    - Break down complex logic into helper functions if it improves clarity.
    - Think out loud while coding, especially for non-trivial parts. "Now I'm going to iterate through the array to find X..."
    - Handle edge cases identified earlier.

5.  **T - Test:**

    - After writing the code, mentally dry-run it with your examples (including edge cases).
    - Trace the execution for a small, non-trivial example.
    - If there's a bug, debug it systematically. Explain your debugging process.
    - Consider writing actual unit tests if time permits or if it's a take-home assignment.

6.  **O - Optimize & Complexity Analysis:**
    - Analyze the Time and Space Complexity of your final solution. Be precise (e.g., O(N log N) time, O(N) space).
    - Discuss if further optimizations are possible, even if you don't implement them due to time constraints. This shows forward-thinking.

**General Communication:**

- **Ask Clarifying Questions:** Don't assume. If anything is unclear (input format, constraints, expected output for edge cases), ask.
- **Think Out Loud:** Interviewers want to understand your thought process, not just see the final code.
- **Be Proactive:** If you see a potential issue or an alternative, mention it.
- **Manage Time:** Be mindful of the interview duration. If a brute-force solution is taking too long to explain/code, quickly outline it and move to discussing optimizations.

### 20.2 TCS Prime & Infosys DSE/SP Interview Focus

While specific questions vary, these companies generally emphasize:

- **1. Strong Fundamentals:**

  - Solid understanding of core Data Structures (Arrays, Strings, Linked Lists, Stacks, Queues, Trees (BT, BST), Heaps, Hash Tables, Graphs - basic concepts).
  - Proficiency in core Algorithms (Searching, Sorting, Traversals, basic Greedy/DP).
  - Ability to explain _how_ they work and _why_ one is chosen over another.

- **2. Standard DSA Questions:**

  - Expect questions that are variations of common problems found on platforms like LeetCode (Easy/Medium) and GeeksforGeeks.
  - Problems involving array/string manipulation, two-pointers, linked list operations, tree traversals, BST properties, stack/queue applications, and basic graph traversals are frequent.
  - Hashing is very commonly used to optimize solutions.

- **3. Complexity Analysis:**

  - You **must** be able to analyze the Time and Space Complexity of your solutions using Big O notation.
  - Be prepared to explain how you arrived at the complexity.

- **4. Coding Proficiency in Chosen Language (Python):**

  - Write correct, working code.
  - Syntax should be accurate.
  - Use Python's built-in data structures and functions effectively (e.g., `list` methods, `dict`, `set`, `collections.deque`, `heapq`, string methods, list comprehensions where appropriate).
  - Be prepared to implement basic data structures from scratch if asked (e.g., a `Node` class for linked lists/trees, a basic stack/queue).

- **5. Problem Decomposition & Logical Thinking:**

  - Ability to break down a problem into smaller, manageable parts.
  - Clear logical flow in your solution.
  - Handling edge cases demonstrates thoroughness.

- **6. (Sometimes) Basic Puzzles and Logical Reasoning:**

  - Some interview rounds, especially initial ones or those by specific interviewers, might include simple logical puzzles or aptitude-style questions to assess general problem-solving ability.

- **7. (Often) SQL & DBMS Concepts:**

  - For many roles, especially those closer to data handling or full-stack, expect questions on SQL (joins, group by, subqueries, basic DDL/DML) and fundamental DBMS concepts (Normalization, ACID, Keys). (Your DBMS index is a good reference here).

- **8. (Sometimes) OOP Concepts (Python context):**

  - Basic understanding of classes, objects, inheritance, encapsulation, polymorphism as they apply in Python. Questions might be about defining a class or simple inheritance.

- **9. Projects & Internships (if any):**

  - Be ready to discuss your academic or personal projects in detail: your role, technologies used, challenges faced, and what you learned.
  - This is especially important for behavioral rounds or when discussing your resume.

- **10. Communication and Attitude:**
  - Clear, concise communication is vital.
  - Show enthusiasm and a willingness to learn.
  - Be receptive to feedback or hints from the interviewer.
  - Maintain a positive attitude, even if you struggle with a question.

---

## Chapter 21: Common Python-Specific Interview Questions (related to DSA)

While core DSA concepts are language-agnostic, understanding how they map to Python's features and idiomatic usage can be beneficial in interviews.

### 21.1 `list` vs `tuple`: When to use which? Mutability.

- **`list`:**
  - **Definition:** Ordered, **mutable** (can be changed after creation) sequence of items.
  - **Syntax:** `my_list = [1, 'hello', 3.0]`
  - **Use Cases:**
    - When you need a collection whose elements or size might change (add, remove, modify items).
    - Implementing dynamic arrays, stacks (using `append`/`pop`), or queues (using `collections.deque` is better for queues, but lists can be used with `pop(0)` - though inefficiently).
  - **Mutability Implication:** Cannot be used as dictionary keys or elements in a set (because their hash value would change if the list is modified).
- **`tuple`:**
  - **Definition:** Ordered, **immutable** (cannot be changed after creation) sequence of items.
  - **Syntax:** `my_tuple = (1, 'hello', 3.0)` or `my_tuple = 1, 'hello', 3.0`
  - **Use Cases:**
    - For fixed collections of items that should not change after creation (e.g., coordinates `(x,y)`, RGB colors, records from a database query).
    - When you need a hashable sequence, e.g., as dictionary keys or elements in a set (provided all elements within the tuple are also hashable).
    - Returning multiple values from a function (Python implicitly packs them into a tuple).
  - **Performance:** Tuples can sometimes be slightly more memory efficient and faster to iterate over than lists due to their immutability (CPython can make some optimizations), but this difference is often minor in practice for typical DSA problems. The primary distinction is mutability.
- **Key Interview Question:** "What is the difference between a list and a tuple?" The main answer should revolve around **mutability** and its consequences (e.g., hashability, use as dict keys).

### 21.2 How `dict` and `set` work internally (high-level hashing concept).

- **(Reiteration from Chapter 9 - Hashing, as it's a common Python-specific query):**
- **`dict` (Dictionary / Hash Map):**
  - Stores key-value pairs.
  - Implemented using a hash table.
  - **Keys must be hashable:** This means they must have a `__hash__()` method that returns an integer, and an `__eq__()` method for equality comparison. If `a == b`, then `hash(a)` must equal `hash(b)`. Immutable built-in types like numbers, strings, and tuples (if their elements are hashable) are hashable. Mutable types like lists are not.
  - **Process:** When an item is added, `hash(key)` is computed to find a bucket (index) in the underlying array. The key-value pair is stored there.
  - **Collision Resolution:** Python's `dict` uses open addressing with a custom pseudo-random probing sequence to find an empty slot if a collision occurs (two keys hash to the same initial bucket).
  - **Load Factor & Resizing:** When the dictionary becomes too full (load factor, typically around 2/3), the underlying hash table is resized (usually doubled) and all existing items are rehashed into the new, larger table to maintain efficient O(1) average time complexity for operations.
  - **Order:** Since Python 3.7 (CPython 3.6), dictionaries maintain insertion order. This is now a language specification.
- **`set`:**
  - Stores a collection of unique, hashable elements.
  - Also implemented using a hash table, similar to `dict` but only stores keys (or keys where values are ignored).
  - Similar hashing, collision resolution, and resizing mechanisms as `dict`.
- **Key Interview Point:** Explain hashing, hashability, collisions, and the average O(1) performance. Mentioning insertion order for dicts (Python 3.7+) is a good detail.

### 21.3 Time complexity of common `list`, `dict`, `set` operations in Python.

- **(Reiteration from Chapter 3 and individual data structure chapters):**
- **`list` (Python's dynamic array):**
  - `append(x)`: Amortized O(1) (worst-case O(N) during resize)
  - `pop()` (from end): O(1)
  - `pop(i)` (from index i): O(N-i) -> O(N) worst case
  - `insert(i, x)`: O(N)
  - `x in my_list` (search): O(N)
  - `my_list[i]` (index access): O(1)
  - `del my_list[i]`: O(N)
  - `len(my_list)`: O(1)
  - Slicing `my_list[a:b]`: O(b-a) or O(K) where K is slice length (creates new list).
  - `my_list.sort()`: O(N log N) (Timsort)
- **`dict` (Hash Map):** (N is number of items in dict)
  - `my_dict[key] = val` (insert/update): Average O(1), Worst O(N)
  - `my_dict[key]` (access): Average O(1), Worst O(N)
  - `key in my_dict` (search): Average O(1), Worst O(N)
  - `del my_dict[key]`: Average O(1), Worst O(N)
  - `len(my_dict)`: O(1)
  - Iteration (`for k,v in my_dict.items()`): O(N)
- **`set` (Hash Set):** (N is number of items in set)
  - `my_set.add(x)`: Average O(1), Worst O(N)
  - `x in my_set` (search): Average O(1), Worst O(N)
  - `my_set.remove(x)`: Average O(1), Worst O(N) (raises KeyError if not found)
  - `my_set.discard(x)`: Average O(1), Worst O(N) (does not raise error)
  - `len(my_set)`: O(1)
  - Set operations (union `|`, intersection `&`, difference `-`): Generally O(len(s1) + len(s2)) or related to sizes of operands.

### 21.4 Python's `sort()` vs `sorted()`.

- **`list.sort()` method:**
  - Sorts the list **in-place** (modifies the original list directly).
  - Returns `None`.
  - Can only be used on lists.
  - Example: `my_list = [3, 1, 2]; my_list.sort(); print(my_list)` -> `[1, 2, 3]`
- **`sorted(iterable)` built-in function:**
  - Takes any iterable (list, tuple, string, set, dictionary keys/values/items) as input.
  - Returns a **new sorted list** containing all items from the input iterable.
  - The original iterable is **not modified**.
  - Example: `my_tuple = (3, 1, 2); new_list = sorted(my_tuple); print(new_list)` -> `[1, 2, 3]`; `print(my_tuple)` -> `(3, 1, 2)`
- **Common Parameters:** Both accept optional `key` (a function to be called on each element prior to making comparisons) and `reverse` (boolean, `True` for descending sort) arguments.
- **Algorithm:** Both use Timsort, which is stable and has O(N log N) time complexity on average and worst-case, and O(N) in best-case.

### 21.5 Generators and Iterators (briefly, for memory efficiency).

- **Iterable:** An object capable of returning its members one at a time. Examples: lists, tuples, strings, dictionaries, sets, files. An object is iterable if it implements the `__iter__()` method (which returns an iterator) or the `__getitem__()` method (for sequence-like behavior).
- **Iterator:** An object representing a stream of data. It implements two methods:
  - `__iter__()`: Returns the iterator object itself.
  - `__next__()`: Returns the next item from the stream. When there are no more items, it raises a `StopIteration` exception.
- **Generator:** A special type of iterator that is simpler to create. Python provides two ways to create generators:
  1.  **Generator Functions:** A function that uses the `yield` keyword. When a generator function is called, it returns a generator object (an iterator), but does not start execution immediately. Each time `__next__()` is called on the generator object, the function executes until it hits a `yield` statement. The value yielded is returned, and the function's state (local variables, instruction pointer) is saved. Execution resumes from that point on the next `__next__()` call.
      ```python
      def simple_generator(n):
          for i in range(n):
              yield i * i
      # my_gen = simple_generator(5) -> creates generator object
      # next(my_gen) -> 0
      # next(my_gen) -> 1 ...
      ```
  2.  **Generator Expressions:** Similar syntax to list comprehensions but use parentheses `()` instead of square brackets `[]`. They create a generator object on the fly.
      ```python
      my_gen_expr = (x * x for x in range(5))
      ```
- **Benefit for DSA & Memory Efficiency:**
  - Generators produce items **one at a time** and only **when requested** (lazy evaluation).
  - This is extremely memory efficient for large datasets or potentially infinite sequences, as you don't need to store the entire sequence in memory at once.
  - Example: Processing lines from a very large file, generating Fibonacci numbers one by one.
  - In DSA, if a problem asks to return a large sequence of results but only process them one by one, a generator might be a good fit if full materialization isn't needed.

### 21.6 List Comprehensions: Readability vs. Performance.

- **Syntax:** A concise way to create lists.
  `new_list = [expression for item in iterable if condition]`
- **Benefits:**
  - **Readability:** Often more readable and expressive than equivalent `for` loops with `append` calls, especially for simple transformations or filtering.
  - **Conciseness:** Shorter code.
  - **Performance:** Generally faster than explicit `for` loops + `append` because the iteration and list construction can be optimized at the C level in CPython.
- **When to use with caution (or not use):**
  - **Complex Logic:** If the `expression` or `condition` becomes too complex or involves multiple nested loops and conditions, a traditional `for` loop might be more readable and maintainable.
  - **Side Effects:** While possible to include expressions with side effects, it's generally not idiomatic or good practice. List comprehensions are primarily for creating new lists.
- **Example:**

  ```python
  # Traditional loop
  squares = []
  for x in range(10):
      if x % 2 == 0:
          squares.append(x*x)

  # List comprehension
  squares_lc = [x*x for x in range(10) if x % 2 == 0]
  ```

- _Similar comprehensions exist for sets (`{expression ...}`)_ and dictionaries (`{key_expr: val_expr ...}`).

### 21.7 Deep vs. Shallow Copy in Python collections.

This is crucial when you want to modify a copy of a collection without affecting the original, especially with nested mutable objects.

- **Assignment (`new_var = old_var`):**

  - This does **not** create a copy.
  - `new_var` and `old_var` become two names referring to the **exact same object** in memory.
  - Modifying the object through `new_var` will also reflect when accessing it through `old_var`.

  ```python
  old_list = [1, [2, 3]]
  new_list_assign = old_list
  new_list_assign[0] = 100
  new_list_assign[1].append(4)
  # print(old_list) -> [100, [2, 3, 4]] # Original is changed
  ```

- **Shallow Copy:**

  - Creates a **new top-level object** but populates it with **references** to the same items contained in the original object.
  - Methods: `list.copy()`, slicing `[:]`, `copy.copy()` from the `copy` module.
  - If the items are immutable (numbers, strings, tuples of immutables), a shallow copy behaves like a deep copy for those items.
  - If the items are mutable (e.g., nested lists, custom objects), both the original and the shallow copy will share these inner mutable objects. Modifying an inner mutable object through one variable will affect the other.

  ```python
  import copy
  old_list = [1, [2, 3]]

  # Shallow copy examples
  # new_list_shallow = old_list.copy()
  # new_list_shallow = old_list[:]
  new_list_shallow = copy.copy(old_list)

  new_list_shallow[0] = 100 # Affects only new_list_shallow for the immutable int
  new_list_shallow[1].append(4) # Affects the inner list shared by both!

  # print(old_list) -> [1, [2, 3, 4]]
  # print(new_list_shallow) -> [100, [2, 3, 4]]
  ```

- **Deep Copy:**

  - Creates a **new top-level object** AND **recursively creates new copies of all objects found nested within it**.
  - Method: `copy.deepcopy()` from the `copy` module.
  - The new copy is completely independent of the original, including all nested mutable objects.

  ```python
  import copy
  old_list = [1, [2, 3]]
  new_list_deep = copy.deepcopy(old_list)

  new_list_deep[0] = 100
  new_list_deep[1].append(4)

  # print(old_list) -> [1, [2, 3]] # Original is NOT changed
  # print(new_list_deep) -> [100, [2, 3, 4]]
  ```

- **Interview Relevance:** Understanding this is vital when dealing with data structures that might be modified, passed to functions, or when you need to ensure that changes to one version do not unintentionally affect another. For example, in backtracking, you might pass copies of states or need to revert changes.

---

## Chapter 22: Further Learning & Mock Interviews

### 22.1 Recommended Online Platforms for Practice

Consistent practice is key to mastering DSA.

- **LeetCode ([leetcode.com](https://leetcode.com)):**
  - Vast collection of problems categorized by topic, difficulty, and company tags.
  - Excellent for practicing common interview patterns.
  - Discuss sections for solutions and approaches in various languages.
  - Offers mock interviews.
- **GeeksforGeeks (GFG - [geeksforgeeks.org](https://www.geeksforgeeks.org)):**
  - Extensive articles explaining DSA concepts in depth.
  - Large problem set, often with company-specific tags (very useful for TCS/Infosys).
  - Interview experiences shared by candidates.
- **HackerRank ([hackerrank.com](https://www.hackerrank.com)):**
  - Structured learning paths (e.g., "Interview Preparation Kit").
  - Contests and domain-specific skill tracks.
  - Often used by companies for initial coding assessments.
- **CodeSignal ([codesignal.com](https://codesignal.com), formerly CodeFights):**
  - Features company-sponsored assessment templates.
  - Good for practicing under timed conditions similar to online assessments.
- **InterviewBit ([interviewbit.com](https://www.interviewbit.com)):**
  - Structured preparation modules with time estimates.
  - Focuses on interview-centric problem-solving.
- **HackerEarth ([hackerearth.com](https://www.hackerearth.com)):**
  - Hosts coding challenges, hackathons, and has a practice section.
- **Strategy for TCS/Infosys:**
  - Start with fundamental problems on GFG for core concepts.
  - Move to LeetCode Easy and Medium problems. Focus on problems tagged for these companies or similar service-based/product-service companies.
  - Practice array, string, linked list, basic tree, and hashing problems extensively.
  - Solve problems related to sorting and searching algorithms.
  - Get comfortable with simpler DP and Greedy questions.

### 22.2 Importance of Mock Interviews

Solving problems on your own is different from solving them in an interview setting.

- **Simulate Real Interview Pressure:** Helps you get used to thinking clearly, coding, and communicating under time constraints and observation.
- **Practice Articulation:** This is a skill. Mock interviews force you to explain your thought process, approach, and code to another person, which is what real interviewers want.
- **Get Constructive Feedback:** Identify weaknesses in:
  - Your problem-solving approach (e.g., jumping to code too quickly, not considering edge cases).
  - Your communication skills (e.g., not explaining clearly, being silent for too long).
  - Your coding style or speed.
  - Your handling of hints or questions from the "interviewer."
- **Platforms/Methods for Mock Interviews:**
  - **Pramp ([pramp.com](https://www.pramp.com)):** Free, peer-to-peer mock interviews with matched partners. Good for volume.
  - **Interviewing.io ([interviewing.io](https://interviewing.io)):** Paid service offering anonymous mock interviews with experienced interviewers from top tech companies. High-quality feedback.
  - **LeetCode Mock Interview Section:** Simulates interview sessions with random problems.
  - **Peers/Seniors:** Practice with friends, classmates, or seniors who have experience with technical interviews. Give each other feedback.
  - **Mentorship Platforms:** Some platforms connect you with mentors who can conduct mock interviews.
- **Frequency:** Aim for several mock interviews, especially as you get closer to your actual interviews.

### 22.3 Staying Updated

The tech landscape and interview trends can evolve.

- **Company Career Pages/Tech Blogs:** Companies like Infosys and TCS sometimes share information about their technology focus or hiring initiatives.
- **Read Recent Interview Experiences:** Websites like GeeksforGeeks, LeetCode (Discuss section), Glassdoor, and even LinkedIn posts can provide recent insights into the types of questions being asked by specific companies.
- **Keep Practicing Consistently:** DSA is a skill that erodes without use. Even after you feel prepared, try to solve a few problems each week to stay sharp.
- **Python Language Updates:** While core DSA remains constant, new Python features or idiomatic ways of doing things might emerge. Staying generally aware of Python's evolution is good (e.g., new `collections` types, syntax enhancements).
- **Follow DSA Communities:** Online forums, subreddits (like r/cscareerquestions, r/learnpython), and Discord servers can be good sources for discussion, new problems, and advice.

---

**Final Words:**

Mastering Data Structures and Algorithms is a significant undertaking, but it's a foundational skill for a successful career in software engineering. This guide is intended to provide a structured and comprehensive roadmap for your preparation for TCS Prime and Infosys DSE/SP interviews, with a focus on Python.

Remember:

- **Understand, Don't Just Memorize:** Focus on the underlying principles of each data structure and algorithm.
- **Practice Deliberately:** Quality of practice often matters more than quantity. Understand the solutions, don't just look them up.
- **Analyze Everything:** Always consider time and space complexity.
- **Communicate Clearly:** Your ability to explain your thoughts is as important as your coding ability.

This journey requires dedication and perseverance. Break down your learning into manageable chunks, track your progress, and don't get discouraged by difficult problems. Each one you solve strengthens your skills.

**All the best with your interview preparation and your future career!**
