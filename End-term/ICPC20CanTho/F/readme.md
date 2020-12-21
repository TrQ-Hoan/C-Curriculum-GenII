[Problem F - Final Exam](https://cantho20open.kattis.com/problems/cantho20.finalexam2)

## Descriptions
The Vietnamese High School graduation exam is in progress! For most Vietnamese high school students, this is their most important exam, as its result not only decides whether they can graduate from high school, but is also used for their university applications.

Multiple Choice Test.
Today, Hanh finished his final exam, Math, which is Hanh’s strongest subject. In this exam, there are **_n_** questions, numbered from **_1_** to **_n_**. Each one is a multiple choice question, with **_4_** answers, **_A_**, **_B_**, **_C_**, and **_D_**. The students have to write the answers on an answer sheet with **_n_** lines, the _**i**-th_ line should contain the answer for the _**i**-th_ question. Each question has only one correct answer, and the student will receive one point if their answer matches the correct one.

Hanh started checking his results with his friends confidently. After few minutes, Hanh’s confidence turned into fright: Most of Hanh’s answers are different from his friends’.

Hanh quickly realized that he made a terrible mistake: Hanh wrote the answer for the _**2**nd_ question on the _**1**st_ line of the answer sheet, the answer for the _**3**rd_ question on the _**2**nd_ line, the answer for the _**4**th_ question on the _**3**rd_ line, and so on. Hanh left the _**n**-th_ line of the answer sheet empty, and did not write the answer for the _**1**st_ question anywhere!

Please help Hanh check what will be his final score. Given that Hanh is a great Math student, his answers for all **_n_** questions would be correct if they were on the correct line of the answer sheet.

## Input
The first line of the input contains a single integer **_n_** (**_1 ≤ n ≤ 1000_**) — the number of questions.

**_n_** lines follow, the _**i**-th_ line contains a single character, **_A_**, **_B_**, **_C_**, or **_D_** — the correct answer for the _**i**-th_ question.

## Output
Print a single integer — Hanh’s final score.

## Sample 1
Input|Output
-----|------
4<br>A<br>A<br>A<br>A | 3

Fortunately for Hanh, all **_4_** questions have A as correct answer. So Hanh wrote **_A_** on the first three lines, and left the _**4**-th_ line empty. Hanh’s final score is **_3_**.

## Sample 2
Input|Output
-----|------
6<br>A<br>D<br>B<br>B<br>C<br>A | 1
