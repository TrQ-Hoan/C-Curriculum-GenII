# Spiral Matrix Fibonacci

## Đề bài

Dãy Fibonacci là dãy vô hạn các số tự nhiên bắt đầu bằng hai phần tử 1 và 1, các phần tử sau đó được thiết lập theo quy tắc mỗi phần tử bằng tổng hai phần tử trước nó.

Cho số nguyên dương n. Hãy tạo ra ma trận vuông kích thước $n*n$ chứa các số Fibonacci thứ $1$ tới $n*n$ __giảm dần__ theo hình xoắn ốc, xuất phát từ ô đầu tiên bên trái và đi theo chiều kim đồng hồ.

*__Chú ý:__ các số trong dãy Fibonacci sẽ lấy modulo $10^9 + 7$.*

## Điều kiện

$1 ≤ n ≤ 100$

## Test Case

### Input

5

### Output

75025 46368 28657 17711 10946\
55 34 21 13 6765\
89 1 1 8 4181\
144 2 3 5 2584\
233 377 610 987 1597

### Giải thích Test

```c
F[25] = 75025   F[24] = 46368   F[23] = 28657   F[22] = 17711   F[21] = 10946
F[10] = 55      F[9] = 34       F[8] = 21       F[7] = 13       F[20] = 6765
F[11] = 89      F[2] = 1        F[1] = 1        F[6] = 8        F[19] = 4181
F[12] = 144     F[3] = 2        F[4] = 3        F[5] = 5        F[18] = 2584
F[13] = 233     F[14] = 377     F[15] = 610     F[16] = 987     F[17] = 1597
```

Với $F[i]$ là số fibonacci thứ $i$
