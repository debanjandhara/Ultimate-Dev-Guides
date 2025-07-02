# 🧠 DBMS Interview Prep Syllabus (for Backend Devs)

### ⏱️ Total Time: \~6 hours | Format: **Breadth > Depth**, Focus on Practical + Theoretical Balance

---

## 📘 1. Foundations (45 mins)

### ✅ Topics:

* What is a DBMS vs RDBMS
* Relational Model: Tables, Rows, Columns, Keys
* **Primary vs Foreign Keys**
* ACID Properties (Atomicity, Consistency, Isolation, Durability)
* CAP Theorem (Consistency, Availability, Partition Tolerance)

### 🔍 Cheat Notes:

| Concept   | Meaning                                                     |
| --------- | ----------------------------------------------------------- |
| **ACID**  | Guarantees for transactions in RDBMS                        |
| **CAP**   | In distributed systems: Pick any two of C, A, P             |
| **RDBMS** | Structured tables with relations (PostgreSQL, MySQL)        |
| **DBMS**  | Can be relational or non-relational (includes MongoDB etc.) |

---

## 🧱 2. Data Modeling + Normalization (45 mins)

### ✅ Topics:

* **Normalization (1NF, 2NF, 3NF)** — remove redundancy
* **Denormalization** — used for performance
* **Entity-Relationship Diagrams (ERD)** basics
* Designing a schema: E-commerce example

### 🔍 E.g. E-commerce Tables:

* `Users(user_id, name, email)`
* `Products(product_id, name, price)`
* `Orders(order_id, user_id, total_price)`
* `OrderItems(order_item_id, order_id, product_id, quantity)`

### 🧠 Tip:

* In interviews, design normalized schema first.
* Mention tradeoffs: normalization = data integrity; denormalization = performance.

---

## 🗃️ 3. Indexing, Transactions, Isolation Levels (1 hr)

### ✅ Topics:

* **Indexing** (B-Tree, Hash)

  * Speeds up SELECTs, slows INSERTs/UPDATEs
* **Transaction Control**: `BEGIN`, `COMMIT`, `ROLLBACK`
* **Isolation Levels**:

  * Read Uncommitted
  * Read Committed
  * Repeatable Read
  * Serializable

### 🔍 Cheat Sheet:

| Isolation Level  | Avoids Dirty Read? | Avoids Non-Repeatable? | Avoids Phantom? |
| ---------------- | ------------------ | ---------------------- | --------------- |
| Read Uncommitted | ❌                  | ❌                      | ❌               |
| Read Committed   | ✅                  | ❌                      | ❌               |
| Repeatable Read  | ✅                  | ✅                      | ❌               |
| Serializable     | ✅                  | ✅                      | ✅               |

---

## 🔁 4. SQL vs NoSQL (30 mins)

### ✅ Concepts:

* SQL = Relational, Structured Schema (PostgreSQL, MySQL)
* NoSQL = Flexible schema (MongoDB, Cassandra)

| Feature  | SQL            | NoSQL                   |
| -------- | -------------- | ----------------------- |
| Schema   | Fixed          | Dynamic                 |
| Joins    | Yes            | No                      |
| Scaling  | Vertical       | Horizontal              |
| Use Case | Banking, E-com | Logs, Social Media, IoT |

**When to use NoSQL?**

* Unstructured or semi-structured data
* Schema changes often
* Write-heavy workloads

---

## 🛠️ 5. ORM vs Raw SQL (SQLAlchemy Focus) (45 mins)

### ✅ Topics:

* What is an ORM? Object ↔ Relational Mapper
* **Pros:**

  * Cleaner Pythonic code
  * Prevents SQL injection
  * Easy migrations (e.g., with Alembic)
* **Cons:**

  * Less control over raw queries
  * Slight overhead
  * Difficult optimizations

### 🔍 SQLAlchemy Example:

```python
from sqlalchemy.orm import Session
db = Session()
user = db.query(User).filter_by(email="test@example.com").first()
```

### 🚫 Raw SQL When?

* Complex joins
* Performance-critical queries
* Analytics

---

## 📈 6. Performance Tips + Real-World Design (45 mins)

### ✅ Topics:

