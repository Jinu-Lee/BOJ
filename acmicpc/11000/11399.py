N = int(input())

num = map(int, input().split())

time = 0
for i, j in enumerate(sorted(num, reverse=True)):
    time += (i + 1) * j

print(time)