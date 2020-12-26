[Đề bài](https://atcoder.jp/contests/ABC124/tasks/abc124_c)
# C - Coloring Colorfully
# Mô tả
Cho $N$ tấm thẻ được sắp xếp theo thứ tự từ trái qua phải. Ban đầu, màu sắc của mỗi tấm thẻ được biểu diễn bởi một xâu $S$ có độ dài $N$.
Tấm thẻ thứ $i$ từ trái sang được sơn màu đen nếu kí tự thứ $i$ trong $S$ là `0`, và được sơn màu trắng nếu là `1`.
Ocschos muốn sơn lại một số tấm thẻ bằng màu đen hoặc trắng sao cho 2 tấm thẻ cạnh nhau thì không có cùng một màu.
Ít nhất bao nhiêu tấm thẻ cần được sơn lại để thoả mãn điều kiện mà Ocschos muốn?
# Điều kiện
* 1 ≤ |$S$| ≤ $10^{5}$
* $S_{i}$ là `0` hoặc `1`.
# Input
Input được đưa vào dưới dạng sau:\ $S$
# Output
In ra số lượng tấm thẻ cần tô ít nhất để thoả mãn điều kiện Ocschos.
# Ví dụ 1
Input|Output
-|-
000|1

Bằng cách sơn lại tấm thẻ ở giữa sang màu trắng là ta có thể thoả mãn điều kiện Ocschos rồi.
# Ví dụ 2
Input|Output
-|-
10010010|3

# Ví dụ 3
Input|Output
-|-
0|0
