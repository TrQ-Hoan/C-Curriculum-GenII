[B-Biliards](https://atcoder.jp/contests/abc183/tasks/abc183_b)

# Mô tả
Takahashi is playing billiards on a two-dimensional plane. The *x*-axis functions as a wall; when a ball hits the axis, it will bounce off the axis so that the angle of incidence equals the angle of reflection.

Takahashi's ball is now at (S<sub><i>x</i></sub>,S<sub><i>y</i></sub>). When he strikes the ball aiming for some point, it will roll in a straight line towards that point.

To make the ball hit the *x*-axis exactly once and then pass (G<sub><i>x</i></sub>,G<sub><i>y</i></sub>), where along the *x*-axis should he aim for?
# Constraints
* −10<sup><i>6</i></sup> ≤ S<sub><i>x</i></sub>, G<sub><i>y</i></sub>≤ 10<sup><i>6</i></sup>
* 0 < S<sub><i>y</i></sub>, G<sub><i>y</i></sub> ≤ 10<sup><i>6</i></sup>
* S<sub><i>x</i></sub> ≠ G<sub><i>x</i></sub>
* All values in input are integers.
# Input
Input is given from Standard Input in the following format:
```
Sx Sy Gx Gy
```
# Output
Let (*x*,0) be the point Takahashi should aim for. Print *x* with 10 fractional digits.<sup>−6</sup>.
# Sample
|Input|Output|
|-----|----- |
|1 1 7 2|3.0000000000|

As shown below, we can make the ball pass (7,2) by striking it aiming for (3,0).
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
