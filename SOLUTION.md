# Problem 095 - SubSir 的对换轮换置换 - SOLUTION

## Summary

Successfully solved the permutation, cycle, and transposition problem with a perfect score of 100/100 on the Online Judge.

## Submission History

1. **Attempt 1 (Submission ID: 766472)**: Wrong Answer on all test cases
   - Issue: Missing copy constructors and assignment operators causing memory management issues

2. **Attempt 2 (Submission ID: 766480)**: Wrong Answer on all test cases
   - Issue: Incorrect implementation of cycle and transposition apply methods
   - Was directly swapping/rotating values instead of converting to permutation first

3. **Attempt 3 (Submission ID: 766490)**: ✅ ACCEPTED - 100/100
   - Fixed all issues
   - All 10 test points passed

## Key Implementation Details

### 1. Permutation Operations
- Identity permutation initialization
- Permutation multiplication: `(this * other)[i] = this[other[i]]`
- Inverse permutation: `inv[mapping[i]] = i`
- Apply: `new[i] = old[mapping[i]]`

### 2. Cycle Operations
- Cycle representation as permutation: For cycle {b_0, b_1, ..., b_{k-1}}, the permutation maps b_i → b_{(i+1) mod k}
- Apply by converting to permutation first

### 3. Transposition Operations
- Special case of 2-cycle
- Identity transposition when a == b
- Apply by converting to permutation first

### 4. Memory Management
- Implemented copy constructors for Permutation and Cycle structs
- Implemented copy assignment operators
- Proper destructor to free dynamically allocated arrays

## Files

- `src.hpp`: Complete implementation of all required functions
- `main.cpp`: Test driver provided by the problem
- `test_cycle.cpp`, `test_detailed.cpp`: Additional test files for verification

## Final Score: 100/100 ✅

All test cases passed, including the memory management tests (test points 6-10).
