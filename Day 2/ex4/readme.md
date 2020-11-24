# Đề bài

Ba bạn An, Bình và Cường cùng tham gia một trò chơi như sau: Mỗi bạn nắm trong tay một đồng xu,
mỗi đồng xu có hai trạng thái : sấp và ngửa. Theo hiệu lệnh, cả ba bạn cùng đưa đồng xu của mình ra phía trước.
Nếu cả ba đồng xu cùng sấp hoặc cùng ngửa thì chưa phát hiện người thua cuộc (hòa nhau).
Nếu một bạn có trạng thái đồng xu khác với hai bạn kia
(nghĩa là đồng xu của bạn ấy sấp còn hai người kia ngửa và ngược lại đồng xu của bạn ấy ngửa thì hai người kia sấp)
thì bạn đó thắng cuộc.
Hãy viết chương trình mô phỏng trò chơi trên.

## Input

- ba số a, b, c (chỉ là 1 hoặc 0)

## Output

- `0` nếu a = 0, b = 0, c = 0 hoặc a = 1, b = 1, c = 1
- `1` nếu a = 1, b = 0, c = 0 hoặc a = 0, b = 1, c = 1
- `2` nếu a = 0, b = 1, c = 0 hoặc a = 1, b = 0, c = 1
- `3` nếu a = 0, b = 0, c = 1 hoặc a = 1, b = 1, c = 0
