[C-Forbidden List](https://atcoder.jp/contests/abc170/tasks/abc170_c)
# Problem Statement
Cho 1 số nguyên $X$ và một dãy $N$ số nguyên khác: $a_{1}$ $a_{2}$ ... $a_{N}$ 
  
Hãy xem trong các số không nằm trong dãy $a_{1}$ $a_{2}$ ... $a_{N}$ (Không nhất thiết phải là số dương) thì số nào gần số $X$ nhất.

Nếu có nhiều số thỏa mãn thì hãy in ra số nhỏ nhất.

# Constraints
* 1 ≤ $X$ ≤ 100
* 0 ≤ $N$ ≤ 100
* 1 ≤ $p_{i}$ ≤ 100
* $a_{1}$ $a_{2}$ ... $a_{N}$ sẽ là các số khác nhau.
* Tất cả các số nhập vào đều là số nguyên.

# Input
Input co dạng:
$X$ $N#
$a_{1}$ $a_{2}$ ... $a_{N}$

# Output
1 số nguyên thỏa mãn.

# Sample
|Input|Output|
|-|-|
|6 5<br/>4 7 10 6 5|8|
|10 5<br/>4 7 10 6 5|9|
|100 0<br/>|100|
