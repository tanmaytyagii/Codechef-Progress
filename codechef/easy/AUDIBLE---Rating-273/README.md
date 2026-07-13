# AUDIBLE - Rating 273

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-13T18:21:26.238Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(m>n){
	        cout<<"0"<<endl;
	    }
	    else{
	        cout<<n-m<<endl;
	    }
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/AUDIBLE)