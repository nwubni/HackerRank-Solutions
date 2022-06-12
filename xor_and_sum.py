
# SOLUTION
def xorAndSum(a, b):
    M = 1000000007
    x = int(a, 2)
    y = int(b, 2)
    sum = 0

    for i in range(314160):
        sum += x ^ (y << i)

    return sum % M


print(xorAndSum("10", "1010"))
