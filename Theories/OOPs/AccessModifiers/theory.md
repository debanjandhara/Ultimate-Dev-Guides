# Access Modifiers in C++

Access Modifiers or Access Specifiers in a class are used to assign the
accessibility to the class members, i.e., they set some restrictions
on the class members so that they can’t be directly accessed by outside functions.

There are 3 types of access modifiers available in C++:

- **Public**
- **Private**
- **Protected**

For Java, an additional modifier exists:

- **Default (Java)**

## Syntax:

```cpp
class ClassName {
public:
    // Members declared here are accessible from anywhere
    int publicVar;
    void publicMethod();

private:
    // Members declared here are accessible only within the class
    // Only the member functions or friend functions/friend class are allowed to access the private data members of the class.
    int privateVar;
    void privateMethod();

protected:
    // Members declared here are accessible within the class and by derived classes
    int protectedVar;
    void protectedMethod();
};
```
