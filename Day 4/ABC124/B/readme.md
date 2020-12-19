[Đề bài](https://atcoder.jp/contests/ABC124/tasks/abc124_b)

# Mô tả
Bố đường Quân Xúy quyết định sẽ đưa các bé đường của mình lên 1 ngọn núi để vui chơi.

Ngọn núi được trải dài từ Đông sang Tây. Bãi biển sẽ nằm phía Tây của ngọn núi.

Ngọn núi đó sẽ có $N$ đỉnh cùng với độ cao của mỗi đỉnh theo thứ tự từ Đông sang Tây sẽ là $H_{i}$. 

Trên mỗi đỉnh sẽ là một nhà nghỉ nho nhỏ cho mỗi bé đường của anh ta.

Sau khi nhận ra vẻ đẹp tuyệt zời của bãi biển, Xúy quyết định sẽ chọn nhà nghỉ trên đỉnh núi mà anh ta có thể quan sát được bãi biển của mình.

Để quan sát được bãi biển thì đỉnh núi thứ i phải thỏa mãn: $H_{1}$ ≤ $H_{i}$; $H_{2}$ ≤ $H_{i}$; ...; $H_{i-1}$ ≤ $H_{i}$

Hãy tìm xem có bao nhiêu đỉnh núi có thể nhìn thấy được bãi biển nhé.

# Điều kiện
Tất cả các giá trị đều là số nguyên.

1 ≤ $N$ ≤ 20

1 ≤ $H_{i}$ ≤ 100

# Input 
Input có dạng:

$N$

$H_{1}$ $H_{2}$ ... $H_{N}$

# Output
In ra số các đỉnh núi có thể nhìn thấy bãi biển.

# Example
|Input|Output|
|-|-|
|4</br>6 5 6 8|3|

Bạn có thể nhìn được bãi biển ở các ngọn núi thứ 1, thứ 3 và thứ 4.

|Input|Output|
|-|-|
|5</br>4 5 3 5 4|3|
|5</br9 5 6 8 4|1|
