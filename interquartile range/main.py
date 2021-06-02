import statistics
n=int(input())
a=list(map(int,input().split()))[:n]
b=list(map(int,input().split()))[:n]
d=[]
for i in range(n):
    for j in range(b[i]):
        d.append(a[i])
d.sort()
print(d)       
c,e=[],[]
f=len(d)//2
for i in range(f):
    c.append(d[i]) 
for j in range(f,len(d)):
    e.append(d[j])
g,h=round(statistics.median(c),1),round(statistics.median(e),1)
print(round(float(h-g),1))

    
    
