[Đề bài](https://atcoder.jp/contests/ABC110/tasks/abc110_c)
# C - String Transformation
# Mô tả
Cho 2 xâu kí tự $S$ và $T$ chứa những chữ cái tiếng Anh viết thường.
Bạn có thể thực hiện phép biến đổi sau bao nhiêu lần cũng được:

Phép biến đổi: chọn 2 chữ cái khác nhau $c_{1}$ và $c_{2}$, sau đó cứ xuất hiện $c_{1}$ thì ta thay bằng $c_{2}$, chỗ nào xuất hiện $c_{2}$ thì ta thay bằng $c_{1}$.

Biết rằng $S$ và $T$ có thể biến đổi thành lẫn nhau bằng cách sử dụng phép biến đổi trên ít nhất 0 lần.
# Điều kiện
* 1 ≤ |S| ≤ 2 x $10^{i}$
* |$S$| = |$T$|
* $S$ và $T$ chứa các chữ cái tiếng Anh viết thường.
# Input
Input được đưa vào dưới dạng sau:\
$S$\
$T$
# Output
Nếu $S$ và $T$ có thể biến đổi thành lẫn nhau, in ra: 
```php 
Yes
```
Nếu không thì in ra:
```php 
No
```
# Ví dụ 1
Input|Output
-|-
azzel</br>apple|Yes

`azzel` có thể biến đối thành `apple` như sau:
* Chọn `e` là $c_{1}$ và `1` là $c_{2}$, `azzel` sẽ biến đổi thành `azzle`.
* Chọn `z` là $c_{1}$ và `p` là $c_{2}$, `azzle` sẽ biến đổi thành `apple`.
# Ví dụ 2
Input|Output
-|-
chokudai</br>redcoder|No
 Không có cách nào có thể biến đổi `chokudai` thành `redcoder` được.
# Ví dụ 3
Input|Output
-|-
abcdefghijklmnopqrstuvwxyz</br>ibyhqfrekavclxjstdwgpzmonu|Yes
