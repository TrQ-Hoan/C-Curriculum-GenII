[Đề bài](https://atcoder.jp/contests/ABC110/tasks/abc110_b)

# Mô tả
Trong thế giới 1 chiều, có 2 đế chế thống trị thế giới này.

Đế chế Xjenpan thống trị ở tọa độ $A$, còn đế chế Taofo thống trị ở vị trí $B$.

Một ngày đẹp trời nào đó, 2 đế chế quyết định phô trương sức mạnh. 

Xjenpan sẽ chọn $N$ thành phố để cai trị với thành phố thứ $i$ có tọa độ $a_{i}$ (1≤$i$≤100). Taofo cũng không thua kém, chọn $M$ thành phố để cai trị với thành phố thứ $j$ có tọa độ $b_{j}$ (1≤$j$≤100).

Nếu cố một số nguyên $Z$ thỏa mãn 3 điều kiện sau thì 2 đế chế sẽ ôn hòa, còn nếu không thì sẽ chiến tranh sẽ nổ ra.

3 điều kiện đó laf:

+ $X$ < $Z$ ≤ $Y$

+ $a_{1}$, $a_{2}$, ..., $a_{N}$ < $Z$

+ $b_{1}$, $b_{2}$, ..., $b_{N}$ ≥ $Z$

Hãy xác định xem liệu chiến tranh có nổ ra hay không.

# Điều kiện
Tất cả các số nhập vào đều là số nguyên.

1 ≤ $N$,$M$ ≤ 100

-100 ≤ $A$ < $B$ ≤ 100

-100 ≤ $a_{i}$,$b_{j}$ ≤ 100

$a_{1}$, $a_{2}$, ..., $a_{N}$ ≠ $A$

$b_{1}$, $b_{2}$, ..., $b_{N}$ ≠ $B$

Các số $a_{i}$ sẽ khác nhau.

Các số $a_{i}$ sẽ khác nhau.

# Input
Input có dạng:

$M$ $N$ $A$ $B$

$a_{1}$ $a_{2}$ ... $a_{N}$

$b_{1}$ $b_{2}$ ... $b_{N}$

# Output
Nếu có số Z thỏa mãn thì in ra "No War"

Còn không thì in ra "War"

# Example
|Input|Output|
|-|-|
|3 2 10 20</br>8 15 13</br>16 22|No War|

Chúng ta sẽ có $Z$=16 sẽ thỏa mãn điều kiện như sau:

+) 10 < 16 ≤ 20

+) 8,15,13 < 16

+) 16,22 ≥ 16
</br>

|Input|Output|
|-|-|
|4 2 -48 -1</br>-20 -35 -91 -23</br>-22 66|War|
|5 3 6 8</br>-10 3 1 5 -100</br>100 6 14|War|
