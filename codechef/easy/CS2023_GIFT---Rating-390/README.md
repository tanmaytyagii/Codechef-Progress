# CS2023_GIFT - Rating 390

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### The Gift

Om has $X$ rupees. He wants to gift a laptop worth $N$ rupees to his girlfriend.

We know that Om is the technical secretary of IIIT-A and has access to the Gymkhana funds of IIIT-A. Currently there are $M$ rupees in the fund and Om can use the fund as much as he wants.

Find whether Om can gift his girlfriend a new laptop.

### Input Format
- The first and only line of input contains three space-separated integers $X$, $N$, and $M$ — the amount Om has, the price of the laptop, and the amount present in the Gymkhana fund respectively.
### Output Format

For each input, output `YES` if Om can buy the laptop and `NO` otherwise.

You may print each character in uppercase or lowercase. For example `YES`, `Yes`, `yes`, and `yES` are all considered the same.

### Constraints
- $1 \leq X, N, M \leq 10^{3}$
### Sample 1:
Input
Output

```
5 10 15

```

```
YES

```

### Explanation:

Om uses $5$ rupees from Gymkhana fund. So, the amount he has is $5+5= 10$ rupees. He can buy the laptop with cost $10$ rupees.

### Sample 2:
Input
Output

```
4 50 7
```

```
NO
```

### Explanation:

Even if Om uses the whole Gymkhana fund, he won't be able to buy the laptop.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T08:30:50.587Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, m;
    cin >> x >> n >> m;
    if (n <= x + m) 
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CS2023_GIFT)