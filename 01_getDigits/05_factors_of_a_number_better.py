# iterating till n/2


a= 20
result=[]
for i in range(1,(a//2)+1):
    if(a%i==0):
        result.append(i)

(result.append(a))
print(result)

# time complexity = O(N)
# space complexity = O(K)

