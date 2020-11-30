[C-Forbidden List](https://atcoder.jp/contests/abc170/tasks/abc170_c)
# Problem Statement
Given are an integer X and an integer sequence of length N: p<sub>1</sub>,…,p<sub>N</sub>.  
  
Among the integers not contained in the sequence p<sub>1</sub>,…,p<sub>N</sub> (not necessarily positive), find the integer nearest to X, that is, find the integer whose absolute difference with X is the minimum. If there are multiple such integers, report the smallest such integer.  
# Constraints
* 1≤X≤100
* 0≤N≤100
* 1≤pi≤100
* p<sub>1</sub>,…,p<sub>N</sub> are all distinct.
* All values in input are integers.
# Input
Input is given from Standard Input in the following format:
```
X N
p1 ... pN
```
# Output
Print the answer.
# Sample
|Input|Output|
|-|-|
|6 5<br/>4 7 10 6 5|8|
|10 5<br/>4 7 10 6 5|9|
|100 0<br/>|100|
