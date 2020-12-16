[B-Quizzes](https://atcoder.jp/contests/abc184/tasks/abc184_b)
# Problem Statement
Chuối có *N* câu hỏi cần phải trả lời trong bài kiểm tra Toán Rời Rạc sắp tới. 

Ban đầu anh ta có X điểm. Nếu anh ta trả lời đúng thì sẽ được +1 điểm còn nếu không thì sẽ bị -1 điểm nếu trả lời sai.

Nếu anh ta trả lời sai khi đang có 0 điểm, số điểm sẽ vẫn giữ nguyên mà không bị trừ.

Bạn sẽ được cho 1 string gồm 2 ký tự `x` tương ứng với câu trả lời sai và `o` tương ứng với câu trả lời đúng. 

Hãy tìm số điểm của Chuối sau khi đã trả hết tất cả các câu hỏi?

# Constraints
* 1 ≤ *N* ≤ 2×10<sup>5<sup/>
* 0 ≤ *X* ≤ 2×10<sup>5<sup/>
* S là xâu có độ dài N và chứ các ký tự `x` và `o`.
  
# Input
Input có dạng:
```
N X
S
```
# Output
1 số thỏa mãn.

# Sample
|Input|Output|
|-----|-----|
|3 0<br/>xox|0|

Ban đầu Chuối có 0 điểm. 
Sau khi trả lời sai câu 1, Chuối sẽ không bị -1 điểm bởi điểm hiện tại đang là 0 điểm.
Sau khi trả lời đúng câu 2, Chuối sẽ được +1 điểm nên điểm hiện tại là 1 điểm.
Cuối cùng, trả lời sai câu 3, Chuối sẽ còn lại 0 điểm vì bị -1 điểm vì trả lời sai.
Vậy sau cùng, Chuối có 0 điểm.
<br>
<br>
|Input|Output|
|-----|-----|
|20 199999<br/>oooooooooxoooooooooo|200017|
|20 10<br/>xxxxxxxxxxxxxxxxxxxx|0|
