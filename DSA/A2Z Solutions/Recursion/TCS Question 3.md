**Cargo Shipping Problem**

### **Problem Description**  
At a busy airport, a conveyor belt system is used to unload goods from various flights parked at different gates and deliver them to a central warehouse. The conveyor belt network has multiple junctions between the gates and the warehouse. Each junction connects to multiple paths but can only keep one path open at a time. If a new path is opened at a junction, any previously open path is automatically closed.

The warehouse is also considered a junction; therefore, all locations with multiple incoming paths are referred to as junctions. However, there is a limit to how many times a path can be switched at each junction, denoted by **K**. If a junction exceeds its switching limit, it gets temporarily locked, preventing any further changes to its paths. In this case, the goods from the affected flight must be manually carried to the warehouse, incurring a cost of `array[i]` rupees for the **i-th item**.

---

### **Input Description**  
1. The first line contains an integer **N**, representing the number of lines describing the entire conveyor belt system.  
   Each of the following **N** lines represents a segment of the conveyor structure in the following format:  
   - The first element is a string representing a **junction ID**.  
   - Subsequent elements are strings representing **connections to other junctions or gates**.  
   Paths flow in one direction—from gates to the warehouse.

2. The next line lists the gate names from which each item originates, separated by spaces.

3. The second-to-last line contains an array of integers representing the **cost of manually shifting each item to the warehouse** when a junction is locked. These costs are separated by spaces.

4. The final line contains an integer **K**, indicating the maximum number of switches allowed at any junction (inclusive).

---

### **Output Description**  
Print the **total manual shifting cost** required to move all items from all gates to the warehouse.

---

### **Constraints**  
- $1 \leq \text{Number of goods} \leq 50$  
- $1 \leq \text{Number of junctions} \leq 50$  
- $1 \leq \text{Length of name of flights and junctions} \leq 20$  
- $1 \leq K \leq 10$  
- $1 \leq \text{Cost of manual shipping of each item to warehouse} \leq 100$  

**Additional Information**:  
- There will always be a single warehouse.  
- Each flight will unload at a single gate.  
- Names of the junctions and flights consist of lowercase alphabets and digits.  
- Process the goods **sequentially from left to right**.  
- The cost of manually transporting a good to the warehouse is always the same, irrespective of where it gets stuck.

---

### **Examples**  

#### **Example 1**  
**Input**  
```
6  
warehouse jun1 jun3  
jun1 jun2  
jun2 jun4 jun6  
jun4 flyhigh  
jun6 jetstream falconflies  
jun3 bharataero  
flyhigh falconflies bharataero jetstream flyhigh bharataero  
4 2 9 15 7 3  
2
```

**Output**  
```
22
```

**Explanation**  
- [Detailed walkthrough of the operations leading to the total manual cost of 22 provided above.]

---

#### **Example 2**  
**Input**  
```
4  
warehouse jun1  
jun1 thunderbird jun2 jun3  
jun2 aeronova  
jun3 jetstream starwing  
jetstream starwing aeronova jetstream jetstream thunderbird aeronova jetstream thunderbird aeronova  
9 6 3 12 15 7 2 6 3 4  
3
```

**Output**  
```
16
```

**Explanation**  
- [Detailed walkthrough of the operations leading to the total manual cost of 16 provided above.]

---
