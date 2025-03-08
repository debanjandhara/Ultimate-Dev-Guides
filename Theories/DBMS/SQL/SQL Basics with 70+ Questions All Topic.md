# SQL Interview Preparation Guide 🛠️📚

## Introduction 🎯  
SQL is a crucial topic for technical interviews, especially for roles like **TCS Digital Ninja, SQL Developer, and Software Engineer**. This guide compiles **70 top SQL questions** from **service-based and product-based companies**, ensuring you're well-prepared. 🚀  

---

## **1️⃣ Switching to a Database** 🏛️  
### **Question:**  
👉 *How do you switch to the IMDb database?*  
### **Answer:**  
Use the `USE` command to select a database in SQL:  
```sql
USE IMDb;
```
- This tells the DBMS which database to use for queries.  
- Replace `IMDb` with your database name.  

---

## **2️⃣ Listing All Tables in a Database** 📋  
### **Question:**  
👉 *How do you list all the tables in the current database?*  
### **Answer:**  
Use the `SHOW TABLES` command:  
```sql
SHOW TABLES;
```
- Lists all tables in the currently selected database.  

---

## **3️⃣ Displaying Table Structure** 🏗️  
### **Question:**  
👉 *How do you display the structure of the `movies` table?*  
### **Answer:**  
Use the `DESCRIBE` command:  
```sql
DESCRIBE movies;
```
- Shows column names, data types, and constraints.  

---

## **4️⃣ Selecting Data from a Table** 🏆  
### **Question:**  
👉 *How do you select all columns from the `movies` table?*  
### **Answer:**  
```sql
SELECT * FROM movies;
```
- The `*` selects all columns.  

### **Question:**  
👉 *How do you select only the `name` and `year` columns from the `movies` table?*  
### **Answer:**  
```sql
SELECT name, year FROM movies;
```
- Retrieves only the specified columns.  

### **Question:**  
👉 *How do you select `rank_score` and `name` from the `movies` table?*  
### **Answer:**  
```sql
SELECT rank_score, name FROM movies;
```

---

## **5️⃣ Limiting Query Results** 🚦  
### **Question:**  
👉 *How do you get the first 20 rows of `name` and `rank_score` from the `movies` table?*  
### **Answer:**  
Use `LIMIT` to restrict the number of rows returned:  
```sql
SELECT name, rank_score FROM movies LIMIT 20;
```
- Fetches only **20 rows** instead of all records.  

---

## **6️⃣ Skipping Rows with OFFSET** 🏁  
### **Question:**  
👉 *How do you get 20 rows starting from the 41st row?*  
### **Answer:**  
Use `OFFSET` along with `LIMIT`:  
```sql
SELECT name, rank_score FROM movies LIMIT 20 OFFSET 40;
```
- **OFFSET 40** skips the first **40 rows** and starts from the 41st row.  

---

## **7️⃣ Ordering Results** 🔢  
### **Question:**  
👉 *What is `ORDER BY` used for?*  
### **Answer:**  
The `ORDER BY` clause sorts results based on a column:  
```sql
SELECT name, rank_score FROM movies ORDER BY rank_score DESC;
```
- **Ascending (ASC) [default]**: `ORDER BY column_name ASC;`  
- **Descending (DESC)**: `ORDER BY column_name DESC;`  

---

## **Key Takeaways** 🎯  

✅ **Use `USE`, `SHOW TABLES`, and `DESCRIBE`** to explore databases.  
✅ **Master `SELECT`, `LIMIT`, `OFFSET`, and `ORDER BY`** to handle query results efficiently. 

---

## **8️⃣ Listing Top 10 Most Recent Movies** 🎬
### **Question:**  
👉 *How do you list the top 10 most recent movies by year?*  
### **Answer:**  
Use `ORDER BY` with `DESC` to get the latest movies first:  
```sql
SELECT name, rank_score, year FROM movies ORDER BY year DESC LIMIT 10;
```
- **`ORDER BY year DESC`** ensures the movies are sorted in descending order by year (latest first).
- **`LIMIT 10`** fetches only the top 10 results.  

---

## **9️⃣ Listing Top 10 Oldest Movies** 🎞️  
### **Question:**  
👉 *How do you list the top 10 oldest movies by year?*  
### **Answer:**  
Use `ORDER BY` in **ascending order** (default behavior):  
```sql
SELECT name, rank_score, year FROM movies ORDER BY year ASC LIMIT 10;
```
- **Ascending (ASC) is default**, so it's not necessary to specify `ASC` explicitly.
- **`LIMIT 10`** ensures only the oldest 10 movies are displayed.  

