#Day 4 
# 📌 Palindrome Number Checker (C++)

## 🔍 Problem Statement
Given an integer `x`, determine whether it is a **palindrome number**.  
A palindrome number reads the same backward as forward.

### Examples
- `121` → Palindrome ✅  
- `-121` → Not a palindrome ❌  
- `10` → Not a palindrome ❌  

---

## 🛠️ Approach
The solution checks whether the given number is a palindrome by reversing it and comparing it with the original value.

### Steps:
1. If the number is negative, return `false`.
2. Store the original number.
3. Reverse the number digit by digit using modulo and division.
4. Compare the reversed number with the original number.
5. Return the result.

---

## Time and Space Complexity

Time Complexity: O(log n)

Space Complexity: O(1)
