[D - Digit Sum](https://atcoder.jp/contests/arc060/tasks/arc060_b)

# Mô tả
Với 2 số $b$($b$>1) và $n$($n$>0). Hàm f(b,n) sẽ hoạt động như sau:

* f(b,n)=n nếu n<b.
* f(b,n)=f(b,floor(n/b)) + (n%b) nếu n≥b.

Ở đây hàm floor(a) tức là lấy giá trị làm tròn lên của giá trị a. 

Ví dụ:

f(10,87654)=8+7+6+5+4=30

f(100,87654)=8+76+54=138

Cho 2 số nguyên $n$ và $s$. Hãy xác định xem liệu có tồn tại số $b$ sao cho f($b$,$n$)=$s$. Nếu tồn tại thì in ra số $b$ thỏa mãn nhỏ nhất.

# Điều kiện
$1$ $≤$ $n$, $s$ $≤$ $10^{11}$

$n$,$s$ là các số nguyên.

## Input
Input có dạng:

$n$ $s$

## Output
In ra số $b$ thỏa mãn, còn nếu không có thì in ra $-1$.

## Example
|Input|Output|
|-----|------|
|87654</br>30|10|
|87654</br>138|100|
|87654</br>45678|-1|
|31415926535</br>1|31415926535|
|1</br>31415926535|-1|