---

## **🔟 Removing Duplicates with DISTINCT** 🔍
### **Question:**  
👉 *How do you list all unique genres from the movies table?*  
### **Answer:**  
Use `DISTINCT` to filter out duplicate values:  
```sql
SELECT DISTINCT genre FROM movies_genres;
```
- **`DISTINCT` ensures only unique genres** are returned.

### **Follow-up Question:**  
👉 *How do you list all unique combinations of first and last names from the directors table?*  
### **Answer:**  
```sql
SELECT DISTINCT first_name, last_name FROM directors;
```
- **`DISTINCT first_name, last_name`** eliminates duplicate director names.

---

## **1️⃣1️⃣ Filtering Rows with WHERE** 🎯
### **Question:**  
👉 *How do you list all movies with a rank score greater than 9?*  
### **Answer:**  
Use the `WHERE` clause to apply conditions:  
```sql
SELECT name, year, rank_score FROM movies WHERE rank_score > 9;
```
- **`WHERE rank_score > 9`** filters only movies with scores above 9.

---

## **1️⃣2️⃣ Sorting and Filtering Together** 🔄
### **Question:**  
👉 *How do you list the top 20 movies with a rank score greater than 8, sorted in descending order?*  
### **Answer:**  
```sql
SELECT name, year, rank_score FROM movies WHERE rank_score > 8 ORDER BY rank_score DESC LIMIT 20;
```
- **Filters movies with `rank_score > 8`.**
- **Sorts by `rank_score DESC` (highest first).**
- **Retrieves only `20` rows with `LIMIT 20`.**

---

## **1️⃣3️⃣ Filtering by Genre** 🎭
### **Question:**  
👉 *How do you list all movies where the genre is Comedy?*  
### **Answer:**  
```sql
SELECT * FROM movies_genres WHERE genre = 'Comedy';
```
- **`WHERE genre = 'Comedy'`** ensures only comedy movies are returned.

### **Follow-up Question:**  
👉 *How do you list all movies except those with the genre Horror?*  
### **Answer:**  
```sql
SELECT * FROM movies_genres WHERE genre != 'Horror';
```
- **`!= 'Horror'`** excludes all horror movies from the result.

---

## **1️⃣4️⃣ Filtering by Name (LIKE Operator)** 🔤
### **Question:**  
👉 *How do you list movies with names starting with 'T'?*  
### **Answer:**  
```sql
SELECT name, year, rank_score FROM movies WHERE name LIKE 'T%';
```
- **`LIKE 'T%'`** ensures that only movies whose names start with 'T' are selected.
- **`%`** is a wildcard that matches any number of characters after 'T'.

---

## **1️⃣5️⃣ Filtering Names Ending with 'es'** 🔚
### **Question:**  
👉 *How do you list movies where the name ends with 'es'?*  
### **Answer:**  
```sql
SELECT name, year, rank_score FROM movies WHERE name LIKE '%es';
```
- **`LIKE '%es'`** ensures that the last two characters of the name are 'es'.
- **`%`** wildcard before 'es' allows any characters before it.

---

## **1️⃣6️⃣ Filtering Names Containing 'es'** 🔍
### **Question:**  
👉 *How do you list movies where the name contains 'es'?*  
### **Answer:**  
```sql
SELECT name, year, rank_score FROM movies WHERE name LIKE '%es%';
```
- **`LIKE '%es%'`** ensures 'es' can be anywhere in the name.
- **Wildcards (`%`) before and after 'es'** allow it to appear anywhere in the string.

---

## **1️⃣7️⃣ Matching Name with Specific Pattern** 🏗️
### **Question:**  
👉 *How do you list actors whose first name follows the pattern 'A_G' (where 'A' is the first letter, 'G' is the third letter, and the second letter is any character)?*  
### **Answer:**  
```sql
SELECT first_name, last_name FROM actors WHERE first_name LIKE 'A_G%';
```
- **`_`** (underscore) matches exactly **one** character.
- **`LIKE 'A_G%'`** ensures:
  - First character is 'A'.
  - Second character can be any character.
  - Third character is 'G'.
  - Any characters can follow.

---

