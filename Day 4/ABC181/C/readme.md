[C - Collinearity](https://atcoder.jp/contests/abc181/tasks/abc181_c)
# Problem Statement
Chúng ta có $N$ điểm trên hệ trục tọa độ Oxy.
The *i*-th point is at (*x*<sub><i>i</i></sub>,*y*<sub><i>i</i></sub>).
Is there a triple of distinct points lying on the same line among the *N* points?
# Constraints
* All values in input are integers.
* 3 ≤ *N* ≤10<sup>2</sup>
* |<i>x<sub>i</sub></i>|,|<i>y<sub>i</sub></i>|≤10<sub><i>3</i></sub>
* If *i*≠*j*, (<i>x<sub>i</sub></i>,<i>y<sub>i</sub></i>)≠(<i>x<sub>j</sub></i>,<i>y<sub>j</sub></i>).
# Input
Input is given from Standard Input in the following format:
```
N
x1 y1
⋮
xN yN
```
# Output
If there is a triple of distinct points lying on the same line, print Yes; otherwise, print No.
# Sample
|Input|Output|
|-|-|
|4<br/>0 1<br/>0 2<br/>0 3<br/>1 1|Yes|
|14<br/>5 5<br/>0 1<br/>2 5<br/>8 0<br/>2 1<br/>0 0<br/>3 6<br/>8 6<br/>5 9<br/>7 9<br/>3 4<br/>9 2<br/>9 8<br/>7 2|No|
