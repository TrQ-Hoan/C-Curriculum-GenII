[B-Trapezoid Sum](https://atcoder.jp/contests/abc181/tasks/abc181_b)
# Problem Statement
Wang Hè đang có 1 tấm bảng lớn. Tiếp theo anh ta sẽ tính tổng của *N* dãy số được viết lên.

Với dãy số thứ $i$ thì Hè sẽ viết các số nguyên từ số nguyên A<sub>i</sub> cho đến số nguyên B<sub>i</sub> lên bảng và tính tổng các số đó.

Hỏi tổng của *N* dãy số đó là bao nhiêu?

# Constraints
* Các số nhập và là số nguyên.
* 1 ≤ *N* ≤ 10<sup><i>5</i></sup>
* 1≤ A<sub><i>i</i></sub> ≤ B<sub><i>i</i></sub> ≤10<sup><i>6</i></sup>

# Input
Input có dạng:
```
N
A1 B1
⋮
AN BN
```
# Output
In ra tổng của N dãy số đó.

# Sample
|Input|Output|
|-|-|
|2<br/>1 3<br/>3 5|18|

Dãy số thứ nhất có 3 số: 1, 2, 3.

Dãy số thứ 2 có 3 số: 3, 4, 5.

vậy tổng là: 1+2+3+3+4+5=18.

|Input|Output|
|-|-|
|3<br/>11 13<br/>17 47<br/>359 44683|998244353|
|1<br/>1 1000000|500000500000|