## **1️⃣8️⃣ Filtering Names Starting with 'L' but Not 'Li'** 🚫
### **Question:**  
👉 *How do you list actors whose first name starts with 'L' but not 'Li'?*  
### **Answer:**  
```sql
SELECT first_name, last_name FROM actors WHERE first_name LIKE 'L%' AND first_name NOT LIKE 'Li%';
```
- **`LIKE 'L%'`** ensures names start with 'L'.
- **`NOT LIKE 'Li%'`** excludes names that start with 'Li'.

---

## **1️⃣9️⃣ Finding the Earliest and Latest Movie Year** 📅
### **Question:**  
👉 *How do you find the earliest year in the movies table?*  
### **Answer:**  
```sql
SELECT MIN(year) FROM movies;
```
- **`MIN(year)`** returns the earliest movie release year.

### **Question:**  
👉 *How do you find the most recent year in the movies table?*  
### **Answer:**  
```sql
SELECT MAX(year) FROM movies;
```
- **`MAX(year)`** returns the latest movie release year.

---

## **2️⃣0️⃣ Counting Total Movies** 🔢
### **Question:**  
👉 *How do you count the total number of movies in the table?*  
### **Answer:**  
```sql
SELECT COUNT(*) FROM movies;
```
- **`COUNT(*)`** counts all rows in the `movies` table.

### **Follow-up Question:**  
👉 *How do you count movies released after the year 2000?*  
### **Answer:**  
```sql
SELECT COUNT(*) FROM movies WHERE year > 2000;
```
- **`WHERE year > 2000`** filters movies released after 2000.

### **Follow-up Question:**  
👉 *How do you count the number of movies with a non-null year?*  
### **Answer:**  
```sql
SELECT COUNT(year) FROM movies;
```
- **`COUNT(year)`** counts only non-null values.

---

## **2️⃣1️⃣ Grouping Data Using GROUP BY** 🔄
### **Question:**  
👉 *How do you find the number of movies released each year?*  
### **Answer:**  
```sql
SELECT year, COUNT(*) AS movie_count FROM movies GROUP BY year;
```
- **`GROUP BY year`** groups movies by their release year.
- **`COUNT(*)`** counts the number of movies per year.
- **`AS movie_count`** renames the output column.

---

### 📌 **Next Steps:**
✅ Experiment with different `LIKE` patterns.
✅ Understand `GROUP BY` and `HAVING` for advanced filtering.
✅ Explore aggregate functions (`SUM`, `AVG`, `MIN`, `MAX`, `COUNT`).

---

## **2️⃣2️⃣ Filtering Groups Using HAVING** 🎯

### **Question:**  
👉 *How do you find years with more than 1,000 movies?*  

### **Answer:**  
```sql
SELECT year, COUNT(*) AS year_count
FROM movies
GROUP BY year
HAVING COUNT(*) > 1000;
```
- **`GROUP BY year`** groups the movies by their release year.
- **`COUNT(*)`** counts the number of movies in each year.
- **`HAVING COUNT(*) > 1000`** filters only those years where more than 1,000 movies were released.
- **Difference between `WHERE` and `HAVING`**:
  - `WHERE` filters individual rows **before grouping**.
  - `HAVING` filters groups **after aggregation**.

---

## **2️⃣3️⃣ Listing Movies Released After 2000** 🎥

### **Question:**  
👉 *How do you list movies released after the year 2000 without using `GROUP BY`?*

### **Answer:**  
```sql
SELECT name, year
FROM movies
WHERE year > 2000;
```
- **`WHERE year > 2000`** filters out movies released after the year 2000.
- **No `GROUP BY` is needed** since we are listing individual movies.

💡 **Interview Tip:** This is a frequently asked SQL question in technical screenings (TCS, Microsoft, Amazon).

---

## **2️⃣4️⃣ Filtering Based on Two Conditions** 🏆

### **Question:**  
👉 *How do you find years with more than 20 movies that have a rank score greater than `N`?*

### **Answer:**  
```sql
SELECT year, COUNT(*) AS year_count
FROM movies
WHERE rank_score > N
GROUP BY year
HAVING COUNT(*) > 20;
```
- **Step 1:** `WHERE rank_score > N` filters rows before aggregation.
- **Step 2:** `GROUP BY year` groups the remaining movies by year.
- **Step 3:** `HAVING COUNT(*) > 20` ensures only years with more than 20 movies are included.

