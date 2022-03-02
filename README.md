
# Pick chocolate bars

You are visiting a chocolate factory that has a single row of chocolate bars
arranged from left to right. The bars are represented by an integer
array bars where bars[i] is the type of ith bar.

You want to collect as much chocolate as possible. However, the owner has
some strict rules that you must follow:

You only have two baskets, and each basket can only hold a single type of
chocolate bar. There is no limit on the amount of chocolate bars each basket
can hold.

Starting from any chocolate bar of your choice, you must pick exactly one
bar while moving to the right. The picked chocolate bar must fit in one of
your baskets.

Once you reach a chocolate bar that cannot fit in your baskets, you must stop.
Given the integer array bars , return the maximum number of bars you can pick.


### Example 1:
1 Input:bars = [1,2,1]
2 Output: 3
3 Explanation: We can pick all bars.

### Example 2:
1 Input: bars = [0,1,2,2]
2 Output: 3
3 Explanation: We can pick from bars [1,2,2].
If we had started from the first (0), we would only pick from
[0,1].
4

### Example 3:
1 Input: bars = [1,2,3,2,2]
2 Output: 4
3 Explanation: We can pick from bars [2,3,2,2].
If we had started at the first one, we would only pick from [1,
2].
4


### Example 4:
1 Input: bars = [3,3,3,1,2,1,1,2,3,3,4]
2 Output: 5
3 Explanation: We can pick from bars [1,2,1,1,2].

## Constraints:
1 <= bars.length <= 100
0 <= bars[i] < bars.length
