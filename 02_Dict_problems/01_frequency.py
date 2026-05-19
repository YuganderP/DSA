a=[5,6,7,7,1,9,111,1,1,5,1,1]
result={}

for i in a:
    if(i not in result):
        result[i]=1
    else:
        result[i]=result[i]+1

print(result)


# time complexity : O(n)
# space complexity: O(n)