💡 **Key Learning:**
- `WHERE` applies to individual rows **before** grouping.
- `HAVING` applies **after** aggregation.
- The **execution order** in SQL:
  1. `FROM` (tables joined first)
  2. `WHERE` (filters rows)
  3. `GROUP BY` (groups data)
  4. `HAVING` (filters groups)
  5. `SELECT` (returns final result)

---

## **2️⃣5️⃣ Introduction to SQL Joins** 🔗

### **Question:**  
👉 *What are SQL Joins?*

### **Answer:**  
Joins in SQL are used to combine rows from two or more tables based on a related column.

### **Types of Joins:**
1️⃣ **INNER JOIN** – Returns only matching rows.  
2️⃣ **LEFT JOIN** – Returns all rows from the left table, and matching rows from the right table.  
3️⃣ **RIGHT JOIN** – Returns all rows from the right table, and matching rows from the left table.  
4️⃣ **FULL OUTER JOIN** – Returns all rows from both tables, matching where possible.

---

## **2️⃣6️⃣ Using INNER JOIN** 🔄

### **Question:**  
👉 *How do you list movie names and their genres?*

### **Answer:**  
```sql
SELECT m.name, g.genre
FROM movies m
INNER JOIN movie_genres g ON m.id = g.movie_id
LIMIT 20;
```
- **`movies m`** assigns alias `m` to the `movies` table.
- **`movie_genres g`** assigns alias `g` to the `movie_genres` table.
- **`ON m.id = g.movie_id`** ensures that only movies with matching genres are returned.
- **`LIMIT 20`** restricts the output to 20 rows.

💡 **Key Takeaway:** INNER JOIN only returns rows where there is a match between the tables.

---

🔹 *Stay tuned for more SQL concepts!* 🚀

## **2️⃣7️⃣ Understanding Primary Key & INNER JOIN** 🔑

### **Question:**  
👉 *Why do we use the primary key in INNER JOIN?*

### **Answer:**  
- A **primary key** uniquely identifies each row in a table.
- When performing an **INNER JOIN**, we match records between two tables using a **common column**, which is often a primary key in one table and a foreign key in another.
- This ensures accurate and efficient joining of records.

### **Example:**
```sql
SELECT m.name, g.genre
FROM movies m
INNER JOIN movie_genres g ON m.id = g.movie_id
LIMIT 20;
```
- Here, `m.id` is the **primary key** in the `movies` table, and `g.movie_id` is the **foreign key** in the `movie_genres` table.
- The join ensures that only movies with matching genre entries are returned.

📌 **Key Takeaway:** Always use a column that exists in both tables to join them efficiently.

---

## **2️⃣8️⃣ Understanding LEFT JOIN** 🔄

### **Question:**  
👉 *How do you list all movies, including those with no genre?*

### **Answer:**  
Use **LEFT JOIN**, which returns all records from the left table (`movies`), and only the matching records from the right table (`movie_genres`).

### **Example:**
```sql
SELECT m.name, g.genre
FROM movies m
LEFT JOIN movie_genres g ON m.id = g.movie_id
LIMIT 20;
```
- This ensures that all movies are listed, even if they don't have an associated genre.

📌 **Key Takeaway:** Use **LEFT JOIN** when you want all records from the left table, regardless of matching records in the right table.

---

## **2️⃣9️⃣ Using INNER JOIN on Multiple Tables** 🔗

### **Question:**  
👉 *How do you list actors who acted in a specific movie?*

### **Answer:**  
- We need to join three tables: `actors`, `roles`, and `movies`.
- Use `INNER JOIN` to match **actors with roles** and **roles with movies**.
- Filter by movie name (`Officer 444`).

### **Example:**
```sql
SELECT a.first_name, a.last_name
FROM actors a
INNER JOIN roles r ON a.id = r.actor_id
INNER JOIN movies m ON m.id = r.movie_id
WHERE m.name = 'Officer 444';
```
- `actors` table contains actor details.
- `roles` table links actors to movies.
- `movies` table contains movie details.
- The query filters actors who played a role in `Officer 444`.

📌 **Key Takeaway:** Use **multiple INNER JOINs** to fetch data from three or more tables based on their relationships.

---

## **3️⃣0️⃣ Understanding Subqueries (Nested Queries)** 🕵️‍♂️

### **Question:**  
👉 *What are subqueries, and when are they used?*

### **Answer:**  
- A **subquery** is a query inside another query.
- It helps fetch data that is used in the main query.
- Used in `WHERE`, `HAVING`, and `SELECT` clauses.

