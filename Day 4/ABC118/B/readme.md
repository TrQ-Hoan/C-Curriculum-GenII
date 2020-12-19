[Food Again](https://atcoder.jp/contests/ABC118/tasks/abc118_b)

# Mô tả
Trung là đầu bêp của 1 nhà hàng nổi tiếng nhất nhì cái Vịnh Bắc Bộ. Sắp đến cuối năm nên Trung sẽ làm một cuộc khảo sát khách hàng.

Menu sẽ có $M$ món ăn được đánh số từ 1 đến $M$. Trung sẽ hỏi $N$ vị khách xem họ sẽ thích những món ăn nào.

Vị khách thứ i sẽ thích $K_{i}$ món và các món đó sẽ được liệt kê dưới dạng: món thứ $a_{i1}$, món thứ $a_{i2}$, ..., món thứ $a_{iK}$.

Nhiệm vụ của bạn là tìm ra số món ăn mà tất cả những người được khảo sát đều thích.

# Điều kiện
Tất cả các giá trị đều là số nguyên.

1 ≤ $N$,$M$ ≤ 30

1 ≤ $K_{i}$ ≤ $M$

1 ≤ $a_{i_j}$ ≤ $M$

Với mọi $i$ thỏa mãn (1 ≤ $i$ ≤ $N$) thì $a_{i_1}$, $a_{i_2}$, ..., $a_{i_Ki}$ sẽ phải khác nhau.

# Input
Input có dạng:

$N$ $M$

$K_{1}$ $a_{1_1}$ $a_{1_2}$... $a_{1_K1}$

$K_{2}$ $a_{2_1}$ $a_{2_2}$... $a_{2_K2}$

....

$K_{N}$ $a_{N_1}$ $a_{N_2}$... $a_{N_KN}$

# Output
In ra số món ăn mà tất cả mọi người được khả sát đều thích.

# Example
|Input|Output|
|-|-|
|3 4</br>2 1 3</br>3 1 2 3</br>2 3 2|1|

Ở đây, ta thấy tất cả mọi người đều yêu thích 1 món ăn. Đó là món số 3.

|Input|Output|
|-|-|
|5 5</br>4 2 3 4 5</br>4 1 3 4 5</br>4 1 2 4 5</br>4 1 2 3 5</br>4 1 2 3 4|0|
|1 30</br>3 5 10 30|3|
