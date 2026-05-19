# iterating till sqrt(n)

from math import sqrt


a=20
result=[]

for i in range(1,int(sqrt(a))+1):
    if(a%i==0):
        result.append(i)
        result.append(a//i)
print(result)


# Time complexity: O(root(n)) => O (nlogn)3
# space complexity: O(k)