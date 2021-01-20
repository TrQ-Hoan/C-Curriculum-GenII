[Add To Neighbour And Remove](https://codeforces.com/contest/1462/problem/D)

# Mô tả
Rén có 1 mảng $a[n]$ gồm $n$ số nguyên. Cô ta có thể thực hiện cách biến đổi sau trên dãy $a[n]$ không quá n lần. Với mỗi lần biến đổi gồm 2 bước như sau:

* Bước 1: Rén chọn 1 số $i$. Sau đó cô ta sẽ lấy giá trị của phần tử $a[i]$ được chọn để cộng thêm vào $a[i-1]$ hoặc $a[i+1]$.
* Bước 2: Sau khi cộng, Rén xóa phần tử thứ $i$ và độ dài của mảng mới sẽ trừ đi 1.

Ví dụ: Cho mảng {3, 1, 6, 6, 2}. Ta biến đổi như sau:

* Lần 1: Chọn $i=2$, cộng thêm $a[2]$ vào $a[1]$ và xóa $a[2]$ thì ta sẽ được mảng mới: {4, 6, 6, 2}.
* Lần 2: Chọn $i=1$, cộng thêm $a[1]$ vào $a[2]$ và xóa $a[1]$ thì ta sẽ được mảng mới: {10, 6, 2}.
* Lần 3: Chọn $i=3$, cộng thêm $a[3]$ vào $a[2]$ và xóa $a[3]$ thì ta sẽ được mảng mới: {10, 8}.
* Lần 4: Chọn $i=2$, cộng thêm $a[2]$ vào $a[1]$ và xóa $a[2]$ thì ta sẽ được mảng mới: {18}.

Rén sẽ có thể dừng lại ở bất kì lần nào. Hãy tìm xem Rén tốn ít nhất bao nhiêu bước để có thể tạo ra được mảng mới chỉ bao gồm các phần tử bằng nhau. 

# Điều kiện
Sẽ có $t$ bộ test (1 ≤ $t$ ≤ 3000). Với mỗi bộ test bao gồm:

$n$ số phần tử của mảng (1 ≤ $n$ ≤ 3000).

$a_{1}$ $a_{2}$ ... $a_{n}$ là các phần tử của mảng.

# Input
Input có dạng: 
$t$
$n$
$a_{1}$ $a_{2}$ ... $a_{n}$
....

# Output
$t$ đáp án tương ứng với mỗi bộ test.

# Example
|Input|Output|
|-|-|
|4
</br>5
</br>3 1 6 6 2
</br>4
</br>1 2 2 1
</br>3
</br>2 2 2
</br>4
</br>6 3 2 1|
4
</br>2
</br>0
</br>2|

Với test1 mảng được biến đổi 4 bước như ví dụ ở phần Mô tả.

Với test2 mảng được biến đổi như sau:
{1, 2, 2, 1} -> {3, 2, 1} -> {3, 3} (2 lần).

Với test3 mảng không cần biến đổi nữa.

Với test4 mảng được biến đổi như sau:
{6, 3, 2, 1} -> {6, 3, 3} -> {6, 6} (2 lần).
