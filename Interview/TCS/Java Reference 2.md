https://quickref.me/java.html 

💡 Great question — this is **key to mastering Java**. Let's break it down simply:

---

### ✅ `Movie[]` (Array of Movies)

* ✅ **Fixed size**: You declare the size once (`new Movie[4]`) — can’t change it later.
* ✅ Slightly **faster and lightweight**
* ❌ You can’t add/remove elements dynamically
* ✅ Syntax is simpler if you're working with a known number of items

```java
Movie[] movies = new Movie[4];  // fixed, only 4
movies[0] = new Movie(...);
```

---

### ✅ `ArrayList<Movie>` (Resizable list of Movies)

* ✅ **Dynamic size**: You can `add()`, `remove()`, etc.
* ✅ Much easier when you **don’t know how many items** ahead of time (like filtering)
* ✅ Has useful methods: `add()`, `size()`, `get()`, `remove()`, `contains()`, etc.
* ❌ Slightly more memory overhead

```java
ArrayList<Movie> list = new ArrayList<>();
list.add(new Movie(...));  // can keep adding
```

---

### 🔁 Analogy:

* `Movie[]` = fixed-size egg carton (holds exactly 4 eggs)
* `ArrayList<Movie>` = expandable drawer (you can keep adding stuff)

---

### 🧠 So, when should you use each?

| Use case                       | Prefer this        |
| ------------------------------ | ------------------ |
| You know the number of items   | `Movie[]`          |
| You don’t know / it can change | `ArrayList<Movie>` |

---

Fantastic — you're starting to ask **fundamental Java questions**. Let me break these down clearly so they don’t confuse you again:

---

## ✅ 1. `ArrayList<T>`

* It's a **class** from Java's **Collection Framework**.
* Acts like a **resizable array**.
* Can store objects (like `Movie`, `String`, `Integer`, etc.)
* You can `add()`, `remove()`, `get()`, and `size()` it.

📌 Example:

```java
ArrayList<Integer> list = new ArrayList<>();
list.add(10);
```

🧠 Think: **"A dynamic array with cool helper methods"**

---

## ✅ 2. `Collections`

* A **utility class** in `java.util.*` that gives you **helper methods** to work on **collections** like `ArrayList`, `Set`, etc.

📌 Example:

```java
Collections.sort(list);   // sorts an ArrayList
Collections.reverse(list);
```

🧠 Think: **"Toolbox full of static methods for ArrayLists & friends"**

---

## ✅ 3. `Integer<T>` ❌ *(Wrong syntax!)*

There's no such thing as `Integer<T>`. That’s invalid Java.

What you **might** be thinking of is:

### ➤ `Integer` (capital `I`)

* It’s the **wrapper class** for `int`.
* You use it in generics like `ArrayList<Integer>` because Java’s generics **don’t support primitives (`int`)**, only objects.

📌 Example:

```java
ArrayList<Integer> list = new ArrayList<>();
list.add(42);  // `int` auto-boxes into `Integer`
```

🧠 Think: **"Integer wraps int when using collections"**

---

## 🔁 Summary Table

| Term           | Type          | Purpose                                 |
| -------------- | ------------- | --------------------------------------- |
| `ArrayList<T>` | Class         | Resizable array-like structure          |
| `Collections`  | Utility class | Helper methods like sort, reverse, etc. |
| `Integer`      | Wrapper class | Object version of `int` (for generics)  |

---


Great! You're asking for a **full reference guide to Java Collections**, Generics (`Integer<>`, `String<>`, etc.), and all related utilities. This is foundational to mastering Java programming.

---

## ✅ Java Collections & Generics — Full Reference Guide (Notebook-Ready)

---

### 📘 **1. What are Java Collections?**

The **Java Collections Framework (JCF)** is a set of **classes and interfaces** that help you **store and manipulate groups of objects**.

* Think: **dynamic data structures** (like resizable arrays, maps, sets, queues).
* Found in: `java.util.*`

---

### 📚 **2. Major Interfaces in Collections**

| Interface | Description                           | Common Implementations                |
| --------- | ------------------------------------- | ------------------------------------- |
| `List`    | Ordered collection, allows duplicates | `ArrayList`, `LinkedList`             |
| `Set`     | Unordered, **no duplicates**          | `HashSet`, `LinkedHashSet`, `TreeSet` |
| `Queue`   | FIFO (First-In-First-Out)             | `PriorityQueue`, `LinkedList`         |
| `Map`     | Key-Value pairs                       | `HashMap`, `TreeMap`, `LinkedHashMap` |

---

### 🧰 **3. Common Classes (with Generics)**

#### ✅ `ArrayList<E>`

* Resizable array (ordered, allows duplicates)

```java
ArrayList<String> list = new ArrayList<>();
list.add("Apple");
list.get(0);
list.size();
list.remove(0);
list.contains("Apple");
```

#### ✅ `LinkedList<E>`

* Like ArrayList but faster for insert/remove in middle
* Also implements `Queue`

#### ✅ `HashSet<E>`

* Unordered, **no duplicates**

```java
HashSet<Integer> set = new HashSet<>();
set.add(1);
set.contains(1);
set.remove(1);
```

#### ✅ `HashMap<K, V>`

* Key-value pairs (like a dictionary)

```java
HashMap<String, Integer> map = new HashMap<>();
map.put("Math", 95);
map.get("Math");       // returns 95
map.containsKey("Math");
```

---

### 🧪 **4. Generics (`<T>`) Explained**

Java uses **Generics** to allow type-safe collections. You declare them with angle brackets:

```java
ArrayList<Integer> nums = new ArrayList<>();
ArrayList<String> names = new ArrayList<>();
```

This avoids `ClassCastException` and ensures type safety at compile time.

