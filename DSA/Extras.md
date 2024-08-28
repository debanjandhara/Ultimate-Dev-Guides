Armstrong Number : How to Access Individual Integers from a number :
remainder = temp % 10  # The remainder when `temp` is divided by 10 gives the last digit of `temp`.
sum += remainder ** 3  # The cube of the last digit is added to `sum`.
temp = temp // 10  # The last digit is removed by dividing `temp` by 10 and using integer division.

Check prime, Question Do

Other algorithms use the divide-and-conquer paradigm, such as Quicksort, Binary Search, and Strassen’s algorithm.
Divide and conquer algorithms (which merge sort is a type of) employ recursion within its approach to solve specific problems. Divide and conquer algorithms decompose complex problems into smaller sub-parts, where a defined solution is applied recursively to each sub-part. Each sub-part is then solved separately, and the solutions are recombined to solve the original problem.

initialize variables

first = second = float('-inf')

for i, language in enumerate(languages):
    print(i, language)


------------

list.index(element, start, end)
my_list = [10, 20, 30, 20, 40]
index = my_list.index(20)
print(index)  # Output: 1 (first occurrence of 20)
my_list = [10, 20, 30, 20, 40]
index = my_list.index(20, 2)  # Start searching from index 2
print(index)  # Output: 3 (first occurrence of 20 after index 2)

index = my_list.index(20, 2, 4)  # Search between index 2 and 4
print(index)  # Output: 3

-------------
