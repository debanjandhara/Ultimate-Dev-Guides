Sure! Here's a simple example showing how to call a method inside the same class using just the method name (`greet();`) — without using an object reference.

---

### ✅ Example: Calling a method inside the same class

```java
public class Hello {

    void greet() {
        System.out.println("Hello from greet method!");
    }

    void sayHello() {
        // Calling greet() from inside the same class, same instance
        greet();  // ✅ This is valid
    }

    public static void main(String[] args) {
        Hello h = new Hello();
        h.sayHello();  // This will call greet() internally
    }
}
```

---

### 🔍 What’s happening:

* `greet()` is called **from another non-static method** (`sayHello()`) inside the **same class**.
* So `greet();` works fine — it is called **implicitly on `this`**, which means the current object.
* `object.greet();` would also work — like `h.greet();` in `main`.

---

### Want to try `greet()` inside `main()`?

You can’t directly use `greet();` inside `main()` unless `greet()` is **static**, because `main()` is a static method.

Example:

```java
public class Hello {

    static void greet() {
        System.out.println("Hello from static greet!");
    }

    public static void main(String[] args) {
        greet();  // works because both are static
    }
}
```

Let me know if you want both static and non-static comparisons side-by-side!
