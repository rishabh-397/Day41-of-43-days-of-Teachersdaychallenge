# Day41-of-43-days-of-Teachersdaychallenge

D. Constructing the Array
time limit per test1 second
memory limit per test256 megabytes
You are given an array a
 of length n
 consisting of zeros. You perform n
 actions with this array: during the i
-th action, the following sequence of operations appears:

Choose the maximum by length subarray (continuous subsegment) consisting only of zeros, among all such segments choose the leftmost one;
Let this segment be [l;r]
. If r−l+1
 is odd (not divisible by 2
) then assign (set) a[l+r2]:=i
 (where i
 is the number of the current action), otherwise (if r−l+1
 is even) assign (set) a[l+r−12]:=i
.
Consider the array a
 of length 5
 (initially a=[0,0,0,0,0]
). Then it changes as follows:

Firstly, we choose the segment [1;5]
 and assign a[3]:=1
, so a
 becomes [0,0,1,0,0]
;
then we choose the segment [1;2]
 and assign a[1]:=2
, so a
 becomes [2,0,1,0,0]
;
then we choose the segment [4;5]
 and assign a[4]:=3
, so a
 becomes [2,0,1,3,0]
;
then we choose the segment [2;2]
 and assign a[2]:=4
, so a
 becomes [2,4,1,3,0]
;
and at last we choose the segment [5;5]
 and assign a[5]:=5
, so a
 becomes [2,4,1,3,5]
.
Your task is to find the array a
 of length n
 after performing all n
 actions. Note that the answer exists and unique.

You have to answer t
 independent test cases.

Input
The first line of the input contains one integer t
 (1≤t≤104
) — the number of test cases. Then t
 test cases follow.

The only line of the test case contains one integer n
 (1≤n≤2⋅105
) — the length of a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
 (∑n≤2⋅105
).

Output
For each test case, print the answer — the array a
 of length n
 after performing n
 actions described in the problem statement. Note that the answer exists and unique.

Example
Input
6
1
2
3
4
5
6

Output
1 
1 2 
2 1 3 
3 1 2 4 
2 4 1 3 5 
3 4 1 5 2 6 


A. Spy Detected!
time limit per test2 seconds
memory limit per test256 megabytes
You are given an array a
 consisting of n
 (n≥3
) positive integers. It is known that in this array, all the numbers except one are the same (for example, in the array [4,11,4,4]
 all numbers except one are equal to 4
).

Print the index of the element that does not equal others. The numbers in the array are numbered from one.

Input
The first line contains a single integer t
 (1≤t≤100
). Then t
 test cases follow.

The first line of each test case contains a single integer n
 (3≤n≤100
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤100
).

It is guaranteed that all the numbers except one in the a
 array are the same.

Output
For each test case, output a single integer — the index of the element that is not equal to others.

Example
Input
4
4
11 13 11 11
5
1 4 4 4 4
10
3 3 3 3 10 3 3 3 3 3
3
20 20 10

Output
2
1
5
3

