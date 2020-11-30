[B-Biliards](https://atcoder.jp/contests/abc183/tasks/abc183_b)

# Mô tả
Takahashi đang chơi Bi-a trên một mặt phẳng 2 chiều. Coi trục *x* là bức tường; khi mà bi đập vào trục, nó sẽ bật lại với một góc phản xạ bằng với góc tới.

Bi của Takahashi giờ đang ở toạ độ (S<sub><i>x</i></sub>, S<sub><i>y</i></sub>). Khi anh ấy đánh bi, nó sẽ lăn theo một đường thẳng tới điểm mà anh ta đã ngắm trước đó.

Để bi đánh trúng trục *x* chính xác một lần rồi đi qua (G<sub><i>x</i></sub>, G<sub><i>y</i></sub>), anh ấy phải nhắm vào điểm nào trên trục *x* để đánh?
# Điều kiện
* −10<sup><i>6</i></sup> ≤ S<sub><i>x</i></sub>, G<sub><i>y</i></sub>≤ 10<sup><i>6</i></sup>
* 0 < S<sub><i>y</i></sub>, G<sub><i>y</i></sub> ≤ 10<sup><i>6</i></sup>
* S<sub><i>x</i></sub> ≠ G<sub><i>x</i></sub>
* Tất cả giá trị được đưa vào đều là số nguyên.
# Input
Input được đưa vào dưới dạng
```
Sx Sy Gx Gy
```
# Output
Gọi (*x*, 0) là điểm mà Takahashi nên nhắm tới. In ra *x* với 10 chữ số sau dấu phẩy.
# Ví dụ
|Input|Output|
|-----|----- |
|1 1 7 2|3.0000000000|

Như hình ảnh dưới, chúng ta có thể khiến bi lăn qua điểm (7, 2) bằng cách nhắm nó và đánh vào điểm (3, 0).
![alt text](https://img.atcoder.jp/ghi/c9595d59f1139b808d4cf3d31d6b48ee.png)
<br>
|Input|Output|
|-----|----- |
|1 1 3 2|1.6666666667|

![alt text](https://img.atcoder.jp/ghi/4f2c808fddc9bb349999f8969996ebb9.png)
<br>
|Input|Output|
|-----|----- |
|-9 99 -999 9999|-18.7058823529|
