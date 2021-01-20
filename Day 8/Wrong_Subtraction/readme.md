[Học Trừ](https://codeforces.com/contest/977/problem/A)

# Mô tả
VLPhương đang học cách giảm 1 số đi 1 đơn vị để tính tiền tào phớ đã măm măm trong tháng này. 

Tuy nhiên do ăn quá nhiều tào phớ nên P đã quên cách làm, dẫn đến làm sai cách :( Cụ thể, Phương trừ số $n$ đi 1 đơn vị theo 1 trong 2 bước như sau:

* Nếu chữ số cuối cùng của số $n$ là số !=0 thì Phương sẽ giảm chữ số đó đi 1 đơn vị.
* Nếu chữ số cuối cùng của số $n$ là 0 thì Phương sẽ chia số $n$ cho 10.

Bạn sẽ được cho 1 số $n$ và $k$ lần thực hiện cách trên. Hãy tìm xem sau $k$ lần thực hiện thì số cuối cùng là bao nhiêu.

# Điều kiện
2 ≤ $n$ ≤ $10^{9}$

1 ≤ $k$ ≤ 50

# Input
Input có dạng:
$n$ $k$

# Output
1 số thỏa mãn

# Example
|Input|Output|
|-|-|
|512 4|50|
|1000000000 9|1|

512 sẽ được biến đổi theo 4 bước như sau: 512->511->510->51->50
