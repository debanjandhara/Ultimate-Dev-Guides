## 📘 Study Plan Index (API-Focused, Python/FastAPI)

### ⏳ Total Time: 6 hours | ⏱️ Each section includes:

* Time estimate
* What to revise
* How to quickly absorb it

---

### **1. API Basics: Request/Response, Status Codes** (45 mins)

* **📖 Revise:**

  * What is an API (Application Programming Interface)?
  * Structure of an HTTP request: method, URL, headers, body
  * Structure of an HTTP response: status code, headers, body
  * Common status codes (200, 201, 400, 401, 403, 404, 500)
* **🛠️ Action:**

  * Skim FastAPI docs on responses
  * Use Postman to send a few sample GET/POST requests

---

### **2. REST Architecture & HTTP Methods** (45 mins)

* **📖 Revise:**

  * REST constraints: statelessness, resource-based, cacheable
  * Idempotency & safe methods
  * HTTP methods: GET (read), POST (create), PUT/PATCH (update), DELETE (remove)
  * URL naming best practices (`/users`, `/users/{id}`)
* **🛠️ Action:**

  * Write quick FastAPI examples using each method

---

### **3. Auth & API Security (JWT, API Key, OAuth2)** (1 hr)

* **📖 Revise:**

  * Difference between authentication vs authorization
  * API Key: sent in headers or query string
  * JWT: JSON Web Token structure (header.payload.signature), how it's used
  * OAuth2 basics (only understand the concept, not flows in depth)
* **🛠️ Action:**

  * Check FastAPI’s `Depends` for auth
  * Review FastAPI's built-in OAuth2/JWT support: [FastAPI security tutorial](https://fastapi.tiangolo.com/tutorial/security/)

---

### **4. Tools: Postman, Swagger, OpenAPI** (30 mins)

* **📖 Revise:**

  * How to test APIs in Postman (collections, auth, environments)
  * Swagger UI: FastAPI auto-generates this at `/docs`
  * OpenAPI Schema at `/openapi.json`
* **🛠️ Action:**

  * Launch a sample FastAPI app and check `/docs`
  * Run a Postman test hitting FastAPI endpoint

---

### **5. Debugging, Testing, Versioning, Pagination** (45 mins)

* **📖 Revise:**

  * FastAPI’s `TestClient` for API testing (uses `requests`-like syntax)
  * Use of logging, `print()` or `uvicorn --reload`
  * API versioning: `/api/v1/users`
  * Pagination: `?limit=10&offset=20` or `?page=2&page_size=10`
* **🛠️ Action:**

  * Write a simple test function with FastAPI’s `TestClient`
  * Skim a GitHub repo with `/api/v1/...` pattern

---

### **6. Real-World Scenarios & Interview Questions** (1 hr)

* **👔 Focus On:**

  * How you’ve used FastAPI (describe one recent project, clearly)
  * “How do you secure APIs?” → Mention API keys, JWT, rate limits
  * “What’s the difference between PUT and PATCH?”
  * “How do you test APIs?”
  * “What is CORS? How do you handle it?”
* **🛠️ Action:**

  * Write & rehearse answers to 5-7 common questions (see sample below)

---

### **7. Mock Q\&A / Quick Test (45 mins)**

#### ✅ Sample Questions:

1. What status code is returned for a successful POST request?
2. Difference between PUT and PATCH?
3. What’s the purpose of middleware in FastAPI?
4. How would you handle CORS in FastAPI?
5. What is OpenAPI and how is it related to Swagger?
6. How does JWT work? What’s inside a token?
7. How would you structure URL routes for a nested resource (`/users/{id}/orders`)?
8. How to implement rate limiting? (briefly: e.g., `X-RateLimit-*` headers or middleware)

---

## ✅ Pro Tips for Interview

* **Explain clearly**: Interviewers love candidates who can simplify technical answers.
* **Project Talk**: Have one detailed example where you used FastAPI to build an API.
* **Security Talk**: Know basics of auth, JWTs, and best practices (avoid putting secrets in URLs).
* **Testing Talk**: Say you used FastAPI’s TestClient or Postman tests.
* **Keep Answers Snappy**: No long monologues. Speak in brief, clear bursts.

---



## ✅ 1. API Basics: Request/Response, Status Codes

---

### 📘 What is an API (Application Programming Interface)?

* An **API** is a set of rules that allows software applications to communicate with each other.
* In **web development**, an API typically refers to **Web APIs**, which expose data and functionality over the **HTTP** protocol.
* Think of it as a **messenger** between a client (like a browser or mobile app) and a server (like your FastAPI backend).

