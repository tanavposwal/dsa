w = [10, 20, 30, 40, 50, 60]
v = [60, 100, 120, 140, 160, 180]


# recursion
# Time: O(2^n)
def ks(n, C):
    if n == 0 and C == 0:
        result = 0
    elif w[n] > C:
        result = ks(n - 1, C)
    else:
        tmp1 = ks(n - 1, C)
        tmp2 = v[n] + ks(n - 1, C - w[n])
        result = max(tmp1, tmp2)
    return result


# dp
# Time: O(n)
dp = [0] * (len(w) + 1)


def ks_dp(n, C):
    if n == 0 and C == 0:
        result = 0
    elif n == 0:
        result = C
    else:
        result = max(dp[n], dp[n - 1] + v[n] + ks(n - 1, C - w[n]))
    dp[n] = result
    return result
