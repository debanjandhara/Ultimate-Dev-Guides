## **Maximum Strength Problem Description**  
### **The Shark-Infested Island Escape**

Hari and his friend are trapped in a virtual island escape game! Their goal is simple yet perilous:  
- **Reach the other island faster than their opponent.**  
- **Arrive with at least some strength remaining (i.e., zero or greater).**

They start on one island, facing a treacherous ocean teeming with sharks of varying strengths. To cross the ocean, they must navigate a grid of paths, each taking a specific amount of time. Swimming across any unit of the ocean reduces their strength by one, regardless of encountering a shark.  

### **The Catch**  
1. **Shark Encounters**:  
   - If Hari encounters a shark, he must fight it.  
   - His strength must be equal to or greater than the shark's.  
   - If successful, his strength will be reduced by the shark's strength.  
   
2. **Time vs. Strength**:  
   - Hari needs to find the fastest path possible while minimizing strength loss.  

### **The Game Matrix**  
- The ocean is represented by a grid, where each cell shows the strength of a lurking shark.  

### **Movement**  
- Hari can only move **horizontally** or **vertically**, never diagonally.  

### **Hari's Mission**  
Help Hari find the optimal path through this shark-infested ocean!  

---

### **Your Task**  
1. Find the amount of **time** it takes to reach the other island using this path.  
2. Find the amount of **strength** Hari will have remaining when he arrives.  
3. If no feasible path exists (where Hari maintains at least zero strength), print **"Not Possible."**

---

### **Constraints**  
- $3 \leq N, M \leq 100$  
- $0 \leq \text{strength of shark} \leq 200$  
- $0 \leq \text{time at path} \leq 1000$  
- $5 \leq K \leq 10,000$  

---

### **Input Format**  
1. The first line contains two integers $N$ and $M$ — the rows and columns of the matrix.  
2. The next $N$ lines contain $M$ integers describing the strengths of the sharks in the ocean. The matrix contains $S$ (source) and $D$ (destination) as well.  
3. The next $N$ lines contain $M$ integers describing the time taken by players on the path.  
4. The last line contains an integer $K$ — the initial strength of both players.  

---

### **Output Format**  
- Print two integers: **Time** and **Strength** for the optimal path if it is possible for Hari to reach the other island.  
- Print **"Not Possible"** if no feasible path exists.  

---

### **Examples**  

#### **Example 1**  
**Input**:  
```
3 4  
0 1 4 3  
S 1 1 2  
1 2 5 D  
10 6 5 9  
0 5 4 9  
2 3 7 8  
10  
```  

**Output**:  
```
26 2
```  

**Explanation**:  
Hari and his friend, both start at the island with indices $(1, 0)$ and must reach the island at indices $(2, 3)$ with strength $10$. Hari can follow the path with the sequence of indices:  
$(1, 0) \to (1, 1) \to (1, 2) \to (1, 3) \to (2, 3)$.  

This path minimizes time and maximizes strength.  
- **Time**: $5 + 4 + 9 + 8 = 26$  
- **Strength**: $10 - 1 - 1 - 2 - 0 (Destination) - 4 = 2$.  

---

#### **Example 2**  
**Input**:  
```
3 4  
0 3 5 1  
2 S 4 D  
2 1 8 1  
5 10 2 12  
4 0 5 11  
2 7 7 8  
5  
```  

**Output**:  
```
Not Possible
```  

**Explanation**:  
Hari and his friend start at indices $(1, 1)$ and must reach $(1, 2)$. However, no path allows Hari to reach the destination while maintaining non-negative strength.  
