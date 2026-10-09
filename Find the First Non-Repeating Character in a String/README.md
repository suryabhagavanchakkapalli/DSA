# DSA Practice: First Non-Repeating Character in a String

## Problem Description

Given a string, find the first non-repeating character. A non-repeating character is a character that appears exactly once in the string.

If no non-repeating character exists, return `-1`.

## Input

A string `s`.

## Output

An first non-repeating character. If no such character exists, return `-1`.

## Examples

### Example 1

**Input:**
`swiss`

**Output:**
`w`

**Explanation:** The character `w` appears exactly once and is the first non-repeating character.

### Example 2

**Input:**
`aabbcc`

**Output:**
`-1`

**Explanation:** Every character appears more than once.

### Example 3

**Input:**
`programming`

**Output:**
`p`

**Explanation:** The character `p` appears exactly once and is the first non-repeating character.

### Example 4

**Input:**
`aabbcdde`

**Output:**
`c`

**Explanation:** The character `c` appears exactly once and is the first non-repeating character.

### Example 5

**Input:**
`""`

**Output:**
`-1`

**Explanation:** The string is empty, so no non-repeating character exists.

## Implementation Languages

Implement the solution independently in:

- C
- C++
- Python

## Requirements

- Find the first non-repeating character.
- Return its char as int(its ascii)
- Return `-1` if no non-repeating character exists.
- Handle empty strings.
- Preserve the original character order.

## Expected Time Complexity

Aim for **O(n)** time complexity, where `n` is the length of the string.