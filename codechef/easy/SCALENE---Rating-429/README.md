# SCALENE - Rating 429

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-11T19:30:23.757Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        // your code goes here
        if(x>y){
            cout<<y<<endl;
        }
        else{
            cout<<(((y-x)*2) + x)<<endl;
        }
        
    }
	

}

```

---

[View on CodeChef](https://www.codechef.com/problems/SCALENE)