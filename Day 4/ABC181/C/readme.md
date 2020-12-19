[C - Collinearity](https://atcoder.jp/contests/abc181/tasks/abc181_c)
# Problem Statement
Chúng ta có $N$ điểm trên hệ trục tọa độ Oxy.
Điểm thứ i sẽ có tọa độ là ($x_{i}$, $y_{i}$).
Liệu có tồn tại 3 điểm thẳng hàng trong $N$ điểm đó hay không?

# Constraints
* Tất cả các giá trị là số nguyên.
* 3 ≤ $N$ ≤ $10^{2}$
* |$x_{i}$|,|$y_{i}$| ≤ $10^{3}$
* If $i$≠$j$, ($x_{i}$, $y_{i}$)≠($x_{j}$, $y_{j}$).
# Input
Input có dạng:
$N$
$x_{i}$ $y_{i}$
⋮
$x_{N}$ $y_{N}$

# Output
Nếu có 3 điểm thẳng hàng thì in ra "Yes" còn không thì in ra "No"

# Sample
|Input|Output|
|-|-|
|4<br/>0 1<br/>0 2<br/>0 3<br/>1 1|Yes|
|14<br/>5 5<br/>0 1<br/>2 5<br/>8 0<br/>2 1<br/>0 0<br/>3 6<br/>8 6<br/>5 9<br/>7 9<br/>3 4<br/>9 2<br/>9 8<br/>7 2|No|
