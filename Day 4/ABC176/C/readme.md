[C-Step](https://atcoder.jp/contests/abc176/tasks/abc176_C)
# Problem Statement  
$N$ người đang đứng thành 1 hàng dọc. Người thứ 1 sẽ là người đứng đầu hàng. Mỗi người sẽ có 1 chiều cao là $a_{i}$.
  
Chỉ huy muốn rằng mọi người sẽ đứng lên 1 chiếc ghế (có chiều cao ít nhất = 0)  để có thể thỏa mãn đkiện sau:

**Không có người nào đứng trước cao hơn người những người đứng sau. Chiều cao của mỗi người tính thêm cả chiều cao của ghế**

Tìm giá trị nhỏ nhất của tổng chiều cao những chiếc ghế sao cho thỏa mãn điều kiện trên.
  
# Constraints
* 1 ≤ $N$ ≤ $2* 10^{5}$
* 1 ≤ $a_{i}$ ≤ $10^{9}$
* Tất cả các giá trị nhập vào là số nguyên.

# Input
Input có dạng:
$N$
$a_{1}$ … $a_{N}$

# Output
In ra số thỏa mãn:

# Example
|Input|Output|
|-|-|
|5<br/>2 1 5 4 3|4|
|5<br/>3 3 3 3 3|0|

ở Example 1, chúng ta sẽ cần các ghế có độ cao lần lượt là 0,1,0,1,2. Vậy tổng cộng là 4.
