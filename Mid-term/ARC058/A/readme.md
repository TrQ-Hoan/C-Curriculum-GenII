[C - Iroha's Obsession](https://atcoder.jp/contests/arc058/tasks/arc058_a)

# Mô tả
Phong là người rất kĩ tính trong việc tiền nong. Phong sẽ có $K$ số có 1 chữ số mà Phong không thích: $a_{1}$, $a_{2}$, ...,$a_{K}$.

Sau khi đi Siêu thị, Phong sẽ phải thanh toán chiếc hóa đơn dài hơn cả dòng sông Volga của mình. Chiếc hóa đơn có giá $N$ dollars nên tất nhiên anh ấy sẽ phải trả ít nhất $N$ dollars cho thu ngân. 

Tuy nhiên, do kĩ tính nên số tiền mà Phong sẽ trả cho thu ngân (dưới dạng Hệ số 10) sẽ không được có những số mà anh ta ghét. 

Do đó, hãy tìm số tiền nhỏ nhất thỏa mãn mà Phong cần tìm để trả cho thu ngân nhé.

# Điều kiện
* 1 ≦ $N$ < $10^{4}$
* 1 ≦ $K$,$a_{i}$ ≦ 9
* $N$ các số $a_{i}$ phải khác nhau.

# Input
Input có dạng:

$N$ $K$

$a_{1}$ $a_{2}$ ...$a_{K}$

# Output
In ra số tiền thỏa mãn.

# Example
|Input|Output|
|-|-|
|1000 8</br>1 3 4 5 6 7 8 9|2000|
</br>
Phong chỉ thích các số 0 và 2. Do đó số tiền nhỏ nhất Phong trả cho thu ngân sẽ là 2000 dollars.

|Input|Output|
|-|-|
|9999 1</br>0|9999|
