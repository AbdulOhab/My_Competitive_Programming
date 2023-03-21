a, b, c = map(int, input().split())

int(t = b/a)

if t>c:
    ans = c
elif a>b:
    ans = '0'
else:
    ans = b/a

print(ans)