### **Example:**
**List all actors who appeared in at least one movie.**
```sql
SELECT first_name, last_name
FROM actors
WHERE id IN (
    SELECT DISTINCT actor_id FROM roles
);
```
- The **subquery** (`SELECT DISTINCT actor_id FROM roles`) retrieves actors who acted in movies.
- The **main query** filters actors who match the retrieved `actor_id`s.

📌 **Key Takeaway:** Subqueries allow dynamic filtering based on another table’s data.

---

🚀 Stay tuned for more SQL concepts like `GROUP BY`, `HAVING`, and `ORDER BY`! 📊🔥

---

## **3️⃣1️⃣ Advanced Use of Subqueries** 🔍

### **Question:**  
👉 *How do you list all actors who have appeared in a movie?*

### **Answer:**  
- A **subquery** helps filter results dynamically by checking conditions inside another query.
- We can use the `IN` clause to retrieve actors who appeared in at least one movie.

### **Example:**
```sql
SELECT first_name, last_name
FROM actors
WHERE id IN (
    SELECT DISTINCT actor_id FROM roles
);
```
- The **subquery** retrieves `actor_id` values from the `roles` table.
- The **main query** selects actors whose `id` matches those in the subquery.

📌 **Key Takeaway:** Use subqueries to fetch related data efficiently within the same SQL statement.

---

## **3️⃣2️⃣ Using Aggregate Functions in Subqueries** 📊

### **Question:**  
👉 *How do you find movies with the highest rank score?*

### **Answer:**  
- The `MAX()` function finds the highest rank score.
- The `ALL` keyword ensures that all conditions must be met for the query to return results.

### **Example:**
```sql
SELECT movie_name
FROM movies
WHERE rank_score >= ALL (
    SELECT rank_score FROM movies
);
```
- The subquery retrieves all rank scores.
- The main query filters movies with the maximum rank score.

📌 **Key Takeaway:** Using `MAX()` and `ALL`, we can retrieve top-ranked entries efficiently.

---

## **3️⃣3️⃣ Understanding `ANY` and `ALL` Keywords** 🤔

### **Question:**  
👉 *How do `ANY` and `ALL` work in SQL?*

### **Answer:**  
- **`ANY`**: Returns `TRUE` if **any** subquery value matches the condition.
- **`ALL`**: Returns `TRUE` only if **all** subquery values match the condition.

### **Example:**
```sql
SELECT movie_name
FROM movies
WHERE rank_score >= ANY (
    SELECT rank_score FROM movies WHERE year > 2010
);
```
- This finds movies with a rank score greater than or equal to the lowest rank score from movies after 2010.

📌 **Key Takeaway:** Use `ANY` for flexible filtering and `ALL` for strict comparisons.

---

## **3️⃣4️⃣ Using `EXISTS` and `NOT EXISTS`** ✅❌

### **Question:**  
👉 *How do `EXISTS` and `NOT EXISTS` work in SQL?*

### **Answer:**  
- **`EXISTS`**: Checks if a subquery returns any records.
- **`NOT EXISTS`**: Ensures that no records exist in the subquery.

### **Example:**
```sql
SELECT movie_name
FROM movies m
WHERE EXISTS (
    SELECT 1 FROM roles r WHERE r.movie_id = m.id
);
```
- The query retrieves movies **only if they have roles associated with them**.

📌 **Key Takeaway:** `EXISTS` is useful for checking the presence of related records.

---

## **3️⃣5️⃣ Data Manipulation Language (DML)** 🛠️

### **Question:**  
👉 *What is DML, and what are its commands?*

### **Answer:**  
- **DML (Data Manipulation Language)** allows modification of database records.
- Commands include:
  - `SELECT` – Retrieve data
  - `INSERT` – Add data
  - `UPDATE` – Modify data
  - `DELETE` – Remove data

📌 **Key Takeaway:** DML commands help manage data efficiently.

---

## **3️⃣6️⃣ Inserting Data into Tables** ➕

### **Question:**  
👉 *How do you insert a new movie record?*

### **Answer:**  
Use the `INSERT INTO` statement:

```sql
INSERT INTO movies (id, name, year)
VALUES (101, 'Thor', 2011);
```

📌 **Key Takeaway:** Ensure column order matches the table schema when inserting data.

---

## **3️⃣7️⃣ Inserting Multiple Records** 🗂️

