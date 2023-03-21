n, a, b = map(int,input().split())
     
if a == 0:
    print(0)
    exit()
    
y = (n//(a+b))
am = n % (a + b)
if am <= a:
    ans = a * y + am
else:
    ans = a * y + a   
print(ans)
