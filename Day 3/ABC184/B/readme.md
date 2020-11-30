[B-Quizzes](https://atcoder.jp/contests/abc184/tasks/abc184_b)
# Problem Statement
Takahashi will answer *N* quiz questions.  
  
Initially, he has X points. Each time he answers a question, he gains 1 point if his answer is correct and loses 1 point if it is incorrect.
However, there is an exception: when he has 0 points, he loses nothing for answering a question incorrectly.  
  
You will be given a string S representing whether Takahashi's answers are correct.  
  
If the i-th character of S from the left is o, it means his answer for the i-th question is correct; if that character is x, it means his answer for the *i*-th question is incorrect.  
  
How many points will he have in the end?  
# Constraints
* 1 ≤ *N* ≤ 2×10<sup>5<sup/>
* 0 ≤ *X* ≤ 2×10<sup>5<sup/>
* S is a string of length N consisting of o and x.
# Input
Input is given from Standard Input in the following format:
```
N X
S
```
# Output
Print the number of points Takahashi will have in the end.
# Sample
|Input|Output|
|-|-|
|3 0<br/>xox|0|
  -------------------
  Initially, he has 0 points.\
He answers the first question incorrectly but loses nothing because he has no point.\
Then, he answers the second question correctly, gains 1 point, and now has 1 point.\
Finally, he answers the third question incorrectly, loses 1 point, and now has 0 points.\
Thus, he has 0 points in the end. We should print 0.\
|Input|Output|
|-|-|
|20 199999<br/>oooooooooxoooooooooo|200017|
|20 10<br/>xxxxxxxxxxxxxxxxxxxx|0|
