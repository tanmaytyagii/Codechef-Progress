# PASS

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Pass

Chef took $5$ exams in a series, each of which were scored out of $100$.

Chef is awarded a pass certificate if  **both**  the following conditions are satisfied:

- He attains a score of at least $60$ on at least $2$ exams.
- He attains a score of at least $30$ on at least $4$ exams.

Print $\text{Pass}$ or $\text{Fail}$ based on whether Chef will pass or fail.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of input contains $5$ integers - $A_1, A_2, \ldots, A_5$, where $A_i$ is his score in the $i$-th exam.
### Output Format

For each test case, output on a new line $\text{Pass}$ or $\text{Fail}$.

### Constraints
- $1 \le T \le 100$
- $0 \le A_i \le 100$
### Sample 1:
Input
Output

```
4
95 98 100 96 99
32 60 30 65 23
50 50 50 50 50
90 90 29 15 90

```

```
Pass
Pass
Fail
Fail
```

### Explanation:

 **Test Case 1:**  Chef was above $90$ in each exam so he easily cleared all the criteria.

 **Test Case 2:**  Chef has exactly $2$ exams at least $60$ or more (the $65$ and $60$), and exactly $4$ exams at least $30$ or more (the $65$, $60$, $32$ and $30$). Hence, he barely clears the criteria.

 **Test Case 3:**  Chef does not have $2$ exams with at least $60$ score, so he fails.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-22T15:52:53.185Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector<int> hehe(5);
	    for(int i=0; i<5; i++){
	        cin>>hehe[i];
	    }
	    int count1 = 0;
	    int count2 = 0;
	    for(int i =0; i<5; i++){
	        if(hehe[i]>=60){
	            count1++;
	        }
	        if(hehe[i]>=30){
	            count2++;
	        }
	    }
	    if(count1==2 && count2 ==4){
	        cout<<"Pass"<<endl;
	    }
	    else{
	        cout<<"Fail"<<endl;
	    }
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/PASS)