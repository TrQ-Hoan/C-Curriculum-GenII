[B - Almost GCD](https://atcoder.jp/contests/abc182/tasks/abc182_b)
# Problem Statement
Given is an integer sequence A: A<sub>1</sub>,A<sub>2</sub>,A<sub>3</sub>,…,A<sub>N</sub>.  
  
Let the GCD-ness of a positive integer k be the number of elements among A<sub>1</sub>,A<sub>2</sub>,A<sub>3</sub>,…,A<sub>N</sub> that are divisible by k.  
  
Among the integers greater than or equal to 2, find the integer with the greatest GCD-ness. If there are multiple such integers, you may print any of them.  
  
# Constraints
* 1 ≤ *N* ≤ 100
* 2 ≤ A<sub>i</sub> ≤ 1000
* All values in input are integers.
# Input
Input is given from Standard Input in the following format:
```
N
A1 A2 A3 ... AN
```
# Output
Print an integer with the greatest GCD-ness among the integers greater than or equal to 2. If there are multiple such integers, any of them will be accepted.
# Sample
|Input|Output|
|-|-|
|3<br/>3 12 7|3|
|5<br/>8 9 18 90 72|9|
|5<br/>1000 1000 1000 1000 1000|1000|
