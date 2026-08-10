# FLOW004 - Rating 461

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### First and Last Digit

Given an integer  **N** . Write a program to obtain the sum of the first and last digits of this number.

### Input Format

The first line contains an integer  **T**, the total number of test cases. Then follow  **T**  lines, each line contains an integer  **N**.

### Output Format

For each test case, display the sum of first and last digits of  **N**  in a new line.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N \leq 1000000$
### Sample 1:
Input
Output

```
3 
1234
124894
242323

```

```
5
5
5
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-10T17:24:51.216Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int last_digit = N % 10;

        int first_digit = N;
        while (first_digit >= 10) {
            first_digit /= 10;
        }

        cout << first_digit + last_digit << endl;
    }

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FLOW004)