* Use Indexes on WHERE / JOIN columns
* Avoid SELECT \*
* Use LIMITs for pagination
* Archive large datasets
* Use connection pooling (e.g. with `asyncpg`)

### 📦 E-commerce Optimization Tips:

* Index `user_id`, `product_id`, `order_id`
* Caching frequent product queries
* Archive old orders in separate table

---

## 🧪 7. Common Interview Questions (1 hr)

### 💬 Theory Questions:

* What is normalization? When is it bad?
* Difference between `LEFT JOIN` and `INNER JOIN`
* What are transactions and why are they important?
* What is the difference between SQL and NoSQL?
* What are the types of indexes in DBs?

### 💻 Practical Tasks:

* Design schema for a shopping cart
* Write a query to find top 5 products sold last month
* Add pagination to a query
* Fix N+1 query issue in ORM

---

## 📊 8. Diagrams & Cheat Cards (Quick Recall) (30 mins)

### ERD Sketch (example: E-commerce)

```
[Users] --------< [Orders] --------< [OrderItems] >-------- [Products]
```

### Index Types:

* **B-Tree**: Default, good for range queries
* **Hash Index**: Fast exact match (e.g., user\_id)

### CAP Theorem Triangle:

```
         Consistency
        /          \
       /            \
Availability —— Partition Tolerance
```

---

## 🔁 Flash Recap Summary Cards (use last 30 mins)

### 🎯 Quick Flash:

* **ACID** = Safe transactions
* **CAP** = Pick 2 of 3
* **1NF** = Atomic values, **2NF** = Full dependency, **3NF** = No transitive dependency
* **Serializable** = Highest isolation
* **ORM** = Ease of use, but less control
* **Index** = Speeds up SELECT, slows writes
* **NoSQL** = Horizontal scaling, schema-less

---

## ✅ Bonus Tip for Interviews:

* Always talk trade-offs (performance vs consistency, normalization vs speed).
* Show how your experience (e.g., API dev + ORM use) influences your DB choices.
* Use **"I have used X in production when Y happened"** stories.

---

## 📘 1. Foundations (45 mins)

### ✅ Key Topics Explained:

---

### 🔸 What is a DBMS vs RDBMS?

* **DBMS (Database Management System)**
  A software system that allows users to define, create, maintain, and control access to databases.
  Includes all types of databases: relational, document-based, key-value stores, etc.
  🔹 *Examples*: MongoDB, Redis, MySQL, PostgreSQL.

* **RDBMS (Relational Database Management System)**
  A type of DBMS that stores data in **tables (relations)** with **rows and columns** and uses **SQL** for querying.
  Data is structured, and relationships between tables are maintained using **keys**.
  🔹 *Examples*: PostgreSQL, MySQL, Oracle DB.

> Think of **DBMS** as the umbrella, and **RDBMS** as one specific type under it.

---

### 🔸 Relational Model: Tables, Rows, Columns, Keys

* **Table (Relation)**: A set of rows (records) and columns (attributes).
* **Row (Tuple)**: A single record in the table.
* **Column (Attribute)**: A field representing one property of the record.
* **Keys**:

  * **Primary Key**: Unique identifier for each row. Cannot be null.
  * **Foreign Key**: A field in one table that refers to the **primary key** in another table. Used to establish relationships.

---

### 🔸 Primary Key vs Foreign Key

| Key Type    | Purpose                                     |
| ----------- | ------------------------------------------- |
| Primary Key | Uniquely identifies each record in a table. |
| Foreign Key | Links a record in one table to another.     |

🔍 *Example*:
In an `Orders` table, `user_id` might be a **foreign key** referring to `Users.user_id`.

---

### 🔸 ACID Properties

Used to ensure **reliable transactions** in databases:

1. **Atomicity**: All steps in a transaction are treated as one unit. If one fails, the entire transaction fails.
2. **Consistency**: Transactions bring the database from one valid state to another.
3. **Isolation**: Transactions occur independently of one another.
4. **Durability**: Once a transaction is committed, it remains even in case of system failure.

---

### 🔸 CAP Theorem

In **distributed systems**, it's impossible to guarantee all 3:

