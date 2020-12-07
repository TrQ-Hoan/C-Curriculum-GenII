[Đề bài](https://atcoder.jp/contests/ABC103/tasks/abc103_a)

# Mô tả
Phưn Phưn do mải paylak nên đã bỏ qua những ngày ôn thi trên trường. Bây giờ, bạn ấy phải ôn cấp tốc 3 môn là Toán Rời Rạc A<sub>1</sub>, Xác Suất Thống Kê A<sub>2</sub> và C++ A<sub>3</sub> . Mỗi môn Phưn sẽ ôn hết trong khoảng thời gian tương ứng là `a<sub>1</sub>`, `b<sub>2</sub>` và 'c<sub>3</sub>' năm. Do có sự giúp sức của "thần dược" nên Phưn có thể hoàn thành luôn 1 môn bất kì đầu tiên . Môn học A<sub>j</sub> tiếp theo sẽ được hoàn thành với khoảng thời gian = |`a<sub>j</sub>`-`a<sub>i</sub>`| năm với môn A<sub>i</sub> là môn đã được hoàn thành ngay trước đó. Hãy tính xem Phưn Phưn mất mấy năm để ôn hết được tất cả các môn nhé ^^
  
# Điều kiện
1 ≤ `a<sub>1</sub>`,`a<sub>2</sub>`,`a<sub>3</sub>` ≤ 100

`a<sub>1</sub>`,`a<sub>2</sub>`,`a<sub>3</sub>` là các số nguyên.
  
# Input
Input có dạng:
```
`a<sub>1</sub>` `a<sub>2</sub>` `a<sub>3</sub>`
```

# Output
1 số duy nhất thỏa mãn.

# Example
|Input|Output|
|-|-|
|1 6 3|5|

Sẽ tốn ít nhất 5 năm như sau:
- Đầu tiên, hoàn thành môn A<sub>1<sub> tốn 0 năm.
- Sau đó, hoàn thành môn A<sub>3<sub> tốn |3-1|=2 năm.
- Cuối cùng, hoàn thành môn A<sub>2<sub> tốn thêm |6-3|=3 năm nữa => tổng cộng 5 năm.
-----------------------------
  
|Input|Output|
|-|-|
|11 5 5|6|
|10 10 10|0|
