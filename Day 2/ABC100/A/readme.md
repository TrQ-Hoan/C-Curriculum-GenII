[A-Happy Birthday](https://atcoder.jp/contests/ABC100/tasks/abc100_a)

# Mô tả
Sắp đến ngày sinh nhật thứ 16 của Lươn và Dừa. 
Ánh có một chiếc bánh hình tròn gồm 16 miếng bánh hình quạt được chia bằng nhau. 
Lươn và Dừa sẽ ăn lần lượt từng miếng bánh một theo quy tắc: "Mỗi người không thể ăn 2 miếng bánh có vị trí liền kề nhau". 
Liệu Lươn có thể ăn được A miếng bánh và Dừa ăn được B miếng bánh theo đúng quy tắc đã đề ra không?

# Điều kiện 
+) 1 <= A, B <=16

+) A + B <= 16

# Input:
Input có dạng:
```
A B
```

# Output
Nếu 2 số A và B thỏa mãn điều kiện bài toán thì in ra:

`Yay!`

Nếu không thì sẽ in ra:

`:(`

# Ví dụ
| Input | Output |
| ----- | ----- |
| 5 4 | `Yay!` |

2 bạn có thể ăn các miếng bánh theo hình dưới đây:
![alt text](https://img.atcoder.jp/abc100/e87fa456a900ac9ae36671ae8bd5eeea.png)

------------------
| Input | Output |
| ----- | ----- |
| 8 8 | `Yay!` |

Các bạn có thể ăn miếng bánh theo hình dưới đây:
![alt text](https://img.atcoder.jp/abc100/a7989ac033e6ba86e14078864c20d9c5.png)

-----------------
| Input | Output |
| ----- | ----- |
| 11 4 | `:(` |

Không có trường hợp nào thỏa mãn :(