| Term                    | Meaning                                                |
| ----------------------- | ------------------------------------------------------ |
| **Consistency**         | All nodes see the same data at the same time           |
| **Availability**        | System responds to every request (even if not current) |
| **Partition Tolerance** | System continues to operate despite network issues     |

🔺 You can only **choose any two** out of the three in practice.

---

### 🔍 Cheat Notes Summary:

| Concept   | Meaning                                                   |
| --------- | --------------------------------------------------------- |
| **ACID**  | Guarantees for safe, reliable DB transactions             |
| **CAP**   | In distributed DBs: only 2 of C, A, and P are possible    |
| **RDBMS** | Structured DBs with relational tables (PostgreSQL, MySQL) |
| **DBMS**  | Any type of DB software (relational or non-relational)    |

---

## 🧱 2. Data Modeling + Normalization (45 mins)

### ✅ Key Concepts:

---

### 🔸 Normalization (1NF, 2NF, 3NF)

Used to organize data in a way that:

* Reduces data redundancy
* Improves data integrity

| Form    | Rule                                                                                |
| ------- | ----------------------------------------------------------------------------------- |
| **1NF** | Each field contains only **atomic (indivisible)** values. No repeating groups.      |
| **2NF** | Must be in 1NF + all **non-key** fields fully depend on the **entire primary key**. |
| **3NF** | Must be in 2NF + **no transitive dependencies** (non-key depending on non-key).     |

---

### 🔸 Denormalization

* The reverse of normalization.
* Adds redundancy **to improve read performance** at the cost of write performance and data consistency.
* Common in analytics and caching-heavy apps.

---

### 🔸 ERD (Entity-Relationship Diagram)

* A visual representation of **entities (tables)** and their **relationships**.
* Useful in database design phase.

> Example: A `User` can have many `Orders`, but an `Order` belongs to one `User` (1-to-many).

---

### 🔸 Example: E-commerce Schema Design

```text
Users(user_id, name, email)                  ← Primary Key: user_id
Products(product_id, name, price)            ← Primary Key: product_id
Orders(order_id, user_id, total_price)       ← Foreign Key: user_id
OrderItems(order_item_id, order_id, product_id, quantity)
            ← Foreign Keys: order_id, product_id
```

---

### 🧠 Tips:

* Normalize when designing to ensure data accuracy.
* Denormalize when scaling reads.
* In interviews: Show normalization first, then talk tradeoffs (performance, complexity).

---

## 🗃️ 3. Indexing, Transactions, Isolation Levels (1 hr)

### ✅ Key Concepts:

---

### 🔸 Indexing

* Index = A data structure that improves **query performance** (SELECTs).
* Index is usually created on **columns used in WHERE, JOIN, or ORDER BY**.

#### Types:

* **B-Tree (default)**: Good for range queries.
* **Hash**: Faster for exact lookups but doesn’t support range queries.

**Tradeoff**: Indexes speed up reads, but **slow down writes** (INSERT/UPDATE/DELETE).

---

### 🔸 Transactions

A **transaction** is a unit of work that must either complete fully or not at all.

#### Key SQL commands:

* `BEGIN`: Starts a transaction.
* `COMMIT`: Saves all changes.
* `ROLLBACK`: Undoes changes if something goes wrong.

---

### 🔸 Isolation Levels

Determines how much one transaction can “see” others.

| Level            | Avoids Dirty Read | Avoids Non-Repeatable Read | Avoids Phantom Read |
| ---------------- | ----------------- | -------------------------- | ------------------- |
| Read Uncommitted | ❌                 | ❌                          | ❌                   |
| Read Committed   | ✅                 | ❌                          | ❌                   |
| Repeatable Read  | ✅                 | ✅                          | ❌                   |
| Serializable     | ✅                 | ✅                          | ✅                   |

#### Terminologies:

* **Dirty Read**: Reading uncommitted changes from another transaction.
* **Non-Repeatable Read**: A row changes between reads in a transaction.
* **Phantom Read**: New rows appear in results of a repeated query.

---

## 🔁 4. SQL vs NoSQL (30 mins)

### ✅ Key Concepts:

---

### 🔸 SQL (Relational)

* **Structured schema**
* Supports **joins**
* Strong ACID compliance
* **Vertical scaling** (add more CPU/RAM)

