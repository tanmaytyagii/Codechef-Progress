# EXPNS - Rating 456

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Budget Feasibility

You are given two integers $X$ and $Y$, where $X$ represents the available budget and $Y$ represents the amount required per day.

The budget must cover expenses for exactly $30$ days.

Determine whether the available budget is sufficient to cover the total expenses for all $30$ days.

### Input Format
- The first line contains an integer $T$, representing the number of test cases.
- Each test case contains two space-separated integers $X$ and $Y$, representing the available budget and the daily expense.
### Output Format

For each test case, print `YES` if the budget is sufficient to cover the expenses for $30$ days. Otherwise, print `NO`.

You may print each character of `YES` and `NO` in uppercase or lowercase (for example, `yes`, `yEs`, `Yes` will be considered identical).

### Constraints
- $1 \leq T \leq 100$
- $1 \leq X, Y \leq 10^5$
### Sample 1:
Input
Output

```
4
900 30
500 20
1200 35
100 4
```

```
YES
NO
YES
NO
```

### Explanation:
- Test Case 1: The total expense is $30 \times 30 = 900$. Since $X = 900$, the budget is sufficient.
- Test Case 2: The total expense is $30 \times 20 = 600$. Since $X = 500$, the budget is insufficient.
- Test Case 3: The total expense is $30 \times 35 = 1050$. Since $X = 1200$, the budget is sufficient.
- Test Case 4: The total expense is $30 \times 4 = 120$. Since $X = 100$, the budget is insufficient.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T17:17:32.155Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int z= y*30;
	    if(x>=z){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/EXPNS)