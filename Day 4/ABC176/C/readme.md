[C-Step](https://atcoder.jp/contests/abc176/tasks/abc176_C)
# Problem Statement  
*N* persons are standing in a row. The height of the i-th person from the front is A<sub>i</sub>.  
  
We want to have each person stand on a stool of some heights - at least zero - so that the following condition is satisfied for every person:  
  
Condition: Nobody in front of the person is taller than the person. Here, the height of a person includes the stool.  
  
Find the minimum total height of the stools needed to meet this goal.
# Constraints
* 1 ≤ *N* ≤ 2×10<sub>5</sub>
* 1 ≤ A<sub>i</sub>≤ 10<sub>9</sub>
* All values in input are integers.
# Input
Input is given from Standard Input in the following format:
```
N
A1 … AN
```
# Output
Print the minimum total height of the stools needed to meet the goal.
|Input|Output|
|-|-|
|5<br/>2 1 5 4 3|4|
|5<br/>3 3 3 3 3|0|
