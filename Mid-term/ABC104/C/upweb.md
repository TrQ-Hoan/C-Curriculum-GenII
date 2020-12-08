# C - ALL GREEN

## Mô tả

Trong một cuộc thi lập trình trên trang ISPOJ cho rất nhiều câu hỏi hay và khó. Mỗi câu hỏi được cho một số điểm riêng dựa trên độ khó của câu hỏi đó. Cụ thể hơn, với số nguyên $i$ nằm từ $1$ đến $D$, câu hỏi $p_{i}$ có số điểm là $100i$. Tất cả các câu hỏi $p_{i}+ ... + p_{D}$ đều là những câu hỏi còn lại có thể làm ở trên ISPOJ.

Mỗi tài khoản trên ISPOJ trong cuộc thi này có một số điểm. Số điểm của tài khoản đó là tổng của 2 loại điểm sau:

- **Main Score**: là điểm mà thí sinh đó giành được từ việc giải được các câu hỏi của cuộc thi.
- **Perfect Bonuses**: khi mà thí sinh giải được tất cả **các câu hỏi với số điểm là** $100i$, họ sẽ nhận được một số điểm thưởng là $c_{i}$, ngoài **main score** mà họ đã giành được ($1 ≤ i ≤ D$).

Ki3n_m1ddl3, người mà đã chán với việc đi tìm cờ và lăm le mò sang ISPOJ, chưa giải được bất kì câu hỏi nào. Mục tiêu của hắn là phải đạt được $G$ điểm hoặc là hơn. Vậy thì ít nhất Ki3n_m1ddl3 phải giải được bao nhiêu câu hỏi thì mới đạt được mục tiêu của hắn?

## Điều kiện

  - $1 ≤ D ≤ 10$
  - $1 ≤ p_{i} ≤ 100$
  - $100 ≤ c_{i}≤ 10^{6}$
  - $100 ≤ G$
  - Tất cả các giá trị đưa vào đều là số nguyên.
  - $c_{i}$ và $G$ là bội của 100.
  - Số điểm $G$ phải là một số điểm khả thi mà có thể thực hiện được theo nguyên tắc của đề.

## Input

Input được đưa vào dưới dạng sau:
|   $D$   |   $G$   |
| ------- | ------- |
| $p_{1}$ | $c_{1}$ |  
|   ...   |   ...   |
|   ...   |   ...   |
| $p_{D}$ | $c_{D}$ |

## Output

In ra số bài tối thiểu cần được giải quyết để đạt được hoặc nhiều hơn $G$ điểm. Chú ý rằng mục tiêu này hoàn toàn có thể đạt được (xem **Điều kiện**).

### Ví dụ 1

| Input                     | Output |
| ------------------------- | ------ |
| 2 700<br/>3 500<br/>5 800 | 3      |

Trong trường hợp này, có 3 câu hỏi 100 điểm và 5 câu hỏi 200 điểm. Điểm thưởng (perfect bonus) cho việc giải được hết câu 100 điểm là 500 điểm, và perfect bonus cho việc giải hết câu 200 điểm là 800 điểm. Mục tiêu của Ki3n_m1ddl3 là đạt được 700 điểm hoặc nhiều hơn.

Một cách để giải vấn đề này là Ki3n_m1ddl3 giải được 4 câu 200 điểm và nhận main score là 800 điểm. Tuy nhiên, nếu hắn chỉ cần giải được cả 3 câu 100 điểm thì hắn sẽ nhận thêm 500 điểm perfect bonus ngoài 300 điểm main score, để nhận được tổng là 800 điểm, và hắn đã đạt được mục tiêu với ít câu hỏi cần được làm hơn.

### Ví dụ 2

| Input                      | Output |
| -------------------------- | ------ |
| 2 2000<br/>3 500<br/>5 800 | 7      |

Trường hợp này thì cũng giống như VD1 thôi, chỉ khác là Ki3n_m1ddl3 có mục tiêu là 2000 điểm hoặc hơn. Do đó, chúng ta bắt buộc phải giải được hết cả 5 câu 200 điểm, rồi giải thêm 2 câu 100 điểm nữa là chúng ta sẽ hoàn thành được mục tiêu.

### Ví dụ 3

| Input                     | Output |
| ------------------------- | ------ |
| 2 400<br/>3 500<br/>5 800 | 2      |

Trường hợp này cũng giống VD1, nhưng mục tiêu lần này chỉ có 400 điểm, do vậy ta chỉ cần giải 2 câu 200 điểm là được.

### Ví dụ 4

| Input                                                              | Output |
| ------------------------------------------------------------------ | ------ |
| 5 25000<br/>20 1000<br/>40 1000<br/>50 1000<br/>30 1000<br/>1 1000 | 66     |

Ở đây chỉ có mỗi một câu 500 điểm, nhưng số điểm chúng ta có thể đạt được từ perfect bonus thì cũng đáng suy ngẫm đấy.
