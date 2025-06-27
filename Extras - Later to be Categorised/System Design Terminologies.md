For Reference : https://www.youtube.com/watch?v=s9Qh9fWeOAk 

Of course. Here is a comprehensive summary of the key system design concepts covered in the video.

The video provides a high-level overview of 30 essential system design concepts that are crucial for software engineers looking to advance their careers, particularly for landing senior roles at major tech companies like Amazon, Google, Microsoft, and Meta. The speaker breaks down these concepts into logical groups, explaining how they work together to build large-scale, real-world systems.

### **Fundamental Communication and Architecture**

1.  **Client-Server Architecture:** This is the foundation of most web applications. A **client** (like a web browser or mobile app) sends a **request** for data to a **server**. The server processes the request and sends back a **response**.
2.  **IP Address:** For a client to find a server on the internet, the server needs a unique address, which is its IP address (e.g., `34.120.10.5`).
3.  **DNS (Domain Name System):** Since IP addresses are hard to remember, DNS acts as the internet's phonebook. It translates human-friendly **domain names** (like `google.com`) into their corresponding IP addresses, allowing clients to locate the correct server.
4.  **Proxy / Reverse Proxy:**
    *   A **Proxy** is a server that acts as a middleman for *outgoing* requests from a client, hiding the client's IP address and enhancing privacy.
    *   A **Reverse Proxy** is a server that sits in front of backend servers, acting as a middleman for *incoming* requests. It can distribute traffic, provide security, and cache content.
5.  **Latency:** This is the time delay for data to travel between a client and a server. It is heavily influenced by physical distance. A common strategy to reduce latency is to deploy servers in multiple data centers worldwide, allowing users to connect to the one closest to them.
6.  **HTTP/HTTPS:** This is the protocol, or set of rules, that governs communication between clients and servers. **HTTPS** is the secure version of HTTP, using encryption (SSL/TLS) to protect data in transit.
7.  **APIs (Application Programming Interfaces):** An API is a contract that defines how different software components or services communicate. It acts as a middleman, allowing clients to interact with servers without needing to know the low-level implementation details.

### **API Styles**

8.  **REST (Representational State Transfer):** A widely used, stateless API style that treats everything as a resource (e.g., `/users/123`). It uses standard HTTP methods (GET, POST, PUT, DELETE) and is simple and scalable. A major drawback is **over-fetching**, where an endpoint might return more data than the client needs.
9.  **GraphQL:** An API query language developed by Facebook to solve REST's limitations. It allows clients to request *exactly* the data they need in a single query, preventing over-fetching. The trade-off is increased complexity on the server side.

### **Data Storage and Scaling**

10. **Databases:** The backbone of modern applications, used to store, retrieve, and manage data efficiently, securely, and consistently.
11. **SQL vs. NoSQL Databases:**
    *   **SQL (Relational) Databases** store data in structured tables with a predefined schema and are ideal for applications requiring strong consistency (ACID properties), like banking systems.
    *   **NoSQL Databases** are designed for high scalability and flexible schemas. They come in various models (key-value, document, graph) and are suited for large-scale, distributed data.
12. **Vertical Scaling (Scaling Up):** Increasing a single server's capacity by adding more CPU, RAM, or storage. It's a quick fix but is limited by cost and the physical capacity of a single machine, creating a single point of failure.
13. **Horizontal Scaling (Scaling Out):** Adding more servers to distribute the workload. This approach is more scalable, fault-tolerant, and cost-effective for large systems.
14. **Load Balancers:** A crucial component for horizontal scaling, a load balancer acts as a "traffic manager," distributing incoming requests across multiple servers. If one server fails, it redirects traffic to healthy servers, ensuring reliability.
15. **Database Indexing:** A technique to speed up database read queries. Like a book's index, it creates a lookup table on frequently queried columns (like primary keys), allowing the database to find data quickly without scanning the entire table. The trade-off is that write operations become slower.
16. **Replication:** Creating multiple copies of a database to improve read performance and availability. In a **primary-replica** setup, the primary database handles all write operations, which are then copied to the read replicas. Read requests are spread across the replicas, reducing the load.
17. **Sharding (Horizontal Partitioning):** A technique for splitting a very large database into smaller, more manageable pieces called **shards**, which are distributed across multiple servers. This is essential for scaling write operations and managing massive data volumes.
18. **Vertical Partitioning:** Splitting a database table by *columns* instead of rows. Columns are grouped into separate tables based on their usage patterns, which can improve query performance by reducing the amount of data scanned for a specific request.
19. **Caching:** Storing frequently accessed data in a fast, in-memory cache (like Redis) to reduce the need to fetch it from a slower database. This significantly improves performance. The **cache-aside pattern** is a common strategy where the application first checks the cache; if the data isn't there (a "cache miss"), it retrieves it from the database and stores it in the cache for future requests.
20. **Denormalization:** The process of intentionally adding redundant data to a database to reduce the need for complex and slow `JOIN` operations. This optimizes for faster read performance in read-heavy applications, at the cost of increased storage and more complex write operations.

### **Advanced Concepts in Distributed Systems**

21. **CAP Theorem:** A fundamental principle stating that a distributed system can only simultaneously provide two of the following three guarantees: **Consistency**, **Availability**, and **Partition Tolerance**. Since network partitions are inevitable, systems must choose between consistency and availability.
22. **Blob Storage:** A service (like Amazon S3) designed to store large, unstructured files (BLOBs - Binary Large Objects) such as images, videos, and PDFs. It is highly scalable and cost-effective.
23. **CDN (Content Delivery Network):** A geographically distributed network of servers that caches content close to users. When a user requests content, it's delivered from the nearest CDN server, dramatically reducing latency and improving load times.
24. **WebSockets:** A communication protocol that provides a persistent, two-way connection between a client and a server. Unlike HTTP's request-response model, WebSockets allow the server to push updates to the client in real-time, making them ideal for applications like live chat and online gaming.
25. **Webhooks:** A mechanism for one server to notify another server of an event by sending an HTTP POST request to a pre-registered URL. This is more efficient than constant polling, as communication only happens when there is new information.
26. **Microservices:** An architectural style where a large application is broken down into a collection of smaller, independent services. Each microservice handles a specific business function, has its own database, and can be scaled and deployed independently, improving agility and resilience.
27. **Message Queues:** A component that enables asynchronous communication between microservices. A **producer** service sends a message to the queue, and a **consumer** service processes it later. This decouples services, improves scalability, and handles load spikes gracefully.
28. **Rate Limiting:** A protective measure that restricts the number of requests a client can send to a service within a specific time frame. This prevents server overload caused by malicious attacks (like bots) or buggy clients.
29. **API Gateway:** A centralized service that acts as a single entry point for all client requests in a microservices architecture. It handles cross-cutting concerns like authentication, rate limiting, logging, and routing requests to the appropriate microservice.
30. **Idempotency:** A property of an operation ensuring that making the same request multiple times produces the same result as making it once. This is critical in distributed systems to safely handle network failures and request retries, preventing duplicate actions like charging a customer twice.
