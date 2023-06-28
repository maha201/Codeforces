k, n, w = map(int, input().split())
total = 0
for i in range(1, w+1):
    total += (k*i)

if total > n:
    print(total - n)
else:
    print(0)