🧠 **Example**: When a frontend app wants to display a list of users, it calls an endpoint like:

```
GET https://api.example.com/users
```

The backend returns data (usually in JSON), and the frontend displays it.

---

### 🔁 HTTP Request Structure

When a client (browser, Postman, or code) sends an API call, it sends an **HTTP Request** with these components:

| Part        | Description                                                |
| ----------- | ---------------------------------------------------------- |
| **Method**  | Specifies the action (GET, POST, PUT, DELETE, etc.)        |
| **URL**     | The endpoint being accessed (e.g., `/users/5`)             |
| **Headers** | Meta info like `Content-Type`, `Authorization`             |
| **Body**    | (Optional) Data sent with the request, usually in POST/PUT |

#### 🧪 Example Request (POST)

```
POST /users HTTP/1.1
Host: api.example.com
Content-Type: application/json
Authorization: Bearer <token>

{
  "name": "Debanjan",
  "email": "deb@example.com"
}
```

---

### 🧾 HTTP Response Structure

When the server receives a request, it responds with an **HTTP Response**, which includes:

| Part            | Description                                       |
| --------------- | ------------------------------------------------- |
| **Status Code** | 3-digit code indicating result (e.g., 200, 404)   |
| **Headers**     | Metadata (e.g., content type, CORS headers)       |
| **Body**        | The actual data returned (JSON, HTML, text, etc.) |

#### 🧪 Example Response (Success)

```
HTTP/1.1 201 Created
Content-Type: application/json

{
  "id": 7,
  "name": "Debanjan",
  "email": "deb@example.com"
}
```

---

### ✅ Common HTTP Status Codes

Status codes are divided into categories:

| Code                          | Meaning                       | When It’s Used                                |
| ----------------------------- | ----------------------------- | --------------------------------------------- |
| **200 OK**                    | Success (GET, PUT, DELETE)    | Resource successfully fetched/updated/deleted |
| **201 Created**               | Resource created              | Successful POST request                       |
| **204 No Content**            | Success, no data returned     | Used after DELETE                             |
| **400 Bad Request**           | Client-side error             | Missing fields, malformed JSON                |
| **401 Unauthorized**          | No/invalid auth token         | JWT/token missing or wrong                    |
| **403 Forbidden**             | Authenticated but not allowed | Role-based access denial                      |
| **404 Not Found**             | Resource doesn't exist        | Invalid endpoint or ID                        |
| **500 Internal Server Error** | Server crash/bug              | Code error or unhandled exception             |

🔸 Bonus:

* `422 Unprocessable Entity`: Used by FastAPI for validation errors
* `301`, `302`: Redirects (not common in APIs)

---

### 🛠️ FastAPI-Specific Notes (Quick Glance)

In FastAPI, you can **customize the response** like this:

```python
from fastapi import FastAPI, Response, status

app = FastAPI()

@app.post("/users", status_code=status.HTTP_201_CREATED)
def create_user():
    return {"message": "User created"}
```

You can return:

* JSON (default)
* Custom status codes
* Custom headers using `Response` or `JSONResponse`

---

### 🧪 Action Tasks to Reinforce

#### ✅ 1. Skim FastAPI Docs

