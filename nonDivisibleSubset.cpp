// https://www.hackerrank.com/challenges/non-divisible-subset/problem

#include <iostream>
#include <algorithm>
#include <vector>

int nonDivisibleSubset(int k, std::vector<int> s)
{
    std::vector<int> counts = {0};
    
    for (int i = 0; i < k; i++)
    {
        counts.push_back({ 0 });
    }

    for (int i : s)
    {
        counts[i % k] += 1;
    }

    int count = std::min(counts[0], 1);
    for (int i = 0; i < (int) float(k / 2 + 1); i++)
    {
        if (i != k - i)
        {
            count += std::max(counts[i], counts[k - i]);
        }
    }

    if (k % 2 == 0)
    {
        count += 1;
    }
    
    return count;
}
