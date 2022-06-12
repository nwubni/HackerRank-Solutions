from functools import lru_cache

@lru_cache(maxsize=100000)
def helper(n, c, m):

    if (n == 0):
        return 1
    if (n < 0 or (m <= 0 and n >= 1)):
        return 0

    return helper(n, c, m - 1) + helper(n - c[m - 1], c, m)


def getWays(n, c):
    # Write your code here
    m = len(c)
    return helper(n, c, m)


print(getWays(10, tuple([2, 5, 3, 6])))
