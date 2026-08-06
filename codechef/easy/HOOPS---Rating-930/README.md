# HOOPS - Rating 930

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Hoop Jump

You and your friend are playing a game with hoops. There are $N$ hoops (where $N$ is odd) in a row. You jump into hoop $1$, and your friend jumps into hoop $N$. Then you jump into hoop $2$, and after that, your friend jumps into hoop $N-1$, and so on.

The process ends when someone cannot make the next jump because the hoop is occupied by the other person. Find the last hoop that will be jumped into.

### Input
- The first line contains an integer $T$, the number of test cases. Then the test cases follow.
- Each test case contains a single line of input, a single integer $N$.
### Output

For each testcase, output in a single line the answer to the problem.

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq N \lt 2\cdot 10^5$
- $N$ is odd
### Subtasks

 **Subtask #1 (100 points):**  original constraints

### Sample 1:
Input
Output

```
2
1
3
```

```
1
2
```

### Explanation:

 **Test Case $1$:**  Since there is only $1$ hoop, that's the only one to be jumped into.

 **Test Case $2$:**  The first player jumps into hoop $1$. The second player jumps into hoop $3$ and finally the first player jumps into hoop $2$. Then the second player cannot make another jump, so the process stops.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-06T16:59:51.597Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%2==0){
	        cout<<n/2<<endl;
	    }
	    else{
	        cout<<(n/2)+1<<endl;
	    }
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/HOOPS)