---

### 🔧 **5. Wrapper Classes (for primitives)**

Because **Collections can’t use primitives (`int`, `char`, etc.)**, Java provides **wrapper classes**.

| Primitive | Wrapper     |
| --------- | ----------- |
| `int`     | `Integer`   |
| `char`    | `Character` |
| `double`  | `Double`    |
| `boolean` | `Boolean`   |

---

### 🧰 **6. Useful Methods for Each**

#### 🔹 `ArrayList<E>` Methods

```java
list.add(val);
list.get(index);
list.set(index, val);
list.size();
list.remove(index);
list.contains(val);
list.isEmpty();
```

#### 🔹 `HashSet<E>` Methods

```java
set.add(val);
set.contains(val);
set.remove(val);
set.size();
```

#### 🔹 `HashMap<K, V>` Methods

```java
map.put(key, value);
map.get(key);
map.containsKey(key);
map.containsValue(val);
map.keySet();
map.values();
map.remove(key);
```

---

### 🔧 **7. Collections Utility Class**

`java.util.Collections` gives **static helper methods** to operate on collections:

```java
Collections.sort(list);         // Sorts list
Collections.reverse(list);
Collections.max(list);
Collections.min(list);
Collections.shuffle(list);
```

---

### 🧠 **8. Differences at a Glance**

| Type      | Ordered? | Duplicates? | Index Access? | Key-Value? |
| --------- | -------- | ----------- | ------------- | ---------- |
| ArrayList | ✅ Yes    | ✅ Yes       | ✅ Yes         | ❌ No       |
| HashSet   | ❌ No     | ❌ No        | ❌ No          | ❌ No       |
| HashMap   | ❌ No     | ✅ Values    | ❌             | ✅ Yes      |

---

### 🎯 Tips for Beginners

* ✅ Use `ArrayList<T>` when you need a list of items and index access.
* ✅ Use `HashSet<T>` when you want unique items only.
* ✅ Use `HashMap<K, V>` for key-value lookups (like dictionaries).
* ✅ Use `Collections.sort(...)` when you need to sort any list.

---

Great follow-up! Let’s now explore:

* ✅ **What are `Integer` and `String` in Java?**
* ✅ **What methods do they provide?**
* ✅ **What group (or type) of classes are they part of?**

---

## 📘 1. `Integer` and `String` — What *kind* of classes are these?

They belong to a group called **Java Wrapper and Utility Classes**, part of **`java.lang` package** (imported by default).

### 🔹 `Integer` is a:

> ✅ **Wrapper class** for `int`
> Belongs to the **Number hierarchy**, part of **`java.lang.Number` superclass**

### 🔹 `String` is a:

> ✅ **Final class for handling text**
> Implements `CharSequence`, part of **core utility classes**

---

## 📦 2. Commonly Used Methods in `Integer` Class

### 🔧 Static Methods (called on class, not object)

```java
Integer.parseInt("123");       // ➝ 123 (int)
Integer.valueOf("123");        // ➝ Integer object
Integer.toString(123);         // ➝ "123"
Integer.max(10, 20);           // ➝ 20
Integer.min(10, 20);           // ➝ 10
Integer.compare(5, 9);         // ➝ -1 (if less), 0 (if equal), 1 (if greater)
```

### 🔧 Instance Methods (called on Integer object)

```java
Integer x = 10;

x.intValue();     // ➝ 10 as primitive int
x.equals(10);     // ➝ true
x.compareTo(15);  // ➝ -1 (if less)
```

### 🔧 Auto-boxing & Unboxing

```java
Integer a = 10;     // auto-boxing from int to Integer
int b = a;          // unboxing back to int
```

---

## 📚 3. Commonly Used Methods in `String` Class

```java
String s = "hello";
```

### ✅ Access & Check

```java
s.length();          // ➝ 5
s.charAt(0);         // ➝ 'h'
s.contains("el");    // ➝ true
s.equals("hello");   // ➝ true
s.equalsIgnoreCase("HELLO");  // ➝ true
s.isEmpty();         // ➝ false
```

### ✅ Modify or Extract

```java
s.toUpperCase();     // ➝ "HELLO"
s.toLowerCase();     // ➝ "hello"
s.substring(1);      // ➝ "ello"
s.substring(1, 3);   // ➝ "el"
s.replace("h", "j"); // ➝ "jello"
s.trim();            // removes surrounding spaces
```

### ✅ Search

```java
s.indexOf("l");      // ➝ 2
s.lastIndexOf("l");  // ➝ 3
s.startsWith("he");  // ➝ true
s.endsWith("o");     // ➝ true
```

### ✅ Convert

```java
String.valueOf(123);     // ➝ "123"
String[] arr = s.split("l");  // ➝ ["he", "", "o"]
```

---

## 🧠 Summary Table

| Class   | Type                | Package     | Purpose                     |
| ------- | ------------------- | ----------- | --------------------------- |
| Integer | Wrapper class       | `java.lang` | Convert, compare, parse int |
| String  | Final utility class | `java.lang` | Text handling, immutable    |

---

To convert a `String[]` array to an `ArrayList<String>`, here's the cleanest way:

---

### ✅ **Using `Arrays.asList()`**

```java
String[] arr = {"apple", "banana", "cherry"};

ArrayList<String> list = new ArrayList<>(Arrays.asList(arr));
```

> 🔹 You need to `import java.util.*;`
> 🔹 This wraps the array into a fixed-size list, so we wrap it in a new `ArrayList` to make it fully modifiable.

---

### ⚠️ Watch out:

If you do this:

```java
List<String> list = Arrays.asList(arr);
```

It works, **but** the list is **fixed size** — you can't `add()` or `remove()`.

---

