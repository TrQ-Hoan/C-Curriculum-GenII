[B - Go to Jail](https://atcoder.jp/contests/abc179/tasks/abc179_b)
# Mô tả
Lươn chơi xóc đĩa và thực hiện hành động tung 2 xúc sắc ***N*** lần. Kết quả của lần tung xúc sắc thứ *i* là D<sub>i,1</sub> và D<sub>i,2</sub>.  
  
Kiểm tra xem liệu Lươn có thể tung được ra 2 xúc sắc giống nhau 3 lần liên tiếp hay không. Nói rõ hơn là hãy xem liệu có tồn tại ít nhất một lần *i* mà D<sub>i,1</sub> = D<sub>i,2</sub>, D<sub>i+1,1</sub>=D<sub>i+1,2</sub> và D<sub>i+2,1</sub>=D<sub>i+2,2</sub> hay không.
  
# Điều kiện
* 3 ≤ *N* ≤ 100
* 1 ≤ D<sub>i,j</sub> ≤ 6
* All values in input are integers.

# Input
```
Input được đưa vào dưới dạng sau:
N
D1,1 D1,2
⋮
DN,1 DN,2
```
# Output
In ra **Yes** nếu có 3 lần liên tiếp tung được các cặp xúc sắc giống nhau. Không thì in ra **No**.

# Ví dụ
|Input|Output|
|-|-|
|5<br/>1 2<br/>6 6<br/>4 4<br/>3 3<br/>3 2|Yes|
|5<br/>1 1<br/>2 2<br/>3 4<br/>5 5<br/>6 6|No|
