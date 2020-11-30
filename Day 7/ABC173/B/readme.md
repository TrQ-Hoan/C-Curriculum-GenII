[B - Judge Status Summary](https://atcoder.jp/contests/abc173/tasks/abc173_b)
# Problem Statement
Takahashi is participating in a programming contest called AXC002, and he has just submitted his code to Problem A.  
The problem has N test cases.  
For each test case i (1≤i≤N), you are given a string Si representing the verdict for that test case. Find the numbers of test cases for which the verdict is AC, WA, TLE, and RE, respectively.  
See the Output section for the output format.  
# Constraints
* 1 ≤ N ≤ 10<sup>5</sup>
* S<sub>i</sub> is AC, WA, TLE, or RE.
# Input
Input is given from Standard Input in the following format:
```
N
S1
⋮
SN
```
# Output
Let C<sub>0</sub>, C<sub>1</sub>, C<sub>2</sub>, and C<sub>3</sub> be the numbers of test cases for which the verdict is AC, WA, TLE, and RE, respectively. Print the following: 
```
AC x C0
WA x C1
TLE x C2
RE x C3
```
# Sample
|Input|Output|
|-|-|
|6<br/>ACT<br/>LE<br/>AC<br/>AC<br/>WA<br/>TLE<br/>|AC x 3<br/>WA x 1<br/>TLE x 2<br/>RE x 0|
|10<br/>AC<br/>AC<br/>AC<br/>AC<br/>AC<br/>AC<br/>AC<br/>AC<br/>AC<br/>AC<br/>|AC x 10<br/>WA x 0<br/>TLE x 0<br/>RE x 0|