🛠️ *Use Cases*: Banking systems, order management, accounting, user profiles.

---

### 🔸 NoSQL (Non-relational)

* Schema-less (flexible documents, key-value pairs)
* No complex joins
* Typically supports **horizontal scaling** (add more machines)
* **Eventual consistency** over strict ACID

🛠️ *Use Cases*: Logging, IoT data, chat applications, large-scale social media.

---

### 🔍 Feature Comparison Table

| Feature   | SQL                 | NoSQL                             |
| --------- | ------------------- | --------------------------------- |
| Schema    | Fixed / predefined  | Dynamic / flexible                |
| Joins     | Yes                 | No (handled at application level) |
| Scaling   | Vertical            | Horizontal                        |
| Use Cases | E-commerce, Banking | Logs, IoT, Real-time feeds        |
| Examples  | PostgreSQL, MySQL   | MongoDB, Cassandra, Redis         |

---

### 🧠 When to Use NoSQL?

* Schema changes frequently (e.g., dynamic content)
* Writes > Reads (heavy ingestion workloads)
* Fast prototyping or flexibility over structure

---

✅ **1NF → 2NF → 3NF**
With explanation at each step. Let’s go!

---

## 🔶 Original Table (Before Normalization — Not even 1NF):

| StudentID | StudentName | Courses      | InstructorName | Department |
| --------- | ----------- | ------------ | -------------- | ---------- |
| 101       | Alice       | CS101, CS102 | Smith, Brown   | CS         |
| 102       | Bob         | CS101        | Smith          | CS         |

**Problems**:

* `Courses` and `InstructorName` have **multiple values in one cell** ❌
* Not atomic → **Not in 1NF**

---

## ✅ **1NF (Atomic Values)**

**Fix**: Split repeating groups → one row per course

| StudentID | StudentName | CourseID | InstructorName | Department |
| --------- | ----------- | -------- | -------------- | ---------- |
| 101       | Alice       | CS101    | Smith          | CS         |
| 101       | Alice       | CS102    | Brown          | CS         |
| 102       | Bob         | CS101    | Smith          | CS         |

✅ Now all columns have **atomic (single)** values
✅ **No repeating groups**

---

## ✅ **2NF (Remove Partial Dependencies)**

**Composite Key**: (`StudentID`, `CourseID`)
**Issue**:

* `StudentName` depends only on `StudentID` ❌
* `InstructorName`, `Department` depend only on `CourseID` ❌

**Fix**: Break into separate tables

### 🗂 Student Table:

| StudentID | StudentName |
| --------- | ----------- |
| 101       | Alice       |
| 102       | Bob         |

### 🗂 Course Table:

| CourseID | InstructorName | Department |
| -------- | -------------- | ---------- |
| CS101    | Smith          | CS         |
| CS102    | Brown          | CS         |

### 🗂 Enrollment Table:

| StudentID | CourseID |
| --------- | -------- |
| 101       | CS101    |
| 101       | CS102    |
| 102       | CS101    |

✅ Now all non-key columns depend on **whole key**
✅ In **2NF**

---

## ✅ **3NF (Remove Transitive Dependencies)**

Now let’s say:

In the **Course Table**, suppose:

* `DepartmentHead` depends on `Department`, not `CourseID`

### 🟥 Problem Table (2NF but not 3NF):

| CourseID | InstructorName | Department | **DepartmentHead** |
| -------- | -------------- | ---------- | ------------------ |
| CS101    | Smith          | CS         | Dr. Grey           |
| CS102    | Brown          | CS         | Dr. Grey           |

* `DepartmentHead` depends on `Department`, not `CourseID` → ❌ Transitive dependency

---

### 🛠 Fix for 3NF:

Break into:

### 🗂 Department Table:

| Department | DepartmentHead |
| ---------- | -------------- |
| CS         | Dr. Grey       |

### 🗂 Course Table (Now clean):

| CourseID | InstructorName | Department |
| -------- | -------------- | ---------- |
| CS101    | Smith          | CS         |
| CS102    | Brown          | CS         |

✅ Now:

* No column depends on **non-key column**
* All columns depend only on the **key**

---

## 🎯 Final Summary:

