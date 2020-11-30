[A - Maximize The Formula](https://atcoder.jp/contests/ABC110/tasks/abc110_a)

# Mô tả
Bạn quyết định cung cấp tiền tiêu vặt cho lũ trẻ thông qua kết quả của trò chơi sau:

- Có 3 tấm bảng, mỗi tấm sẽ có 1 số nguyên trong khoảng [1,9]. Một tấm bảng nhỏ khác sẽ để toán tử `+`.
- Nhiệm vụ của bạn là sắp xếp vị trí các tấm bảng chứa số nguyên và để tấm bảng `+` vào giữa 2 tấm bảng chứa số nguyên sao cho tổng của phép toán đó là lớn nhất.

 Hãy nhập vào 3 số A, B, C và in ra số lớn nhất có thể tạo thành.

# Điều kiện
1 ≤ A, B, C ≤ 9.

# Input 
3 số A, B, C.

# Output
1 số thỏa mãn yêu cầu.

# Ví dụ
| Input | Output |
| ----- | ------ |
| 1 5 2 | 53     | 

Chúng ta có 3 tấm bảng `1`,`5`,`2`. Sau khi sắp xếp và để `+` vào thì ta sẽ được `52` `+` `1` = 53.

---------------------
| Input | Output |
| ----- | ------ |
| 9 9 9 | 108    |
| 6 6 7 | 82     |
