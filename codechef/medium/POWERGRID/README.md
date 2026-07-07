# POWERGRID

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Power Grid

A new park has been decorated with lamps for the evening.
The lamps are arranged in $R$ rows and $C$ columns. Every lamp uses $W$ watts of power.
Find the total power used by all the lamps.

### Input Format
- single line containing three space-separated integers $R$, $C$, and $W$.
### Output Format
- output a single integer representing the total power consumed by all the lamps.
### Constraints
- $1 \le R, C \le 10^2$
- $1 \le W \le 10^3$
### Sample 1:
Input
Output

```
3 4 5
```

```
60
```

### Explanation:

The park has $3 \times 4 = 12$ lamps. Each lamp uses $5$ watts. The total power used is $12 \times 5 = 60$ watts.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-07T18:44:17.888Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >>c;
	cout << a*b*c;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/POWERGRID)