| Normal Form | Fixes What?                                    | Example Fix                             |
| ----------- | ---------------------------------------------- | --------------------------------------- |
| **1NF**     | No multiple values per cell                    | Split rows for each course              |
| **2NF**     | No partial dependency on part of composite key | Separate Student and Course data        |
| **3NF**     | No transitive dependency (non-key → non-key)   | Move DepartmentHead to Department table |

---


## 🔑 What is a "Key" in DBMS?

A **key** is a column (or a group of columns) used to **identify rows uniquely** or **maintain relationships** between tables.

---

## ✅ 1. **Primary Key**

### 🔸 What it is:

* A **unique identifier** for each record in a table.
* **Cannot be NULL** and must be **unique**.
* Only **one primary key per table**.

### 🧠 Example:

```plaintext
Table: Students
| StudentID (PK) | Name   |
|----------------|--------|
| 101            | Alice  |
| 102            | Bob    |
```

Here, `StudentID` is the **Primary Key**.

---

## ✅ 2. **Candidate Key**

### 🔸 What it is:

* A **set of all possible unique keys** that can identify a row.
* **Eligible to be the primary key**.
* One of them is chosen as the **Primary Key**, others are called **Alternate Keys**.

### 🧠 Example:

```plaintext
Table: Students
| StudentID | Email              |
|-----------|-------------------|
| 101       | alice@mail.com    |
| 102       | bob@mail.com      |
```

* Both `StudentID` and `Email` are **Candidate Keys**.
* If we pick `StudentID` as **Primary Key**, then `Email` becomes an **Alternate Key**.

---

## ✅ 3. **Alternate Key**

### 🔸 What it is:

* Any **Candidate Key** that is **not chosen** as the **Primary Key**.

### 🧠 Example (continued):

* `Email` is an **Alternate Key** if `StudentID` is chosen as the Primary Key.

---

## ✅ 4. **Foreign Key**

### 🔸 What it is:

* A field in one table that **refers to the Primary Key** of another table.
* It is used to **maintain relationships** between tables.

### 🧠 Example:

```plaintext
Table: Students
| StudentID | Name    |
|-----------|---------|
| 101       | Alice   |

Table: Enrollments
| EnrollmentID | StudentID | CourseID |
|--------------|-----------|----------|
| 1            | 101       | CS101    |
```

* `Enrollments.StudentID` is a **Foreign Key** that refers to `Students.StudentID`.

---

## ✅ 5. **Composite Key**

### 🔸 What it is:

* A **Primary Key** made up of **more than one column**.
* Used when one column is **not enough** to uniquely identify a row.

### 🧠 Example:

```plaintext
Table: Enrollments
| StudentID | CourseID | Grade |
|-----------|----------|-------|
| 101       | CS101    | A     |
| 101       | CS102    | B     |
```

* Primary Key = (`StudentID`, `CourseID`) → this is a **Composite Key**

---

## ✅ 6. **Super Key**

### 🔸 What it is:

* **Any set of columns** that can uniquely identify a row.
* Includes **Primary Key, Candidate Keys, and more**.
* Can be extra columns too — not necessarily minimal.

### 🧠 Example:

For table:

```plaintext
| StudentID | Email              | Phone        |
|-----------|-------------------|--------------|
| 101       | alice@mail.com    | 9990000000   |
```

* `StudentID` ✅
* `Email` ✅
* `StudentID + Email` ✅ (but redundant)

All of the above are **Super Keys**, but only minimal ones are **Candidate Keys**.

---

## ✅ 7. **Surrogate Key**

### 🔸 What it is:

* An **artificial key** (like an auto-increment ID) used when no natural key is available.
* Has **no business meaning**, just used for uniqueness.

### 🧠 Example:

```plaintext
Table: Employees
| EmployeeID (Surrogate Key) | Name     | PAN Card     |
|----------------------------|----------|--------------|
| 1                          | Rahul    | AAAAA1234Z   |
```

* `EmployeeID` is a **Surrogate Key** — added for system purposes only.

---

## 🎯 Summary Table:

