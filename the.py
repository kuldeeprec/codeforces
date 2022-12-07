n=int(input())
x,y=[],[]
v,d=0,0
for i in range(n):
    a,b=map(int,input().split())
    x.append(a)
    y.append(b)
for i in range(0,n):
    if x[i]!=y[i]:
        d+=1
    elif i==0:
        pass
    else:
        if x[i]==y[i]:
            v+=1
if d!=0:
    print(0)
else:
    print(v)