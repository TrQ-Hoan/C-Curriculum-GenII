[Base -2 Number](https://atcoder.jp/contests/ABC105/tasks/abc105_c)

# Mô tả
Cho một số `N`. Hãy in ra số đó dưới dạng **Hệ Số -2**.

Gọi **S** là sô ở dạng **Hệ Số -2** của `N` sẽ như sau:
- **S** là chuỗi gồm các số `0` và `1`;
- Trừ khi **S**=0 thì kí tự đầu tiên của **S** sẽ là `1`;
- **S**=S<sub>k</sub>S<sub>k-1</sub>...S<sub>0</sub> với S<sub>0</sub>×(-2)<sup>0</sup> + S<sub>1</sub>×(-2)<sup>1</sup> + ... + S<sub>k</sub>×(-2)<sup>k</sup> = `N`.
* Có thể chứng minh 1 điều răng với mỗi số `N` thì chỉ có một và chỉ một cách biểu diễn qua chuỗi **S** duy nhất.
## Điều kiện
-10<sup>9</sup> ≤ `N` ≤ 10<sup>9</sup>

`N` là số nguyên.

### Input 
Input có dạng: 
```
N
```

#### Output
Chuỗi **S** thỏa mãn.

##### Example
|Input|Output|
|-|-|
|-9|1011|

Vì (-2)<sup>0</sup> + (-2)<sup>1</sup> + (-2)<sup>3</sup> = 1 + (-2) + (-8) = `N`.

---------------------------------------

|Input|Output|
|-|-|
|123456789|11000101011001101110100010101|
|0|0|
