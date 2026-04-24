# Binary Search

Binary search is a powerful technique to find an element in a sorted range or to find the first/last value that satisfies a monotonic condition.

## Key Patterns
- **Binary Search on Answer**: When you need to find the minimum/maximum value X such that a condition is met, and the condition is monotonic (if it's true for X, it's true for all values > X).
- **Lower/Upper Bound**: Finding the first element not less than X or the first element greater than X.

## Common Techniques
- Range: `[low, high]`
- While `low <= high`
- `mid = low + (high - low) / 2` to avoid overflow.

## When to Use
- Sorted arrays.
- Monotonic functions.
- Optimization problems where "is it possible to achieve X?" is easier to answer than "what is the best X?".
