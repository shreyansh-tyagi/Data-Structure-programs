n=int(input())
a=list(map(int,input().split()))[:n]
for i in range(n):
    print(a[i],end=' ')
print('\n',min(a))