### Max Worth Problem Description: Maya's String Challenge  

#### Problem Overview:  
Maya loves strings! To test her skills, she is given a set of strings, each associated with a unique **cost** and a **worth** value. The **worth** of a string is calculated as the sum of the place values of its characters (a=1, b=2, ..., z=26). Maya's goal is to create the highest-worth "main string" by selecting and concatenating some of these strings, all while staying within a given **budget**.  

#### The Challenge:  
- Maya can only include strings whose **total cost** does not exceed her budget.  
- Some strings are **contradictory**, meaning they cannot coexist in the main string. If one is included, the other must be excluded.  
- The task is to maximize the **worth** of the main string under these constraints.  

#### Constraints:  
- $1 \leq N, M \leq 50$ (Number of strings and contradictory pairs)  
- $1 \leq \text{Cost of a string} \leq 100$  
- $1 \leq \text{Budget} \leq 500$  
- $1 \leq \text{Length of each string} \leq 20$  
- Strings consist of lowercase alphabets only.  
- Contradictory pairs are not transitive. For instance, if string A contradicts B and B contradicts C, then A does not necessarily contradict C.  

---

### Input Format:  
1. **Line 1**: Two space-separated integers, $N$ (number of strings) and $M$ (number of contradictory pairs).  
2. **Line 2**: $N$ space-separated strings.  
3. **Line 3**: $N$ space-separated integers representing the **cost** of each string.  
4. **Lines 4 to $M+3$**: Each line contains two space-separated strings representing a contradictory pair.  
5. **Line $M+4$**: A single integer representing Maya's **budget**.  

---

### Output Format:  
A single integer representing the **maximum worth** of the main string Maya can achieve.  

---

### Example 1:  

#### Input:  
```
9 5  
kite btech codevita space biscuit earth dog afraid travel  
5 4 8 10 2 18 15 12 11  
kite travel  
codevita earth  
biscuit btech  
space travel  
afraid dog  
10  
```

#### Output:  
```
162  
```

#### Explanation:  
Maya can select the strings `{codevita, biscuit}`, whose costs are $8 + 2 = 10$, which fits her budget. The worth of **codevita** is 79, and the worth of **biscuit** is 83. The total worth is $79 + 83 = 162$, which is the maximum possible.  

---

### Example 2:  

#### Input:  
```
5 5  
crow sky park thursday flying  
6 3 4 9 13  
flying sky  
sky thursday  
crow sky  
park sky  
park flying  
20  
```

#### Output:  
```
221  
```

#### Explanation:  
Maya can select the strings `{crow, park, thursday}`, whose costs are $6 + 4 + 9 = 19$, which fits her budget. The worth of **crow** is 59, **park** is 46, and **thursday** is 116. The total worth is $59 + 46 + 116 = 221$, which is the maximum possible.  

---

### Time Limit:  
1 second