# CHKEV

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Check Even

You are given two integers $L$ and $R$.

You have with you all the integers from $L$ to $R$, inclusive of both ends.
That is, you have with you the integers

$$ \{L, L+1, L+2, \ldots, R\} $$

Are any of these integers  **even** ?

An integer is called even if and only if it is a multiple of $2$.

### Input Format
- The only line of input will contain two space-separated integers $L$ and $R$.
### Output Format

Print `Yes` if there exists an even integer among the integers $\{L, L+1, L+2, \ldots, R\}$, and `No` otherwise.

Each character of the output may be printed in any case, i.e. the strings `NO`, `No`, `nO`, and `no` will be treated as equivalent.

### Constraints
- $1 \le L \le R \le 10$
### Sample 1:
Input
Output

```
3 5

```

```
Yes

```

### Explanation:

The values with us are $\{3, 4, 5\}$.
$4$ is even, so the answer is `Yes`.

### Sample 2:
Input
Output

```
5 5

```

```
No

```

### Explanation:

The only value with us is $5$, which is not even. So the answer is `No`.

### Sample 3:
Input
Output

```
4 9

```

```
Yes

```

### Explanation:

The values with us are $\{4, 5, 6, 7, 8, 9\}$.
$6$ is even, so the answer is `Yes`.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-12T14:38:16.730Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int l, r;
	cin>>l>>r;
	bool found = false;
	for(int i =l; i<=r; i++){
	    if(i%2==0 ){
	        found = true;
	        break;
	    }
	}
	if(found){
	    cout<<"Yes";
	}
	else{
	    cout<<"No";
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/CHKEV)