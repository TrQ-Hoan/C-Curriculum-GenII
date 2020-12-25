[Đề bài](https://atcoder.jp/contests/ABC119/tasks/abc119_a)
# A - Still TBD
# Mô tả
Cho một xâu $S$ là dữ liệu đầu vào. Nó biểu thị cho một ngày hợp lệ ở trong năm 2019 dưới dạng yyyy/mm/dd. (Ví dụ, ngày 30 tháng 4 năm 2019 thì được biểu diễn dưới dạng 2019/04/30.)

Viết một chương trình in ra `Heisei` nếu ngày biểu diễn không quá ngày 30 tháng 4 năm 2019, và ngược lại thì in ra `TBD`.

# Điều kiện
* $S$ là một chuỗi biểu diễn một ngày có tồn tại ở năm 2019 dưới dạng yyyy/mm/dd. (Đừng có nhập 2019/02/29 rồi hỏi tại sao mồ hôi có màu đỏ.)
# Input
Input được đưa vào dưới dạng:
$S$
# Output
In ra `Heisei` nếu ngày biểu diễn bởi chuỗi $S$ không vượt quá ngày 30 tháng 04 năm 2019, và in ra `TBD` nếu ngược lại.
# Ví dụ 1
Input|Output
-|-
2019/04/30|Heisei

# Ví dụ 2
Input|Output
-|-
2019/11/01|TBD
