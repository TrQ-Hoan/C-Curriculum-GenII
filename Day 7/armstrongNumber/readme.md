## Đề bài
Số armstrong là số mà từng chữ số trong số đó lũy thừa với số chữ số của nó bằng chính nó. \
Ví dụ:\
137 ≠ 1^3 + 3^3 + 7^3 => 137 không phải là số armstrong\
153 = 1^3 + 5^3 + 3^3 => 153 là số armstrong\
Tìm và đưa ra màn hình tất cả các số armstrong có trong đoạn [a,b] (```a <= x <= b```)\
Input: 2 số nguyên a,b (0 < a < b < 10^4)\
Output: Các số armstrong trong đoạn, nếu không có số nào thỏa mãn, in ra None

# Ví dụ
|input|output|
|---|---|
|100 500| 153 370 371 407 |
|13 147 | None |
