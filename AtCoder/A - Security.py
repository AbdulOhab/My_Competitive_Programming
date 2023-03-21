s = list(map(int, list(input())))
for i in range(len(s)-1):
    x, y = s[i], s[i+1]
    if x == y:
        print('Bad')
        exit()

print('Good')