* Go to: [https://fastapi.tiangolo.com](https://fastapi.tiangolo.com)
* Check: [Response Status Code](https://fastapi.tiangolo.com/tutorial/response-status-code/)
* Also check: [Request Body](https://fastapi.tiangolo.com/tutorial/body/)

#### ✅ 2. Use Postman (or Curl)

Try these in Postman:

* `GET https://jsonplaceholder.typicode.com/users`
* `POST https://jsonplaceholder.typicode.com/posts` with a JSON body

Play with:

* Headers
* Auth tab
* Viewing response status and body

---

### 🧠 Recap Flash Points

* **API = Contract** between client and server
* Request = Method + URL + Headers + Body
* Response = Status Code + Headers + Body
* Status Codes = Critical in interviews (know 200, 201, 400, 401, 403, 404, 500 cold)
* FastAPI makes response handling simple and explicit

---

### **2. REST Architecture & HTTP Methods** (45 mins)

---

#### **📖 Revise:**

✅ **REST Constraints**

* **Stateless**: Each request is independent; server stores no client session.
* **Resource-Based**: Everything is treated as a resource (`/users`, `/orders/5`).
* **Cacheable**: Responses indicate whether they can be cached to improve performance.

✅ **HTTP Methods: GET, POST, PUT, PATCH, DELETE**

| Method   | Action  | Idempotent? | Safe? | Typical Use             |
| -------- | ------- | ----------- | ----- | ----------------------- |
| `GET`    | Read    | ✅ Yes       | ✅ Yes | Fetch data              |
| `POST`   | Create  | ❌ No        | ❌ No  | Add new resource        |
| `PUT`    | Replace | ✅ Yes       | ❌ No  | Replace entire resource |
| `PATCH`  | Update  | ✅ Yes       | ❌ No  | Update part of resource |
| `DELETE` | Remove  | ✅ Yes       | ❌ No  | Delete a resource       |

> 🧠 **Idempotent** means: repeating the request has the same result after the first time (e.g., multiple `DELETE` calls still just delete the item once).

✅ **URL Naming Best Practices**

* Use **nouns, not verbs**.
* Always use **plural** for resources:

  * Good: `/users`, `/users/{id}`
  * Avoid: `/getUser`, `/deleteUser`

✅ **Are GET/POST/PUT just naming?**

* ❌ No — they are **real HTTP methods**, not just labels.
* They affect how the server, routers, browsers, and caches handle requests.
* They define how data is sent (e.g., `POST` has body, `GET` does not), how it is cached, and how secure it must be.

---

#### **🛠️ Action:**

✅ Write FastAPI routes for each method:

```python
@app.get("/users")         # Read all users
@app.get("/users/{id}")    # Read one user
@app.post("/users")        # Create new user
@app.put("/users/{id}")    # Replace user
@app.patch("/users/{id}")  # Partially update user
@app.delete("/users/{id}") # Delete user
```

---

## ✅ **3. Auth & API Security (JWT, API Key, OAuth2)**

### 📍 Why this matters for your interview:

Security is one of the top topics in any API-based backend developer role. You’ll almost certainly be asked about how to **secure APIs**, how you’ve **implemented auth in FastAPI**, and when to use **JWT vs API key**.

---

### 🔐 **Authentication vs Authorization**

| **Authentication**                                  | **Authorization**                         |
| --------------------------------------------------- | ----------------------------------------- |
| **Who are you?** Verifies the user’s identity       | **What can you do?** Grants access rights |
| Usually done via login (username + password, token) | Done after authentication                 |
| Implemented via API keys, JWT, OAuth2, etc.         | Implemented via role/permissions checks   |
| ✅ *"Login successful"*                              | ✅ *"You can access this admin route"*     |

> **Interview Tip:** If asked “How do you secure APIs?”, always mention both:
> **“Authentication verifies the user, authorization checks their permissions.”**

---

### 🔑 **API Key Authentication**

#### ✅ Concept:

An **API key** is a unique token that identifies the caller of the API — like a password for your client.

#### 📌 Key Characteristics:

* Sent via request **header** (`Authorization: Api-Key abc123`) or **query param** (`?api_key=abc123`)
* Common in **public APIs** or when integrating **third-party services**
* Easy to use, but **less secure** than token-based systems

#### 🛡️ Risks:

* Can be **exposed in URL logs**
* No built-in expiration or identity info

#### 💡 FastAPI Implementation:

```python
from fastapi import FastAPI, Depends, HTTPException, Security
from fastapi.security.api_key import APIKeyHeader

app = FastAPI()
api_key_header = APIKeyHeader(name="X-API-Key", auto_error=True)

API_KEY = "mysecret"

def get_api_key(api_key: str = Depends(api_key_header)):
    if api_key != API_KEY:
        raise HTTPException(status_code=403, detail="Invalid API Key")
    return api_key

@app.get("/secure-data")
def secure_data(api_key: str = Depends(get_api_key)):
    return {"message": "You have access"}
```

---

### 🪙 **JWT (JSON Web Token)**

#### ✅ Concept:

A **JWT** is a signed token that holds user information and is used to **authenticate** requests in a **stateless** way.

#### 🔧 Structure:

```
header.payload.signature
```

* **Header**: algorithm used (`HS256`, `RS256`)
* **Payload**: user info (e.g., user\_id, roles), expiry time (`exp`)
* **Signature**: verifies the token wasn’t tampered with

#### 🔁 Flow:

1. Client logs in with credentials
2. Server generates a JWT and returns it
3. Client stores the token (in memory/localStorage)
4. Client sends JWT in `Authorization: Bearer <token>` header for protected requests
5. Server **decodes & validates** the JWT on each request

#### ✅ FastAPI Example (with JWT decode):

```python
from fastapi import Depends, HTTPException, status
from fastapi.security import OAuth2PasswordBearer
from jose import JWTError, jwt

oauth2_scheme = OAuth2PasswordBearer(tokenUrl="token")
SECRET_KEY = "yoursecret"
ALGORITHM = "HS256"

def verify_token(token: str = Depends(oauth2_scheme)):
    try:
        payload = jwt.decode(token, SECRET_KEY, algorithms=[ALGORITHM])
        username: str = payload.get("sub")
        if username is None:
            raise HTTPException(status_code=401)
        return username
    except JWTError:
        raise HTTPException(status_code=401)

@app.get("/users/me")
def get_user_me(current_user: str = Depends(verify_token)):
    return {"user": current_user}
```

> Use `python-jose` for JWT encoding/decoding: `pip install python-jose[cryptography]`

---

### 🔐 **OAuth2 Basics** (high-level understanding)

#### ✅ What is it?

OAuth2 is a **delegated authorization framework** — used to **grant third-party apps** limited access to a user’s resources **without sharing credentials**.

#### 🧠 Understand This:

* Popular in social logins (Login with Google/Facebook)
* It involves **Access Tokens**, issued by an **Authorization Server**
* The client uses the token to access a protected API
* Common **flows**: Authorization Code (web), Password Grant (mobile), Client Credentials (machine-to-machine)

#### 💡 In FastAPI:

FastAPI uses a simplified **OAuth2PasswordBearer** (not full OAuth2 flow) to get token from header.

```python
from fastapi.security import OAuth2PasswordBearer

oauth2_scheme = OAuth2PasswordBearer(tokenUrl="token")

@app.get("/secure")
def secure(token: str = Depends(oauth2_scheme)):
    return {"token": token}
```

> **Note:** You’re only simulating the token check. Real OAuth2 involves external identity providers (Google, Auth0, etc.)

---

### 🛠️ FastAPI Security Tools You Must Know:

#### ✅ `Depends`

Used to inject reusable security dependencies:

```python
def verify_token(): ...
@app.get("/private", dependencies=[Depends(verify_token)])
```

#### ✅ `OAuth2PasswordBearer`

Extracts token from `Authorization: Bearer <token>`

#### ✅ `Security`

Advanced version of `Depends`, allows `scopes` and more flexible control.

---

### ✅ Summary Cheatsheet:

| Method  | Description                      | FastAPI Tool           | Real-world Use Case                |
| ------- | -------------------------------- | ---------------------- | ---------------------------------- |
| API Key | Static token in header or query  | `APIKeyHeader`         | Internal APIs, rate-limited access |
| JWT     | Token with identity info         | `OAuth2PasswordBearer` | Modern apps, mobile APIs           |
| OAuth2  | Auth delegation w/ access tokens | (concept only)         | "Login with Google" features       |

---

### 🔍 Interview Pro Tip:

If asked **“How do you secure APIs in FastAPI?”**, answer like this:

> “I use `Depends` to extract and verify tokens. For token-based auth, I prefer JWTs for stateless identity. I use OAuth2PasswordBearer to extract tokens from headers, decode them using `python-jose`, and raise an exception if invalid. For internal APIs, I sometimes use simple API key headers. I also ensure HTTPS, handle CORS, and avoid exposing sensitive data in query params.”

---

## ✅ 4. Tools: Postman, Swagger, OpenAPI (Interview-Relevant Guide)

### 🎯 Why This Matters in Interviews:

Tools like **Postman**, **Swagger UI**, and **OpenAPI** are critical for:

* Testing APIs before frontend integration
* Sharing documentation with clients or teams
* Verifying request structure, headers, and authentication flows

Interviewers often ask:

* “How do you test your APIs?”
* “What’s Swagger/OpenAPI used for?”
* “How do you handle API documentation?”

---

### 📌 POSTMAN: Testing APIs Interactively

#### 🔹 What is Postman?

Postman is a GUI-based API client that allows developers to:

* Send requests to API endpoints
* Set headers, authentication, and body data
* View responses in real-time (JSON, XML, etc.)
* Save and organize requests into collections

#### 🧠 Key Postman Features You Must Know:

| Feature                | What It Does                                                                |
| ---------------------- | --------------------------------------------------------------------------- |
| **Collections**        | Group of saved requests for a project or API version                        |
| **Environments**       | Define variable sets (e.g., `{{base_url}}`, `{{token}}`) for dev/stage/prod |
| **Authentication**     | Supports API Key, Bearer Token (JWT), OAuth2, Basic Auth                    |
| **Pre-request Script** | Run JS logic before sending request (e.g., set token headers)               |
| **Tests tab**          | Run test scripts on response (`pm.response.to.have.status(200)` etc.)       |

#### 🛠️ How to Test a FastAPI Endpoint in Postman:

1. Start your FastAPI server (`uvicorn main:app --reload`)
2. In Postman:

   * Method: `GET`
   * URL: `http://127.0.0.1:8000/items/1`
   * Click “Send”
3. Add headers if needed: e.g., `Authorization: Bearer <your_token>`

---

### 📌 SWAGGER UI (via FastAPI's Auto-Docs)

#### 🔹 What is Swagger UI?

* A **web interface** that documents and lets you interact with your API
* FastAPI **auto-generates** this at `/docs` using your route definitions and Pydantic models
* Based on the **OpenAPI standard**

#### ✅ What You See in `/docs`:

* List of all endpoints (`GET /users`, `POST /items`)
* Input parameters and data models (auto from FastAPI + Pydantic)
* “Try it out” button to execute API calls directly from browser

#### 🔐 Authentication Integration:

* If you define OAuth2/JWT in your FastAPI app, Swagger UI includes a login/auth flow
* Example: If using `OAuth2PasswordBearer`, you’ll see an **Authorize** button in Swagger

#### 🧪 Why It’s Useful:

* Developers or clients can **test APIs without Postman**
* Guarantees your docs are always **in sync with your code**

---

### 📌 OpenAPI (formerly Swagger Spec)

#### 🔹 What is OpenAPI?

* It’s a **specification** (YAML or JSON) that describes your API: endpoints, methods, parameters, responses, and schemas.
* FastAPI serves this automatically at `/openapi.json`

#### 🤓 Example Structure:

```json
{
  "openapi": "3.0.2",
  "info": {
    "title": "My API",
    "version": "1.0.0"
  },
  "paths": {
    "/items/{item_id}": {
      "get": {
        "summary": "Read Item",
        "parameters": [
          {
            "name": "item_id",
            "in": "path",
            "required": true,
            "schema": {
              "type": "string"
            }
          }
        ],
        "responses": {
          "200": {
            "description": "Successful Response"
          }
        }
      }
    }
  }
}
```

#### 🔄 Why It Matters:

* Frontend teams, tools like Swagger UI, and auto-generators (e.g., client SDKs) use OpenAPI
* Can be exported and shared, or used with tools like [Stoplight](https://stoplight.io/), [Redoc](https://redoc.ly/)

---

### ✅ ACTION: Try It Yourself (Mini Task)

1. **Launch FastAPI App**

```bash
uvicorn main:app --reload
```

2. **Open Swagger UI**

   * Visit: `http://127.0.0.1:8000/docs`
   * Explore all routes and test them live
3. **Access OpenAPI Spec**

   * Visit: `http://127.0.0.1:8000/openapi.json`
   * Observe the schema definition
4. **Open Postman**

   * Make a `GET` request to `http://127.0.0.1:8000/items/1`
   * Add headers (if required)
   * Send and analyze response

---

### 🎯 What to Say in an Interview:

> “I typically use Swagger UI for quick exploration and debugging, while I use Postman for more complex testing, auth flows, and automating test suites using collections and environments. Since FastAPI auto-generates OpenAPI specs, documentation stays consistent with my code.”

---

## ✅ Section 5: Debugging, Testing, Versioning, and Pagination in FastAPI

⏱️ **Time Estimate: \~45 mins**
🎯 **Goal:** Gain practical clarity on how to test, debug, version, and paginate APIs confidently — all common interview questions for backend roles.

---

### 🧪 1. **Testing APIs in FastAPI** (`TestClient`)

#### ✅ What it is:

FastAPI uses **`TestClient` from `starlette.testclient`**, which is similar to the popular `requests` library. This allows you to simulate requests and assert responses **without actually running the server**.

#### 🔧 How to use:

```python
from fastapi.testclient import TestClient
from main import app  # your FastAPI app

client = TestClient(app)

def test_read_users():
    response = client.get("/users")
    assert response.status_code == 200
    assert "users" in response.json()
```

#### 🧠 Why it's useful:

* Fast execution during development
* No need to spin up Uvicorn or make real HTTP calls
* Can be integrated into CI pipelines

---

### 🐞 2. **Debugging Techniques in FastAPI**

#### ✅ Options:

* `print()` for quick checks (but not suitable for production)
* Use Python’s `logging` module for structured and controlled logs
* Run your server in reload/debug mode:

  ```bash
  uvicorn main:app --reload
  ```

#### 🧠 Common logging setup:

```python
import logging

logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

@app.get("/health")
def check_health():
    logger.info("Health check called")
    return {"status": "ok"}
```

#### 🔥 Bonus Tip:

FastAPI logs exceptions by default in development mode. You can also use middlewares to log requests/responses for tracing.

---

### 🧭 3. **API Versioning** (`/api/v1/...`)

#### ✅ What it is:

API versioning is the practice of **including the version number in your API paths**, so older clients are not broken when your API evolves.

#### 📌 Common pattern:

```bash
GET /api/v1/users
POST /api/v1/users
GET /api/v2/users  # updated version with changes
```

#### 🧠 Why it's important:

* Allows you to make backward-incompatible changes
* Maintains stability for existing clients
* Clear contract for each API version

#### ✅ How to implement in FastAPI:

```python
from fastapi import APIRouter

v1_router = APIRouter(prefix="/api/v1")

@v1_router.get("/users")
def get_users():
    return [{"id": 1, "name": "Alice"}]

app.include_router(v1_router)
```

---

### 📦 4. **Pagination in APIs**

#### ✅ What it is:

Pagination is used to **split large datasets** into manageable chunks when sending API responses.

#### 📌 Two common styles:

**Offset-based Pagination**:

```bash
GET /users?limit=10&offset=20
```

* `limit`: how many items to return
* `offset`: how many to skip

**Page-based Pagination**:

```bash
GET /users?page=2&page_size=10
```

* `page`: which page number
* `page_size`: how many items per page

#### 🧠 Example FastAPI endpoint:

```python
from fastapi import Query

@app.get("/users")
def get_users(limit: int = Query(10), offset: int = Query(0)):
    all_users = [{"id": i, "name": f"User {i}"} for i in range(1, 101)]
    return all_users[offset : offset + limit]
```

#### 🔥 Interview Tip:

You can mention pagination as a **performance optimization** strategy, and mention combining it with **total count metadata**:

```json
{
  "total": 100,
  "page": 2,
  "users": [...]
}
```

---

### 🛠️ Actionables

1. **Write a test case** using `TestClient` for one route (e.g., `GET /health`)
2. **Add a log** statement in a route and run using `--reload`
3. **Prefix a router** with `/api/v1` and check URL
4. **Implement a paginated endpoint** with `limit` and `offset`

---

### ✅ Summary (Cheat Sheet)

| Concept    | Keyword           | Example / Tip                              |
| ---------- | ----------------- | ------------------------------------------ |
| Testing    | `TestClient`      | `client.get("/users")` and assert response |
| Debugging  | `logging`         | `logger.info("message")`                   |
| Versioning | `/api/v1/`        | Use `prefix="/api/v1"` in routers          |
| Pagination | `limit`, `offset` | `GET /items?limit=5&offset=10`             |

---

## ✅ **6. Real-World Scenarios & Interview Questions** (Explanatory Notes)

This section is designed to help you speak confidently in interviews about your hands-on experience and handle common conceptual questions that are often asked. Let’s break it down.

---

### 👔 **1. Describe Your FastAPI Project Clearly**

**Sample Structure for Interview Answer:**

> “In one of my recent projects, I developed a backend API using FastAPI for an admin dashboard. It managed CRUD operations for user accounts, orders, and roles. I used PostgreSQL with SQLAlchemy as the ORM. Authentication was handled via JWT tokens, and I used FastAPI's `Depends()` for injecting user information based on the token. Swagger UI helped document and test APIs quickly. I also deployed the application using Uvicorn and handled static files with nginx. For testing, I used FastAPI’s `TestClient`.”

✅ **Key Talking Points to Cover:**

* What the project did (e.g., dashboard, CMS, product API)
* Stack used (FastAPI, DB, Auth)
* How routing, models, and DB interaction worked
* Tools: Swagger, Postman, TestClient
* Deployment or API versioning if applicable

📌 **Tip:** Keep this to 60–90 seconds. Be specific, not vague.

---

### 🔐 **2. How Do You Secure APIs?**

**Answer Structure:**

> “I implement several layers of security for APIs:
>
> * **Authentication** using JWT tokens for logged-in users.
> * **API Keys** for internal services or partner integrations.
> * **Rate Limiting** to prevent abuse or DoS attacks (can be implemented via proxy servers like NGINX or middleware).
> * **HTTPS** for encrypted communication.
> * **CORS** policies to restrict cross-origin access.
> * **Input validation** using FastAPI’s Pydantic models to avoid injection attacks.”

✅ **Key Security Features to Mention:**

* JWT tokens (`Authorization: Bearer <token>`)
* FastAPI's `Depends()` for user auth
* `X-API-Key` in headers
* Rate limiting via custom middleware or external tool like **Redis + Starlette middleware**
* Use of HTTPS and environment variables for secrets

---

### 🔁 **3. What’s the Difference Between PUT and PATCH?**

**Answer:**

> “Both PUT and PATCH are used to update resources, but:
>
> * **PUT** is used for **complete replacement** of a resource. It’s idempotent — calling it multiple times has the same effect.
> * **PATCH** is used for **partial updates** — you update only the fields you send.
>
> For example, if a user profile has name and email:
>
> * PUT requires both fields.
> * PATCH can send only `{"name": "New Name"}`.”

✅ Summary:

| Method | Full/Partial | Idempotent |
| ------ | ------------ | ---------- |
| PUT    | Full         | Yes        |
| PATCH  | Partial      | Yes        |

---

### 🧪 **4. How Do You Test APIs?**

**Answer:**

> “I test APIs using two methods:
>
> * **Postman** for manual testing: I create collections with variables and test various endpoints and headers.
> * **Automated tests** using FastAPI’s `TestClient` (which wraps `requests`): I write unit tests to assert response status codes, response data, and DB interactions.
>
> I also validate edge cases and unauthorized access.”

**Code Example using FastAPI's TestClient:**

```python
from fastapi.testclient import TestClient
from main import app

client = TestClient(app)

def test_read_user():
    response = client.get("/users/1")
    assert response.status_code == 200
    assert response.json()["id"] == 1
```

✅ Also mention:

* Testing 401/403 scenarios
* Checking response payloads
* Testing with/without headers

---

### 🌐 **5. What is CORS? How Do You Handle It in FastAPI?**

**Answer:**

> “CORS (Cross-Origin Resource Sharing) is a browser security mechanism that restricts requests made from a different origin (domain). For example, a frontend on `frontend.com` calling an API on `api.com` needs CORS enabled.
>
> In FastAPI, I use the `CORSMiddleware` to allow specific origins, methods, and headers.”

**FastAPI CORS Setup:**

```python
from fastapi.middleware.cors import CORSMiddleware

app.add_middleware(
    CORSMiddleware,
    allow_origins=["http://localhost:3000"],  # or ["*"] for all
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)
```

✅ Mention:

* CORS is mostly a browser restriction (not server)
* Always restrict `allow_origins` in production

---

### 🛠️ **Action Items: Write & Rehearse Your Answers**

Here are **7 quick mock questions** to rehearse answers for (based on above):

1. Tell me about a recent backend API project you worked on.
2. How would you secure an API?
3. Explain the difference between PUT and PATCH.
4. How do you write and run tests for your API?
5. What is JWT and how do you use it in FastAPI?
6. What are HTTP status codes you commonly use?
7. How would you implement pagination in an API?

---

✅ **Bonus Tip: STAR Format for Behavioral API Questions**
If asked “Tell me about a challenge in an API project…”, use:

* **S**ituation: Describe context
* **T**ask: What was the goal
* **A**ction: What *you* did
* **R**esult: What was the outcome

---

## ✅ **7. Mock Q\&A / Quick Test — Explanatory Notes**

---

### **1. What status code is returned for a successful POST request?**

🔹 **Answer:**
A successful POST request usually returns **`201 Created`**.

🔸 **Explanation:**

* `POST` is used to create a new resource on the server.
* `201` means the resource was **successfully created**.
* Optionally, the server may include a `Location` header pointing to the newly created resource (`/users/123`).
* Sometimes, `200 OK` is returned if the server returns some computed result or doesn't actually store the resource permanently.

🧠 **FastAPI Example:**

```python
from fastapi import FastAPI, status

@app.post("/items/", status_code=status.HTTP_201_CREATED)
def create_item(item: Item):
    return item
```

---

### **2. Difference between PUT and PATCH?**

🔹 **Answer:**

* `PUT` → full update (replace the entire resource)
* `PATCH` → partial update (modify only specified fields)

🔸 **Example:**

```json
PUT /user/1
{
  "name": "Alice",
  "email": "alice@example.com"
}
```

This **replaces** the entire user resource.

```json
PATCH /user/1
{
  "email": "new@example.com"
}
```

This **updates only the email**, keeping the name intact.

🧠 **Interview Tip:** Mention that PUT is idempotent (calling it multiple times has the same effect), whereas PATCH may not be.

---

### **3. What’s the purpose of middleware in FastAPI?**

🔹 **Answer:**
Middleware is used to process requests **before** they reach the route handlers and **after** the response is sent back.

🔸 **Common Use Cases:**

* Logging
* Measuring request time
* Modifying headers
* Authentication checks (e.g., custom token validation)
* CORS (behind the scenes)

🧠 **FastAPI Example:**

```python
from fastapi import Request
from starlette.middleware.base import BaseHTTPMiddleware

@app.middleware("http")
async def log_requests(request: Request, call_next):
    response = await call_next(request)
    return response
```

---

### **4. How would you handle CORS in FastAPI?**

🔹 **Answer:**
CORS (Cross-Origin Resource Sharing) is needed when frontend and backend are on **different origins** (domains/ports).

🔸 **How to enable in FastAPI:**
Use `CORSMiddleware` from `starlette.middleware`.

🧠 **Code Example:**

```python
from fastapi.middleware.cors import CORSMiddleware

app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],  # or specific domains
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)
```

⚠️ In production, replace `["*"]` with specific domains (`["https://your-frontend.com"]`).

---

### **5. What is OpenAPI and how is it related to Swagger?**

🔹 **Answer:**

* **OpenAPI** is a specification that defines how APIs should be described (in JSON/YAML).
* **Swagger** is a set of tools built around the OpenAPI spec.

🔸 **In FastAPI:**

* Automatically generates an OpenAPI schema
* `/docs` → Swagger UI
* `/redoc` → ReDoc UI
* `/openapi.json` → Raw schema

🧠 FastAPI auto-docs = OpenAPI + Swagger UI under the hood.

---

### **6. How does JWT work? What’s inside a token?**

🔹 **Answer:**
JWT (JSON Web Token) is a compact, URL-safe token used for authentication.

🔸 **Structure:**

```
<Header>.<Payload>.<Signature>
```

* **Header:** Type of token (JWT) + signing algorithm (e.g., HS256)
* **Payload:** Claims (e.g., `user_id`, `exp`, `role`)
* **Signature:** Verifies the token hasn’t been tampered with

🔸 **How it works:**

* Client logs in → gets a JWT from the server
* Client sends JWT in `Authorization: Bearer <token>` header
* Server verifies it (e.g., using a secret or public key)

🧠 In FastAPI:

```python
from fastapi.security import OAuth2PasswordBearer

oauth2_scheme = OAuth2PasswordBearer(tokenUrl="token")

@app.get("/users/me")
async def read_users_me(token: str = Depends(oauth2_scheme)):
    return decode_token(token)
```

---

### **7. How would you structure URL routes for a nested resource (`/users/{id}/orders`)?**

🔹 **Answer:**
Use **nested resource patterns** to represent hierarchical relationships between models (like users and their orders).

🔸 **RESTful Route Example:**

* `GET /users/123/orders` → list all orders for user 123
* `POST /users/123/orders` → create an order for user 123
* `GET /users/123/orders/456` → get specific order 456 for user 123

🧠 FastAPI Route Example:

```python
@app.get("/users/{user_id}/orders")
def get_orders(user_id: int):
    return {"user_id": user_id, "orders": [...]}
```

---

### **8. How to implement rate limiting?**

🔹 **Answer:**
Rate limiting is used to **prevent abuse** of your API by limiting the number of requests per time window.

🔸 **Options:**

* Use `X-RateLimit-*` headers
* Token bucket / sliding window algorithm
* Middleware-based solution
* External tools: **Redis + custom logic**, **FastAPI plugins**, or **API Gateway**

🧠 **Simple Middleware Idea:**

```python
# Not production-ready, but concept:
# Track IP -> request count -> time window
# Deny if limit exceeded
```

🧠 **Better Options:**

* Use `slowapi` or `fastapi-limiter` with Redis backend

🔸 **Example Headers:**

```http
X-RateLimit-Limit: 100
X-RateLimit-Remaining: 45
X-RateLimit-Reset: 1698909820
```

---
