[Đề bài](https://atcoder.jp/contests/ABC121/tasks/abc121_b)
# B - Can you solve this?
# Mô tả
Có ***N*** đoạn mã. Đoạn mã thứ ***i*** được biểu diễn bởi ***M*** số nguyên ***A<sub><i>i1<i></sub>, A<sub><i>i2<i></sub>,..., A<sub><i>iM<i></sub>.***
Cho dãy số nguyên ***B<sub><i>1<i></sub>, B<sub><i>2<i></sub>,..., B<sub><i>M<i></sub>*** và một số nguyên ***C***.
Bài toán sẽ được giải quyết khi và chỉ khi đoạn mã thứ *i* thoả mãn ***A<sub><i>i1<i></sub>B<sub><i>1<i></sub> + A<sub><i>i2<i></sub>B<sub><i>2<i></sub> +... + A<sub><i>iM<i></sub>B<sub><i>M<i></sub> + C > 0.***
Giữa ***N*** đoạn mã này, hãy tìm ra số lượng đoạn mã thoả mãn.

# Điều kiện
* Tất cả dữ liệu nhập vào đều là số nguyên
* ***1 ≤ N, M ≤ 20***
* ***-100 ≤ A<sub><i>ij<i></sub> ≤ 100***
* ***-100 ≤ B<sub><i>i<i></sub> ≤ 100***
* ***-100 ≤ C ≤ 100***

# Input

Dữ liệu được đưa vào theo dạng sau:

***N M C***

***B<sub><i>1<i></sub> B<sub><i>2<i></sub> ... B<sub><i>M<i></sub>***
  
***A<sub><i>11<i></sub> A<sub><i>12<i></sub> ... A<sub><i>1M<i></sub>***
  
***A<sub><i>21<i></sub> A<sub><i>22<i></sub> ... A<sub><i>2M<i></sub>***
  
.

.

.

***A<sub><i>N1<i></sub> A<sub><i>N2<i></sub> ... A<sub><i>NM<i></sub>***

# Output
In ra số lượng đoạn mã giải quyết được bài toán giữa ***N*** đoạn mã đã cho.

# Ví dụ 1

INPUT|OUTPUT
-|-
2 3 -10<br/>3 2 1<br/>1 2 2|1

Chỉ có đoạn mã thứ hai mới giải quyết được bài toán, vì:
* **3 × 1 + 2 × 2 + 1 × 3 + (−10) = 0 ≤ 0**, đoạn mã thứ nhất không thoả mãn.
* **1 × 1 + 2 × 2 + 2 × 3 + (−10) = 1 > 0**, đoạn mã thứ hai thoả mãn.

# Ví dụ 2
INPUT|OUTPUT
-|-
5 2 -4<br/>-2 5<br/>100 41<br/>100 40<br/>-3 0<br/>-6 -2<br/>18 -13|2

# Ví dụ 3
INPUT|OUTPUT
-|-
3 3 0<br/>100 -100 0<br/>0 100 100<br/>100 100 100<br/>-100 100 100|0

Tất cả đều là câu trả lời *sai*. Ngoại trừ câu trả lời của bạn.
