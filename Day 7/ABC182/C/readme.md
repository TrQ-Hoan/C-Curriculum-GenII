[C - To 3](https://atcoder.jp/contests/abc182/tasks/abc182_c)
# Problem Statement
Given is a positive integer N, where none of the digits is 0.  
Let k be the number of digits in N. We want to make a multiple of 3 by erasing at least 0 and at most k−1 digits from N and concatenating the remaining digits without changing the order.  
Determine whether it is possible to make a multiple of 3 in this way. If it is possible, find the minimum number of digits that must be erased to make such a number.  
# Constraints
* 1≤ N ≤ 10<sup>18</sup>
* None of the digits in N is 0.
# Input
Input is given from Standard Input in the following format:
```
N
```
# Output
If it is impossible to make a multiple of 3, print -1; otherwise, print the minimum number of digits that must be erased to make such a number.
# Sample
|Input|Output|
|-|-|
|35|1|
|369|0|
|6227384|1|
|11|-1|
