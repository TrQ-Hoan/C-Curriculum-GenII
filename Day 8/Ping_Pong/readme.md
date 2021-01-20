[Ping_Pong](https://codeforces.com/problemset/problem/1455/C)

# Mô tả
Huy Khắc (HK) và Quân Harem (QH) đang chuẩn bị chơi 1 game bóng bàn với 1 luật đơn giản.

Người chơi đầu tiên sẽ phát bóng. Người còn lại sẽ đánh bóng lại cho người giao và 2 người chơi lần lượt đánh trả bóng cho người kia cho đến khi có người không đỡ được bóng.

Người không đỡ được bóng sẽ thua lượt chơi hiện tại và người còn lại sẽ phát bóng vào lượt chơi kế tiếp. HK sẽ phát bóng đầu tiên.

Ban đầu, HK sẽ có $x$ mana và QH sẽ có $y$ mana. Mỗi khi phát bóng hoặc đỡ bóng, người thực hiện sẽ mất đi 1 mana. 

Nếu người chơi có 0 mana, người chơi đó sẽ không thể đỡ bóng (và thua lượt chơi đó) và cũng như là không thể phát bóng (lúc này người chơi còn lại sẽ phát bóng thay).

Khi mà cả 2 người đếu hết mana, game sẽ kết thúc.

HK và QH đều là những người có suy nghĩ, vậy nên họ sẽ tính toán những lần đỡ sao cho số lượt thắng của mình là lớn nhất cũng như số lượt thắng của đối thủ là nhỏ nhất. 

Bạn hãy tính số lần chiến thắng của HK và QH.

# Điều kiện
$t$ là số bộ test (1 ≤ $t$ ≤ $10^{4}$)

(1 ≤ $x$,$y$ ≤ $10^{6}$)

# Input
Input có dạng:
$t$
$x$ $y$
...

# Output
Số lần chiến thắng của HK và QH theo cách chơi có lợi nhất.

# Example
|Input|Output|
|-|-|
|3</br>1 1</br>2 1</br>1 7|0 1</br>1 1</br>0 7|

Ở test1, HK phát bóng tốn 1 mana. QH đỡ cầu tốn 1 mana. Sau đó vì HK có 0 mana nên không thể đỡ bóng, nên QH có 1 trận thắng. 2 người đều có 0 mana -> gameover.

Ở test2, HK phát bóng tốn 1 mana, QH quyết định không đỡ cầu để tiết kiệm mana. Do đó HK có 1 trận thắng. Hk tiếp tục phát cầu cho lượt chơi thứ 2. Lần này QH quyết định đỡ bóng và do HK hết mana nên QH thắng ở lượt chơi thứ 2. Cả 2 người đều có 0 mana -> gameover.

Ở test3, HK phát bóng tốn 1 mana, QH đỡ bóng tốn 1 mana, HK không thể đỡ bóng nên QH thắng. Những lượt sau HK không thể đỡ bóng nên QH chắc chắn sẽ dành điểm của những lượt chơi còn lại. Đến khi cả 2 người đều có 0 mana -> gameover.
