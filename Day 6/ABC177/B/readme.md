[B - Substring](https://atcoder.jp/contests/abc177/tasks/abc177_b)
# Mô tả
Cho 2 xâu kí tự $S$ và $T$.
  
Đổi một số kí tự trong $S$ để $T$ trở thành một xâu con của $S$. Cần thay đổi ít nhất bao nhiêu kí tự?
  
Ví dụ về xâu con: xxx là một xâu con của yxxxy, nhưng không phải của xxyxx.  
# Điều kiện
* Độ dài của $S$ và $T$ ngắn nhất là 1 và dài nhất là 1000.
* Độ dài của $T$ không dài hơn $S$.
* $S$ và $T$ chỉ chứa các chữa cái tiếng Anh viết thường.
# Input
Input được đưa vào dưới dạng sau:
```
S
T
```
# Output
In ra số lượng tối thiểu các kí tự cần thay đổi trong $S$.
# Ví dụ
|Input|Output|
|-|-|
|cabacc<br/>abc|1|
|codeforces<br/>atcoder|6|