| Key Type          | Meaning                                  | Unique? | NULL Allowed? | Example                       |
| ----------------- | ---------------------------------------- | ------- | ------------- | ----------------------------- |
| **Primary Key**   | Main identifier                          | ✅       | ❌             | `StudentID`                   |
| **Candidate Key** | All possible unique keys                 | ✅       | ❌             | `StudentID`, `Email`          |
| **Alternate Key** | Candidate Key not chosen                 | ✅       | ❌             | `Email`                       |
| **Foreign Key**   | Refers to PK of another table            | ❌       | ✅             | `Enrollments.StudentID`       |
| **Composite Key** | PK using multiple columns                | ✅       | ❌             | (`StudentID`, `CourseID`)     |
| **Super Key**     | Any column(s) uniquely identifying a row | ✅       | Maybe         | `StudentID`, `StudentID+Name` |
| **Surrogate Key** | System-generated key                     | ✅       | ❌             | `AutoID`, `UUID`              |

---

## 🧠 Easy Mnemonics:

* 🔐 **Primary** — The Chosen One
* 👀 **Candidate** — Can be Chosen
* 🗂 **Alternate** — Not Chosen
* 🌍 **Foreign** — Links Between Worlds (tables)
* 🧩 **Composite** — Key in Pieces
* 📦 **Super** — Any Combo That Works
* 🤖 **Surrogate** — System-generated ID

---

# 🛠️ Section 5: ORM vs Raw SQL (with SQLAlchemy Focus)

### 🔹 What is an ORM?

An **ORM (Object-Relational Mapper)** is a programming tool that lets developers interact with a relational database using high-level, object-oriented code instead of writing raw SQL queries.

In Python, popular ORMs like **SQLAlchemy** or **Django ORM** map Python classes to database tables. Each object (row) becomes a Python instance, and each column becomes an attribute.

✅ **Example:**

Instead of:

```sql
SELECT * FROM users WHERE email = 'abc@example.com';
```

You write:

```python
user = db.query(User).filter_by(email="abc@example.com").first()
```

---

### ✅ Advantages of Using an ORM

1. **Cleaner Pythonic Code**

   * Allows developers to interact with the DB using familiar OOP patterns.
   * Reduces boilerplate code and query string handling.

2. **Prevents SQL Injection**

   * Since ORMs internally sanitize inputs and use parameterized queries, the risk of injection is greatly minimized.

3. **Migration Support**

   * Tools like Alembic (used with SQLAlchemy) make schema versioning and migrations easy and trackable.

4. **Faster Development**

   * CRUD operations become trivial.
   * Great for rapid prototyping and API development.

---

### ❌ Disadvantages of ORMs

1. **Less Control Over Raw Queries**

   * Complex queries (e.g., window functions, recursive joins, sub-selects) may require falling back to raw SQL or hybrid expressions.

2. **Performance Overhead**

   * ORMs add abstraction layers which may generate sub-optimal SQL if not used carefully.

3. **Harder to Optimize**

   * Debugging slow queries can be tricky, as generated SQL may not be immediately visible unless explicitly logged.

---

### 🔍 When to Use Raw SQL

Despite ORM convenience, you **should consider raw SQL** when:

* You need **complex JOINs**, aggregations, or nested subqueries.
* You’re optimizing **high-performance** queries (e.g., reports, dashboards).
* You’re doing **analytics** (e.g., time-series analysis, complex filters).
* You want **precise control** over SQL performance (e.g., using query hints, indexing options).

✅ SQLAlchemy allows hybrid use:

```python
from sqlalchemy import text
db.execute(text("SELECT COUNT(*) FROM orders WHERE created_at >= now() - interval '1 month'"))
```

---

## 📈 Section 6: Performance Tips + Real-World Design

Optimizing database performance is crucial for scalable apps.

### ✅ General Performance Guidelines

1. **Use Indexes Wisely**

   * Add indexes on columns used in `WHERE`, `JOIN`, and `ORDER BY` clauses.
   * Avoid over-indexing — it slows down `INSERT/UPDATE`.

2. **Avoid SELECT \***

   * Fetch only needed columns to reduce I/O and memory usage.

3. **Use LIMIT/OFFSET**

   * Essential for pagination. Prevents unnecessary data loading.

