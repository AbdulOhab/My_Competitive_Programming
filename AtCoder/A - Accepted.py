# s = input()
# print(s.count('1'))

s = list(input())

ans=0
for i in range(len(s)):
    ans += int(s[i])

print(ans)