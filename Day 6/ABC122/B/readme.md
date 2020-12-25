[Đề bài](https://atcoder.jp/contests/ABC122/tasks/abc122_b)
# B - ATCoder
# Mô tả
Cho xâu $S$ chứa các chữ cái tiếng Anh in hoa. Tìm độ dài của xâu ACGT dài nhất mà là xâu con của $S$.\
Ở đây, một xâu ACGT là một xâu mà chỉ có 4 chữ cái A, C, G và T.\
# Ghi chú
Một xâu con của xâu T là xâu mà đạt được nhờ loại bỏ đi 0 hay nhiều kí tự ở đầu hay cuối xâu T.
Ví dụ, xâu con của ISPOJ là SPO, OJ, SPOJ, ISPOJ và xâu rỗng, nhưng không phải IO.
# Điều kiện
* $S$ là một xâu có độ dài nằm trong đoạn từ 1 đến 10.
* Mỗi chữ cái trong $S$ là một chữ cái tiếng Anh viết hoa.
# Input
Input được đưa vào dưới dạng:\
$S$
# Output
In ra độ dài của xâu ACGT dài nhất mà là xâu con của $S$.
# Ví dụ 1
Input|Output
-|-
ATCODER|3

Giữa các xâu ACGT mà là xâu con của `ATCODER`, xâu dài nhất là xâu `ATC`.
# Ví dụ 2
Input|Output
-|-
HATAGAYA|5

Giữa các xâu ACGT mà là xâu con của `HATAGAYA`, xâu dài nhất là xâu `ATAGA`.
# Ví dụ 3
Input|Output
-|-
SHINJUKU|0

Giữa các xâu ACGT mà là xâu con của `SHINJUKU`, xâu dài nhất là xâu rỗng.