### **Question:**  
👉 *How do you insert multiple movie records in one query?*

### **Answer:**  
```sql
INSERT INTO movies (id, name, year)
VALUES
(102, 'Iron Man', 2008),
(103, 'Captain America', 2011),
(104, 'Black Panther', 2018);
```

📌 **Key Takeaway:** Insert multiple rows efficiently using a single `INSERT` statement.

---

## **3️⃣8️⃣ Copying Data Between Tables** 🔄

### **Question:**  
👉 *How do you copy rows from one table to another?*

### **Answer:**  
```sql
INSERT INTO new_movies (id, name, year)
SELECT id, name, year FROM movies WHERE year > 2010;
```
- This inserts all movies released **after 2010** into `new_movies`.

📌 **Key Takeaway:** `INSERT INTO ... SELECT` allows efficient data migration.

---

## **3️⃣9️⃣ Updating Records** ✏️

### **Question:**  
👉 *How do you update the rank score of a movie?*

### **Answer:**  
```sql
UPDATE movies
SET rank_score = 9
WHERE id = 412321;
```

📌 **Key Takeaway:** Always use `WHERE` to avoid updating all records unintentionally.

---

## **4️⃣0️⃣ Deleting Records** ❌

### **Question:**  
👉 *How do you delete a specific movie record?*

### **Answer:**  
```sql
DELETE FROM movies WHERE id = 412321;
```

📌 **Key Takeaway:** Ensure you specify a condition (`WHERE`) to avoid deleting all rows.

---

## **4️⃣1️⃣ Removing All Rows vs. Dropping a Table** ⚠️

### **Question:**  
👉 *What is the difference between `TRUNCATE` and `DROP`?*

### **Answer:**  
- **`TRUNCATE`** removes all rows but **keeps the table structure**.
- **`DROP`** deletes the table **completely**.

### **Example:**
```sql
TRUNCATE TABLE movies; -- Removes all records but keeps structure
DROP TABLE movies; -- Deletes the table completely
```

📌 **Key Takeaway:** Use `TRUNCATE` for clearing data, `DROP` for permanent deletion.

---

## **4️⃣2️⃣ Data Definition Language (DDL)** 📂

### **Question:**  
👉 *What is DDL, and what are its commands?*

### **Answer:**  
- **DDL (Data Definition Language)** is used to define and manage database schemas.
- Commands include:
  - `CREATE` – Define a table
  - `ALTER` – Modify structure
  - `DROP` – Delete objects
  - `TRUNCATE` – Remove all rows

📌 **Key Takeaway:** DDL affects table structures, while DML manipulates data.

---

## **4️⃣3️⃣ Creating a Table** 🏗️

### **Example:**
```sql
CREATE TABLE movies (
    id INT PRIMARY KEY,
    name VARCHAR(255),
    year INT
);
```

📌 **Key Takeaway:** Define tables using `CREATE TABLE` with proper data types and constraints.

---

This continuation covers advanced SQL concepts, DML operations, and DDL fundamentals. Let me know if you'd like to expand further! 🚀

---

## **4️⃣4️⃣ Constraints in SQL** ⚡

### **Question:**  
👉 *What are SQL constraints, and why are they important?*

### **Answer:**  
- Constraints are rules enforced on data in a table to maintain data integrity.
- Types of constraints:
  - **NOT NULL** – Ensures a column cannot have NULL values.
  - **UNIQUE** – Ensures all values in a column are distinct.
  - **PRIMARY KEY** – A unique identifier for each row (combination of NOT NULL and UNIQUE).
  - **FOREIGN KEY** – Enforces referential integrity between two tables.
  - **CHECK** – Ensures a column meets specific conditions.
  - **DEFAULT** – Assigns a default value if no value is provided.
  
📌 **Key Takeaway:** Constraints maintain database accuracy and consistency.

---

## **4️⃣5️⃣ Difference Between PRIMARY KEY and UNIQUE** 🔑

### **Question:**  
👉 *How does PRIMARY KEY differ from UNIQUE?*

### **Answer:**  
| Feature          | PRIMARY KEY       | UNIQUE       |
|----------------|----------------|-------------|
| Null Values    | ❌ Not Allowed  | ✅ Allowed  |
| Uniqueness     | ✅ Ensures Uniqueness | ✅ Ensures Uniqueness |
| Number of Columns | Only One per Table | Multiple Allowed |

