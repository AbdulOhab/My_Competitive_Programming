#B - Lucas Number

n=int(input());
L=[2,1];

for i in range (2,n+1):
    l=L[i-1]+L[i-2]
    L.append(l);
print(L[n])
