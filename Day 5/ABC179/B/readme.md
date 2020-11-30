[B - Go to Jail](https://atcoder.jp/contests/abc179/tasks/abc179_b)
# Problem Statement
Tak performed the following action *N* times: rolling two dice. The result of the *i*-th roll is D<sub>i,1</sub> and D<sub>i,2</sub>.  
  
Check if doublets occurred at least three times in a row. Specifically, check if there exists at lease one i such that D<sub>i,1</sub> = D<sub>i,2</sub>, D<sub>i+1,1</sub>=D<sub>i+1,2</sub> and D<sub>i+2,1</sub>=D<sub>i+2,2</sub> hold.  
  
# Constraints
* 3 ≤ *N* ≤ 100
* 1 ≤D<sub>i,j</sub> ≤ 6
* All values in input are integers.
# Input
```
Input is given from Standard Input in the following format:
N
D1,1 D1,2
⋮
DN,1 DN,2
```
# Output
Print Yes if doublets occurred at least three times in a row. Print No otherwise.
# Sample
|Input|Output|
|-|-|
|5<br/>1 2<br/>6 6<br/>4 4<br/>3 3<br/>3 2|Yes|
|5<br/>1 1<br/>2 2<br/>3 4<br/>5 5<br/>6 6|No|
