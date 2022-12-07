def recheck(dp):
    flag=0
    for i in dp.keys():
        if dp[dp[i]] <dp[i]:
            dp[i]=dp[dp[i]]
            flag+=1
    if(flag==0):
        return
    else:
        recheck(dp)

s1=input()
s2=input()
s3=input()
dp={}
for i in range(97,123):
    dp[chr(i)]=chr(i)
   
for i in range(len(s1)):
    if(s1[i]<s2[i]):
        dp[s2[i]]=s1[i]
    elif(s1[i]>s2[i]):
        dp[s1[i]]=s2[i]
    recheck(dp)

res=""
for i in range(len(s3)):
    res+=dp[s3[i]]
print(res)
