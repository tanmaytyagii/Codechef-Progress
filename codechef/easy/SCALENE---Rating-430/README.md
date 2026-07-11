# SCALENE - Rating 430

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Scalene Triangle

Given $A, B,$ and $C$ as the sides of a triangle, find whether the triangle is  *scalene*.

Note:

- A triangle is said to be scalene if all three sides of the triangle are distinct.
- It is guaranteed that the sides represent a valid triangle.
### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of three space-separated integers $A, B,$ and $C$ — the length of the three sides of the triangle.
### Output Format

For each test case, output on a new line, `YES`, if the triangle is  *scalene*, and `NO` otherwise.

You may print each character of the string in uppercase or lowercase. For example, `YES`, `yes`, `Yes`, and `yEs` are all considered identical.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq A \le B \le C \leq 10$
- $C \lt (A+B)$
### Sample 1:
Input
Output

```
4
2 3 4
1 2 2
2 2 2
3 5 6

```

```
YES
NO
NO
YES
```

### Explanation:

 **Test case $1$:**  The side lengths are $2, 3,$ and $4$. Since no two side lengths are equal, the triangle is scalene.

 **Test case $2$:**  The side lengths are $1, 2,$ and $2$. The sides $B$ and $C$ have the same length. Thus, the triangle is not scalene.

 **Test case $3$:**  The side lengths are $2, 2,$ and $2$. The sides $A, B,$ and $C$ have the same length. Thus, the triangle is not scalene.

 **Test case $4$:**  The side lengths are $3, 5,$ and $6$. Since no two side lengths are equal, the triangle is scalene.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-11T19:33:29.925Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        // your code goes here
        if((a!=b) && (b!=c)){
            cout<<"YES"<<endl;
            
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	

}

```

---

[View on CodeChef](https://www.codechef.com/problems/SCALENE)