4. **Connection Pooling**

   * Don’t open a new DB connection for every request.
   * Tools like `asyncpg`, `uvicorn-gunicorn`, or SQLAlchemy’s own pooling help reduce latency.

5. **Archive Large Datasets**

   * Move old data (logs, inactive users) to cold storage tables or separate databases.

---

### 📦 E-commerce DB Optimization Example

Tables:

* `Users(user_id, email, ...)`
* `Orders(order_id, user_id, ...)`
* `Products(product_id, name, stock)`
* `OrderItems(order_id, product_id, quantity)`

Performance Tips:

* Add indexes on `user_id`, `product_id`, `order_id`
* Cache product listings using Redis (e.g., most-viewed, most-sold)
* Archive orders older than 1 year to `archived_orders`
* Use `JOIN` carefully to avoid N+1 queries

---

## 🧪 Section 7: Common Interview Questions

### 💬 Theory Questions to Prepare:

| ❓ Question                  | 💡 What to Cover                                            |
| --------------------------- | ----------------------------------------------------------- |
| What is normalization?      | Reducing redundancy via table separation (1NF, 2NF, 3NF)    |
| When is normalization bad?  | Too many joins → performance hit                            |
| `LEFT JOIN` vs `INNER JOIN` | LEFT = All from left + matched right; INNER = matched only  |
| What is a transaction?      | A unit of work with ACID guarantees                         |
| SQL vs NoSQL?               | SQL = fixed schema; NoSQL = flexible, high write throughput |
| Types of Indexes?           | B-Tree, Hash, Full-Text, Composite                          |

---

### 💻 Practical Coding Tasks:

1. **Design a Shopping Cart Schema**

   * `Cart(user_id)`, `CartItems(cart_id, product_id, quantity)`
2. **Find Top 5 Products Sold in Last Month**

   ```sql
   SELECT product_id, SUM(quantity) as total
   FROM order_items
   JOIN orders ON order_items.order_id = orders.order_id
   WHERE orders.created_at >= current_date - interval '30 days'
   GROUP BY product_id
   ORDER BY total DESC
   LIMIT 5;
   ```
3. **Paginate Product List (Page 2, 10 per page)**

   ```sql
   SELECT * FROM products LIMIT 10 OFFSET 10;
   ```
4. **Fix N+1 Query in ORM**

   * Use `joinedload()` in SQLAlchemy

   ```python
   from sqlalchemy.orm import joinedload
   users = db.query(User).options(joinedload(User.orders)).all()
   ```

---

## 📊 Section 8: Diagrams & Cheat Cards

### 🧩 ERD Diagram (E-commerce)

```
[Users] --------< [Orders] --------< [OrderItems] >-------- [Products]
```

* `>` = Many-to-one
* `--------<` = One-to-many

---

### 📇 Index Types Cheat Sheet

| Type      | Use Case                        |
| --------- | ------------------------------- |
| B-Tree    | Default; Range queries, sorting |
| Hash      | Fast exact-match lookup         |
| Composite | Index over multiple columns     |
| Full-Text | Searching large text fields     |

---

### 🔺 CAP Theorem

```
         Consistency
        /          \
       /            \
Availability —— Partition Tolerance
```

* **CA**: Traditional RDBMS
* **CP**: HBase
* **AP**: CouchDB

---

## 🔁 Flash Summary Cards

| Concept      | Key Insight                     |
| ------------ | ------------------------------- |
| ACID         | Transaction safety              |
| CAP          | Pick 2: C, A, or P              |
| 1NF          | Atomic values only              |
| 2NF          | Full key dependency             |
| 3NF          | No transitive dependency        |
| Serializable | Strictest isolation             |
| ORM          | Cleaner code, less control      |
| Index        | Faster reads, slower writes     |
| NoSQL        | Flexible, horizontally scalable |

---

## ✅ Bonus Interview Tips

* Always highlight trade-offs: **“I chose denormalization for speed, but ensured data integrity with validation.”**
* Show practical thinking: **“In one project, I used SQLAlchemy with PostgreSQL for API development. We had to fallback to raw SQL for analytics dashboards for better control and performance.”**
* Talk confidently about your production experience using terms like **connection pooling**, **lazy loading**, **schema design**, **read/write optimization**, etc.

---