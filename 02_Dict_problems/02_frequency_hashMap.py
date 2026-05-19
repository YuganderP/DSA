a=[5,6,7,7,1,9,111,1,1,5,1,1]
hash_map={}

for i in a:
    hash_map[i]=(hash_map.get(i,0))+1

print(hash_map)

# time complexity : O(n)
# space complexity: O(n)
