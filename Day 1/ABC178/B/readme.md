[B-Product Max](https://atcoder.jp/contests/abc178/tasks/abc178_b)
# Mô tả
Cho các số nguyên *a*, *b*, *c* và *d*. Nếu *x*, *y* là số nguyên và thoả mãn *a* ≤ *x* ≤ *b*, *c* ≤ *y* ≤ *d* thì giá trị lớn nhất có thể của *x* × *y* là?
# Điều kiện
* −10<sup>9</sup> ≤ *a* ≤ *b* ≤ 10<sup>9</sup>
* −10<sup>9</sup> ≤ *c* ≤ *d* ≤ 10<sup>9</sup>\
Tất cả giá trị trong input đều là số nguyên.
# Input
Input được đưa vào dưới dạng:
```
a b c d
```
# Output
In ra đáp án.
# Ví dụ
| Input                     | Output            |
|-----                      |-----              |
|1 2 1 1                    |2                  |

<i>Nếu x=1 và y=1 thì x×y=1. Nếu x=2 và y=1 thì x×y=2. Vì vậy, đáp án là 2.</i>
<br>
| Input                     | Output            |
|-----                      |-----              |
|3 5 -4 -2                  |-6                 |

<i>Đáp án có thể là một số âm.</i>
<br>
| Input                     | Output            |
|-----                      |-----              |
|-1000000000 0 -1000000000 0|1000000000000000000|