📌 **Key Takeaway:** Use **PRIMARY KEY** when a column must uniquely identify rows and never be NULL. Use **UNIQUE** when values must be distinct but can have NULLs.

---

## **4️⃣6️⃣ Ensuring Column Constraints** 🛠️

### **Question:**  
👉 *How do you ensure that a column cannot have NULL values?*

### **Answer:**  
- Use **NOT NULL** constraint while creating or modifying a table.
```sql
CREATE TABLE employees (
    emp_id INT PRIMARY KEY,
    name VARCHAR(255) NOT NULL
);
```
📌 **Key Takeaway:** Applying `NOT NULL` prevents columns from accepting NULL values.

### **Question:**  
👉 *How do you ensure that all values in the email column are unique?*

### **Answer:**  
- Use the **UNIQUE** constraint.
```sql
CREATE TABLE users (
    user_id INT PRIMARY KEY,
    email VARCHAR(255) UNIQUE
);
```
📌 **Key Takeaway:** `UNIQUE` ensures that duplicate values are not inserted.

---

## **4️⃣7️⃣ Ensuring Row Uniqueness** 🔍

### **Question:**  
👉 *How do you uniquely identify each row in the users table?*

### **Answer:**  
- Use a **PRIMARY KEY**.
```sql
CREATE TABLE users (
    user_id INT PRIMARY KEY,
    name VARCHAR(255),
    email VARCHAR(255) UNIQUE
);
```
📌 **Key Takeaway:** `PRIMARY KEY` ensures each row has a unique identifier.

---

## **4️⃣8️⃣ Foreign Key Constraints** 🔗

### **Question:**  
👉 *How do you ensure that the user_id in the orders table refers to a valid user?*

### **Answer:**  
- Use a **FOREIGN KEY** to establish a relationship between `orders` and `users`.
```sql
CREATE TABLE orders (
    order_id INT PRIMARY KEY,
    user_id INT,
    FOREIGN KEY (user_id) REFERENCES users(user_id)
);
```
📌 **Key Takeaway:** `FOREIGN KEY` enforces referential integrity between tables.

---

## **4️⃣9️⃣ CHECK Constraint** ✅

### **Question:**  
👉 *How do you ensure that the price column in the product table is always greater than zero?*

### **Answer:**  
- Use the **CHECK** constraint.
```sql
CREATE TABLE products (
    product_id INT PRIMARY KEY,
    price DECIMAL(10,2) CHECK (price > 0)
);
```
📌 **Key Takeaway:** `CHECK` prevents invalid data entries.

---

## **5️⃣0️⃣ Setting Default Values** ⏳

### **Question:**  
👉 *How do you set a default value for a column?*

### **Answer:**  
- Use the **DEFAULT** constraint.
```sql
CREATE TABLE orders (
    order_id INT PRIMARY KEY,
    order_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
```
📌 **Key Takeaway:** `DEFAULT` automatically assigns a value when none is provided.

---

## **5️⃣1️⃣ Creating Indexes** ⚡

### **Question:**  
👉 *How do you create an index on the name column in the users table?*

### **Answer:**  
- Use the **CREATE INDEX** statement.
```sql
CREATE INDEX idx_name ON users(name);
```
📌 **Key Takeaway:** Indexing speeds up queries by optimizing data retrieval.

---

## **5️⃣2️⃣ ALTER TABLE Command** 🏗️

### **Question:**  
👉 *How do you add a new column to a table?*

### **Answer:**  
```sql
ALTER TABLE employees ADD COLUMN department VARCHAR(50);
```

### **Question:**  
👉 *How do you modify an existing column?*

### **Answer:**  
```sql
ALTER TABLE employees MODIFY COLUMN department VARCHAR(100);
```

### **Question:**  
👉 *How do you remove a column?*

### **Answer:**  
```sql
ALTER TABLE employees DROP COLUMN department;
```
📌 **Key Takeaway:** `ALTER TABLE` modifies table structure.

---

## **5️⃣3️⃣ Dropping Tables** 🚀

### **Question:**  
👉 *How do you permanently delete a table?*

### **Answer:**  
```sql
DROP TABLE employees;
```

### **Question:**  
👉 *How do you safely remove a table only if it exists?*

### **Answer:**  
```sql
DROP TABLE IF EXISTS employees;
```
📌 **Key Takeaway:** `DROP TABLE` permanently deletes tables and data.

---


