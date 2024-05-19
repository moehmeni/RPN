# RPN
Reverse Polish notation (RPN) calculator is a simple project to practice with c++ Standard Template Library (STL) and stack data structure.

# Explanation
The concept of a stack, a last-in/first-out construct, is integral to the left-to-right evaluation of RPN. In the example 3 4 −, first the 3 is put onto the stack, then the 4; the 4 is now on top and the 3 below it. The subtraction operator removes the top two items from the stack, performs 3 − 4, and puts the result of −1 onto the stack.

The common terminology is that added items are pushed on the stack and removed items are popped.

The advantage of reverse Polish notation is that it removes the need for order of operations and parentheses that are required by infix notation and can be evaluated linearly, left-to-right.
> [!TIP]
> For example, the infix expression (3 + 4) × (5 + 6) becomes 3 4 + 5 6 + × in reverse Polish notation.

<sub>*Text from Wikipedia*</sub>

# Playground
```
make
```
```
./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
>> 42
```
