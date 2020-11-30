[B - Substring](https://atcoder.jp/contests/abc177/tasks/abc177_b)
# Problem Statement
Given are two strings S and T.  
  
Let us change some of the characters in S so that T will be a substring of S. At least how many characters do we need to change?  
  
Here, a substring is a consecutive subsequence. For example, xxx is a substring of yxxxy, but not a substring of xxyxx.  
# Constraints
* The lengths of S and T are each at least 1 and at most 1000.
* The length of T is at most that of S. 
* S and T consist of lowercase English letters.
# Input
Input is given from Standard Input in the following format:
```
S
T
```
# Output
Print the minimum number of characters in S that need to be changed.
# Sample
|Input|Output|
|-|-|
|cabacc<br/>abc|1|
|codeforces<br/atcoder>|6|
