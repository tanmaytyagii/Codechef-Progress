# MUL123

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Make Multiple

You are given an integer $N$.

In one operation, you can modify $N$ as follows:

- Add $1$ to $N$, or
- Replace $N$ with the nearest multiple of $5$ that's strictly larger than $N$.

For example,

- If $N = 24$, the nearest multiple of $5$ that's strictly larger than it is $25$.
- If $N = 45$, the nearest multiple of $5$ that's strictly larger than it is $50$.

Your goal is to make $N$ become divisible by $3$.

Find the  **minimum**  number of operations needed.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line of input, containing a single integer $N$.
### Output Format

For each test case, output on a new line the answer: the minimum number of operations needed.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 100$
### Sample 1:
Input
Output

```
4
1
2
3
10

```

```
2
1
0
1

```

### Explanation:

 **Test case $1$:**  We start with $N = 1$. One solution using two operations is as follows:

- Replace $N$ with the next multiple of $5$. This turns $N$ into $5$.
- Then add $1$ to $N$, making it $6$. $N$ is now a multiple of $3$, as desired.

It can be verified that using fewer than two operations is not enough to make $N$ a multiple of $3$.

 **Test case $2$:**  We start with $N = 2$. Add $1$ to make it $3$, which is a multiple of $3$. The answer is hence $1$.

 **Test case $3$:**  We start with $N = 3$. This is already a multiple of $3$, so no operations are needed and the answer is $0$.

 **Test case $4$:**  We start with $N = 10$. Replace it with the next multiple of $5$, which is $15$. This is a multiple of $3$, so we're done in one operation.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-12T15:20:01.338Z  

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
	    int count =0;
	    while(n%3!=0){
	        if((n+1)%3==0){
	            n = n+1;
	            count++;
	        }
	        else if((n+2)%3==0){
	            count = count+2;
	            break;
	        }
	        else if((n+5)%3==0){
	            count++;
	            break;
	        }
	        else{
	            n= ((n/5)+1)*5;
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/MUL123)