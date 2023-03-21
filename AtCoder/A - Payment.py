x = int(input())
if x%1000 == 0:
    print("0")
else:
    print(abs(x%1000 - 1000))