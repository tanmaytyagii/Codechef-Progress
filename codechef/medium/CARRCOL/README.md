# CARRCOL

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Carrot Collection

Deep in a forest live a bear and a rabbit.

The forest has $N$ clearings, numbered from $1$ to $N$.
Clearing $i$ has $A_i$ carrots growing in it.

The bear patrols several zones of the forest - specifically, you are given integers $L$ and $R$, such that the bear patrols clearings $L, L+1, L+2, \ldots, R$.
It is guaranteed that either $L \gt 1$ or $R \lt N$, i.e. there exists at least one clearing not patrolled by the bear.

The rabbit wants to collect some of the carrots from the forest.
This will be done via the following process:

- Let $X$ be the current clearing the rabbit is in.
- The rabbit can do any one of the following three things: Take all carrots from clearing $X$. This is allowed only if clearing $X$ still has carrots. Move to clearing $X-1$. This is allowed only if $X \gt 1$. Move to clearing $X+1$. This is allowed only if $X \lt N$.
- The left/right moves can be done as many times as you like, and it is allowed to visit the same clearing multiple times if you wish.

However, the rabbit  **cannot visit**  any clearing that's being patrolled by the bear.

The initial value of $X$ can be chosen freely by the rabbit; as long as it is some clearing that's not patrolled.

Find the  **maximum**  possible number of carrots the rabbit can collect under the above conditions.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains three space-separated integers $N, L,$ and $R$ — the number of clearings, and the parameters describing the bear's patrol. The second line contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the maximum number of carrots the rabbit can collect.

### Constraints
- $1 \leq T \leq 1000$
- $2 \leq N \leq 100$
- $1 \le L \le R \le N$
- $L \gt 1$ or $R \lt N$
- $1 \leq A_i \leq 100$
### Sample 1:
Input
Output

```
3
3 2 3
4 2 5
4 2 2
4 6 2 3
5 1 3
6 10 4 7 3

```

```
4
5
10

```

### Explanation:

 **Test case $1$:**  $N = 3, L = 2, R = 3$ so the bear patrols clearings $2$ and $3$. The only safe clearing is $1$, so the optimal choice for the rabbit is to start at $X = 1$ and pick the $A_1 = 4$ carrots there. The answer is hence $4$.

 **Test case $2$:**  It's optimal for the rabbit to start with $X = 3$, and then do the following:

- Take all $A_3 = 2$ carrots from clearing $3$.
- Move to clearing $4$.
- Take all $A_4 = 3$ carrots from clearing $4$.
- This is a total of $2+3 = 5$ carrots, which is the best the rabbit can do.

 **Test case $3$:**  The rabbit can start at clearing $5$ and take the carrots from clearings $5$ and $4$, for a total of $3+7=10$ carrots. This is optimal.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-08T05:43:03.679Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N, L, R;
    	cin>>N>>L>>R;
    	vector<int> A(N);
    	for(int i=0; i<N; i++){
    	    cin>>A[i];
    	}
    	int leftsum=0;
    	int rightsum=0;
	
    	if(L>1 && R<N){
    	    for(int i=0; i<L-1; i++){
    	        leftsum=leftsum+A[i];
    	    }
    	    for(int i=R; i<N; i++){
    	        rightsum=rightsum+A[i];
    	    }
    	    cout << max(rightsum, leftsum)<<endl;
    	}
    	else if(L==1 && R<N){
    	    for(int i=R; i<N; i++){
    	        rightsum=rightsum+A[i];
    	    }
    	    cout<<rightsum<<endl;
    	}
    	else if (L>1 && R==N){
    	    for(int i=0; i<L-1; i++){
    	        leftsum=leftsum+A[i];
    	    }
    	    cout<<leftsum<<endl;
	    
    	}
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CARRCOL)