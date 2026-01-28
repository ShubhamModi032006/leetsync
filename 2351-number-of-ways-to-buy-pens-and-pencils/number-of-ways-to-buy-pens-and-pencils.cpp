class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        if (cost1 > total && cost2 > total)
            return 1;
        long long count = 0;

        for (long long  i = 0; i < (total / cost2) + 1; i++) {
            long long temp1 = cost2 * i;
            long long x = total - temp1;
            long long pentemp = (x) / cost1;
            
            count += pentemp + 1;
        }
        return count;
    }
};