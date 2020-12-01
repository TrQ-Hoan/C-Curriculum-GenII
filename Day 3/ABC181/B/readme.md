[B-Trapezoid Sum](https://atcoder.jp/contests/abc181/tasks/abc181_b)
# Problem Statement
We have a blackboard with nothing written on it. Takahashi will do *N* operations to write integers on it.  
  
In the *i*-th operation, he will write each integer from A<sub><i>i</i></sub> through B<sub><i>i</i></sub> once, for a total of B<sub><i>i</i></sub>−A<sub><i>i</i></sub>+1 integers.  
  
Find the sum of the integers written on the blackboard after the *N* operations.  
# Constraints
* All values in input are integers.
* 1 ≤ *N* ≤ 10<sup><i>5</i></sup>
* 1≤ A<sub><i>i</i></sub> ≤ B<sub><i>i</i></sub> ≤10<sup><i>6</i></sup>

# Input
Input is given from Standard Input in the following format:
```
N
A1 B1
⋮
AN BN
```
# Output
Print the sum of the integers written on the blackboard after the *N* operations.
# Sample
|Input|Output|
|-|-|
|2<br/>1 3<br/>3 5|18|
|3<br/>11 13<br/>17 47<br/>359 44683|998244353|
|1<br/>1 1000000|500000500000|
