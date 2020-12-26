[Đề bài](https://atcoder.jp/contests/ABC122/tasks/abc122_c)
# C - GeT AC
# Mô tả
Cho một xâu kí tự $S$ có độ dài $N$ chỉ gồm các kí tự `A`, `C`, `G` và `T`. 
Hãy trả lời $Q$ câu hỏi sau:
* Câu hỏi $i$ (1 ≤ $i$ ≤ $Q$): với 2 số nguyên $l_{i}$ và $r_{i}$ (1 ≤ $l_{i}$ < $r_{i}$ ≤ N), có bao nhiêu lần `AC` xuất hiện như một xâu con trong xâu con của $S$ bắt đầu từ $l_{i}$ đến $r_{i}$?
# Ghi chú 
Một xâu con của xâu T là xâu mà đạt được nhờ loại bỏ đi 0 hay nhiều kí tự ở đầu hay cuối xâu T. Ví dụ, xâu con của ISPOJ là SPO, OJ, SPOJ, ISPOJ và xâu rỗng, nhưng không phải IO.
# Điều kiện
* 2 ≤ $N$ ≤ $10^{5}
* 1 ≤ $Q$ ≤ $10^{5}
* $S$ là một xâu có độ dài $N$.
* Mỗi kí tự trong $S$ chỉ có thể là 1 trong 4 kí tự `A`, `C`, `G` và  `T`.
* 1 ≤ $l_{i}$ < $r_{i}$ ≤ N
# Input
Input được đưa vào dưới dạng sau:\
N Q\
S\
$l_{1}$ $r_{1}$\
.\
.\
$l_{Q}$ $r_{Q}$\
# Output
In ra $Q$ dòng. Dòng thứ $i$ là câu trả lời cho câu hỏi thứ $i$.
# Ví dụ 
Input|Output
-|-
8 3</br>ACACTACG</br>3 7</br>2 3</br>1 8|2</br>0</br>3

* Câu hỏi 1: xâu con của $S$ bắt đầu từ 3 kết thúc tại 7 là `ACTAC`. Trong xâu này, `AC` đã xuất hiện 2 lần với vai trò là 1 xâu con.
* Câu hỏi 2: xâu con của $S$ bắt đầu từ 2 kết thúc tại 3 là `CA`. Trong xâu này, `AC` không xuất hiện lần nào với vai trò là 1 xâu con.
* Câu hỏi 3: xâu con của $S$ bắt đầu từ 1 kết thúc tại 8 là `ACACTACG`. Trong xâu này, `AC` đã xuất hiện 3 lần với vai trò là 1 xâu con.
