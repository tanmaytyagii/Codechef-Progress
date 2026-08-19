# MEXMAX7

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Mex and Max

You are given an array $A$ containing $N$ integers. Find the number of non-empty subsequences $B$ of $A$ such that:

- $|\text{mex}(B) - \max(B)| \le 1$

Here, $\text{mex}(B)$ represents the minimum non-negative integer not present in $B$, and $\max(B)$ represents the maximum element of $B$.

Since the answer may be large, find it modulo $998244353$. $2$ subsequences are different if the indices chosen are different, even if the elements are the same.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the number of subsequences satisfying $|\text{mex}(B) - \max(B)| \le 1$ modulo $998244353$.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $0 \le A_i \le N$
### Sample 1:
Input
Output

```
5
3
0 1 2
6
2 2 1 0 0 4
5
0 1 2 3 4
5
1 1 1 2 2
3
3 3 3

```

```
5
34
9
7
0
```

### Explanation:

 **Test Case 1:**  The following are the good subsequences : $[0], [0, 1], [0, 1, 2], [1], [0, 2]$. For example, the first has a $\text{MEX}$ of $1$ and a $\max$ of $0$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T14:57:19.271Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/MEXMAX7)