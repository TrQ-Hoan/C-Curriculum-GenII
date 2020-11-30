[B - Various distances](https://atcoder.jp/contests/abc180/tasks/abc180_b)
# Problem Statement
Given is a point (x<sup>1</sup>,…,x<sup>N</sup>) in an N-dimensional space.
Find the Manhattan distance, Euclidian distance, and Chebyshev distance between this point and the origin. Here, each of them is defined as follows:
* The Manhattan distance: |x1|+…+|xN|
* The Euclidian distance: √|x1|2+…+|xN|2
* The Chebyshev distance: max(|x1|,…,|xN|)
# Constraints
* 1≤ N ≤ 10<sup>5</sup>
* −10<sup>5</sup> ≤ x<sub>i</sub> ≤ 10<sup>5</sup>
* N is an integer.
# Input
Input is given from Standard Input in the following format:
```
N
x1 ... xN
```
# Output
Print the Manhattan distance, Euclidian distance, and Chebyshev distance between the given point and the origin, each in its own line. Each value in your print will be accepted when its absolute or relative error from the correct value is at most 10<sup>−9</sup>.
# Sample
|Input|Output|
|-|-|
|2<br/>2 -1|3<br/>2.236067977499790<br/>2|
|10<br/>3 -1 -4 1 -5 9 2 -6 5 -3|39<br/>14.387494569938159<br/9>|
