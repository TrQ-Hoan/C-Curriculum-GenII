[Problem F - Final Exam](https://cantho20open.kattis.com/problems/cantho20.finalexam2)

## Mô tả

Hôm nay, R3r4ck sẽ làm bài kiểm tra cuối kì của CLB ISP dưới hình thức trắc nghiệm. Do đã master tất cả các bài tập nên anh ta rất tự tin. Bài kiểm tra này có $N$ câu hỏi được đánh số từ $1$ đến $N$, mỗi câu có 4 đáp án và R3r4ck chỉ được chọn 1 trong bốn đáp án $A$ $B$ $C$ $D$. R3r4ck sẽ viết đáp án của $N$ câu trả lời trên $N$ dòng, dòng thứ $i$ sẽ có câu trả lời là $X_{i}$. Mỗi câu hỏi có 1 đáp án đúng và nếu trả lời đúng thì R3r4ck sẽ nhận được 1 điểm.

Sau khi hoàn thành bài test, R3r4ck tự tin đi so sánh đáp án để chuẩn bị cười vào mặt những đứa có đáp án sai. Tuy nhiên, cười người lúc trước lúc sau ngu người, anh ta nhận ra hầy hết các đáp án của mình đều khác với các bạn =)))))

Anh ta sớm nhận ra 1 điều: R3r4ck viết nhầm đáp án của câu $thứ 2$ vào dòng $thứ 1$, đáp án câu $thứ 3$ vào dòng $thứ 2$,... đáp án câu $thứ N$ vào dòng $thứ N-1$. Hạnh bỏ trống dòng $thứ N$ và không viết đáp của câu $thứ 1$.

Hãy check xem với quả đi vào lòng đất của R3r4ck thì anh ta sẽ được bao nhiêu điểm.

## Input
1 ≤ $N$ ≤ 1000

trên $N$ dòng tiếp theo, dòng thứ $i$ sẽ là đáp án của của câu hỏi thứ $i$.

## Output
In ra số điểm mà R3r4ck đạt được.

## Sample 1
Input|Output
-----|------
4<br>A<br>A<br>A<br>A | 3

Đáp án của 4 câu hỏi là A A A A. vì R3r4ck bỏ câu cuối và viết nhầm các đáp án trên nên số câu trả lời đúng sẽ là $3$.

## Sample 2
Input|Output
-----|------
6<br>A<br>D<br>B<br>B<br>C<br>A | 1
