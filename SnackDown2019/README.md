# Q1- Qualifying to Pre-elimination(QUALPREL)

Today the organizers ask you to count the number of qualified teams in Pre-elimination round.They provide you scores of each team and ensure that all teams scoring at least equal to K-th team.

**Input:**

1. The first line contains one integer T - the number of testcases. The next 2⋅T lines contains test cases.
2. The first line of each test case contains two integers - N and K.
3. The second line contains N space-separated integers Si, i-th of them denoting the score of i-th team.

**Output:** For each testcase, output in a single line containing the answer to the problem.

**Constraints**
* 1≤T≤1000
* 1≤K≤N≤10^5
* 1≤S[i]≤10^9
* sum of N over all test-cases doesn't exceed 10^6

# Q2- Chef and Operations (QABC)

Chef has two sequences A and B, each with length N. He can apply the following magic operation an arbitrary number of times (including zero): choose an index i (1≤i≤N−2) and add 1 to A[i], 2 to A[i+1] and 3 to A[i+2], i.e. change A[i] to A[i]+1, A[i+1] to A[i+1]+2 and A[i+2] to A[i+2]+3.
Chef asks you to tell him if it is possible to obtain sequence B from sequence A this way. Help him!
**Input:**

* The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
* The first line of each test case contains a single integer N.
* The second line contains N space-separated integers A1,A2,…,AN.
* The third line contains N space-separated integers B1,B2,…,BN.

**Output:**
* For each test case, print a single line containing the string "TAK" if it is possible to reach sequence B or "NIE" otherwise.

**Constraints**

* 1≤T≤1,000
* 1≤N≤10^5
* 0≤A[i]≤10^8 for each valid i
* 0≤B[i]≤10^8 for each valid i
* the sum of N for all test cases does not exceed 5.10^5

# Q3- Spread the Word (SPREAD2)
Snackdown 2019 is coming! People have started to spread the word and tell other people about the contest.
There are N people numbered 1 through N. Initially, only person 1 knows about Snackdown. On each day, everyone who already knows about Snackdown tells other people about it. For each valid i, person i can tell up to Ai people per day. People spread the information among the people who don't know about Snackdown in the ascending order of their indices; you may assume that no two people try to tell someone about Snackdown at the same moment. Each person is only allowed to start telling other people about Snackdown since the day after he/she gets to know about it (person 1 can start telling other people already on day 1). How many days does it take for all people to know about Snackdown?
# Input:

* The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
* The first line of each test case contains a single integer N.
* The second line contains N space-separated integers A1,A2,…,AN.
# Output: 
* For each test case, print a single line containing one integer — the number of days.
# Constraints

* 1≤T≤1,000
* 2≤N≤10^5
* the sum of N for all test cases does not exceed 10^6
* 0≤Ai≤N for each valid i
* 1≤A1

# Q4- Chef and Operations (CHEFPRMS)
Chef likes prime numbers. However, there is one thing he loves even more. Of course, it's semi-primes! A semi-prime number is an integer which can be expressed as a product of two distinct primes. For example, 15=3⋅5 is a semi-prime number, but 1, 9=3⋅3 and 5 are not.
Chef is wondering how to check if an integer can be expressed as a sum of two (not necessarily distinct) semi-primes. Help Chef with this tough task!
# Input:

* The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
* The first and only line of each test case contains a single integer N.
# Output: 
* For each test case, print a single line containing the string "YES" if it is possible to express N as a sum of two semi-primes or "NO" otherwise.
# Constraints

* 1≤T≤200
* 1≤N≤200

# Q5- Finding Teammate (TEAMMATE)
Snackdown 2019 is coming! Since Snackdown is a contest of teams with up to two members, everyone is looking for a teammate. There are N contestants (numbered 1 through N) who want to participate in Snackdown; let's denote the skill level of the i-th contestant by Si. These people want to pair up in N/2 teams; each team should consist of two people.
Clearly everyone wishes for their teammate to be as skilled as possible, so everyone wants to maximize their teammate's skill level. We call a pairing (an unordered N/2-tuple of teams) valid if there are no two teams consisting of people (A,B) and (C,D) such that SD>SB and SA>SC — in that case, A and D would both prefer to be on the same team rather than with their current teammates.
Find the number of valid pairings. Since this number can be large, compute it modulo 1,000,000,007.
# Input:

* The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
* The first line of each test case contains a single integer N.
* The second line contains N space-separated integers S1,S2,…,SN.
# Output: 
* For each test case, print a single line containing one integer — the number of valid pairings modulo 1,000,000,007.
# Constraints

* 1≤T≤1,000
* 2≤N≤105
* N is even
* the sum of N for all test cases does not exceed 106
* 1≤Si≤106 for each valid i
