[* 3 or /2](https://atcoder.jp/contests/ABC100/tasks/abc100_c)

# Mô tả
Trang có mội dãy số gồm $N$ số nguyên, tương ứng gồm:{ $A_{1}$ $A_{2}$ $A_{3}$ ... $A_{N}$ }

Trang sẽ chơi 1 trò chơi bằng cách lặp lại hành động sau:

Với mỗi số $A_{i}$ thỏa mãn 1 ≤ i ≤ $N$, Trang có thể "chia $A_{i}$ cho 2" hoặc " nhân $A_{i}$ với 3".

Trang sẽ không thể nhân tất cả các số của mảng với 3 trong một lượt. Và sau mỗi lần thực hiện thì các số trong mảng đều phải là số nguyên.

Hỏi Trang có thể thực hiện được nhiều nhất bao nhiêu lần hành động đó?
# Điều kiện
- 1 ≤ $i$ ≤ $10_{5}$
- 1 ≤ $A_{i}$ ≤ $10_{9}$

# Input
Input có dạng:
N
$A_{1}$ $A_{2}$ ... $A_{N}$

# Output
1 số thỏa mãn.

# Ví dụ
|Input|Output|
|-|-|
|3</br>5 2 4|3|

Mảng số 5,2,4 có thể được thực hiện theo cách như sau:

$A_{1}$ được nhân với 3, $A_{2}$ được nhân với 3, $A_{3}$ được chia cho 2 => 15, 6, 2.

$A_{1}$ được nhân với 3, $A_{2}$ được chia cho 2, $A_{3}$ được nhân với 3 => 45, 3, 6.

$A_{1}$ được nhân với 3, $A_{2}$ được nhân với 3, $A_{3}$ được chia cho 2 => 45, 9, 3.
</br>

|Input|Output|
|-|-|
|4</br>631 577 243 199|0|
|10</br>2184 2126 1721 1800 1024 2528 3360 1945 1280 1776|39|
