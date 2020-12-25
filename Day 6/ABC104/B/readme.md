[Đề bài](https://atcoder.jp/contests/ABC104/tasks/abc104_b)
# B - AcCepted
# Mô tả
Cho một xâu ***S***. Mỗi kí tự của xâu ***S*** đều là chữ cái tiếng Anh được viết hoa hoặc viết thường. Biết rằng ***S*** thoả mãn tất cả các điều kiện sau:
* Kí tự đầu tiên của ***S*** là chữ `A`.
* Có chính xác 1 kí tự `C` (*C* được viết hoa) nằm giữa kí tự thứ 3 từ trên xuống và kí tự thứ 2 từ dưới lên (bao gồm cả chính nó).
* Tất cả các chữ cái trừ `A` và `C` ở trên đều được viết thường.
# Điều kiện
* **4 ≤ |*S*| ≤ 10** (**|*S*|** là độ dài của chuỗi ***S***.)
* Mỗi kí tự của ***S*** là một chữ cái viết hoa hoặc viết thường trong bảng chữ cái tiếng Anh.
# Input
Input được đưa vào dưới dạng:\
***S***
# Output
Nếu ***S*** thoả mãn tất cả các điều kiện trên thì in ra `AC`; còn lại in ra `WA`.
# Ví dụ 1
Input|Output
-|-
AtCoder|AC

Chữ cái đầu tiên là `A`, chữ cái thứ 3 là `C` và tất cả các chữ cái còn lại đều viết thường, vì vậy tất cả điều kiện đều được thoả mãn.
# Ví dụ 2
Input|Output
-|-
ACoder|WA

Chữ cái thứ 2 không được là `C`.
# Ví dụ 3
Input|Output
-|-
AcycliC|WA

Chữ cái cuối cùng cũng không được là `C`.
# Ví dụ 4
Input|Output
-|-
AtCoCo|WA

Ở đây `C` đã xuất hiện 2 lần.
# Ví dụ 5
Input|Output
-|-
Atcoder|WA

Ở đây thì lại chẳng có `C` nào cả.
