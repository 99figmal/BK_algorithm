import sys

std = []

for i in range(1, 31):
    std.append(i)

for _ in range(28):
    num = int(input())
    std.remove(num)

print(min(std))
print(max(std))