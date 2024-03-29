# Book reading
Source: Google Kick Start 2019 Round G
## Problem
Supervin is a librarian handling an ancient book with N pages, numbered from 1 to N. Since the book is too old, unfortunately M pages are torn out: page number P1, P2, ..., PM.

Today, there are Q lazy readers who are interested in reading the ancient book. Since they are lazy, each reader will not necessarily read all the pages. Instead, the i-th reader will only read the pages that are numbered multiples of Ri and not torn out. Supervin would like to know the sum of the number of pages read by each reader.

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the three integers N, M, and Q, the number of pages in the book, the number of torn out pages in the book, and the number of readers, respectively. The second line contains M integers, the i-th of which is Pi. The third line contains Q integers, the i-th of which is Ri.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the total number of pages that will be read by all readers.

Limits
Time limit: 40 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
1 ≤ P1 < P2 < ... < PM ≤ N.
1 ≤ Ri ≤ N, for all i.

Test set 1 (Visible)
1 ≤ M ≤ N ≤ 1000.
1 ≤ Q ≤ 1000.

Test set 2 (Hidden)
1 ≤ M ≤ N ≤ 105.
1 ≤ Q ≤ 105.
