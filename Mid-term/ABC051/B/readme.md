[B - Sum of Three Integers](https://atcoder.jp/contests/abc051/tasks/abc051_b)
# Mô tả
Cho 2 số nguyên ***K*** và ***S***. Cho 3 số nguyên ***X, Y, Z*** thoả mãn: ***0 ≤ X, Y, Z ≤ K***. Có bao nhiêu bộ số nguyên **(*X, Y, Z*)** có tổng bằng ***S***?

# Điều kiện
* ***2 ≤ K ≤ 2500***
* ***0 ≤ S ≤ 3K***
* ***K*** và ***S*** là số nguyên.

# Input
Input được đưa vào dưới dạng sau:

***K S***

# Output
In ra bộ ba số ***X, Y, Z*** thoả mãn đề bài.

# Ví dụ 1
Input|Output
-|-
2 2|6

Có 6 bộ số **(*X, Y, Z*)** thoả mãn:
X|Y|Z
-|-|-
0|0|2
0|2|0
2|0|0
0|1|1
1|0|1
1|1|0

# Ví dụ 2
Input|Output
-|-
5 15|1

Giá trị lớn nhất có thể của ***X*** + ***Y*** + ***Z*** là **15**, khi mà **(*X, Y, Z*)** đạt giá trị lớn nhất là **(5, 5, 5)**.
