[Đề bài](https://atcoder.jp/contests/ABC120/tasks/abc120_c)
# C - Unification
# Mô tả
Cho $N$ khối hộp xếp thẳng đứng trên một cái bàn học.
Cho một xâu $S$ có độ dài $N$. Màu của khối hộp thứ $i$ tính từ dưới lên là màu đỏ nếu kí tự thứ $i$ trong xâu $S$ là `0`, và là màu xanh nếu là `1`.
Chọn một khối màu đỏ và một khối màu xanh liền kề nhau rồi bỏ nó ra. Khi đó, các khối hộp nằm trên các khối hộp đã bị loại bỏ sẽ rơi lên khối hộp bên dưới chúng.
Nếu cứ làm liên tiếp như vậy thì nhiều nhất bao nhiều khối hộp có thể bị loại bỏ?
# Điều kiện
* 1 ≤ $N$ ≤ $10^{5}$
* |$S$| = $N$
* Mỗi kí tự trong xâu $S$ chỉ có thể là `0` hoặc `1`.
# Input
Input được đưa vào dưới dạng sau:\
$S$
# Output
In ra số lượng lớn nhất khối hộp có thể bị loại bỏ.
# Ví dụ 1
Input|Output
-|-
0011|4

Cả 4 khối hộp đều có thể bị loại bỏ, bới một loạt các hành động như sau:
* Loại bỏ khối thứ 2 và thứ 3 từ dưới lên. Sau đó, khối thứ 4 sẽ rơi lên khối thứ 1.
* Loại bỏ khối thứ 1 và khối thứ 2 từ dưới lên.
# Ví dụ 2
Input|Output
-|-
11011010001011|12
# Ví dụ 3
Input|Output
-|-
0|0
