a=123
temp=a
value=0
while(temp>0):
    digit=temp%10
    temp=temp//10
    value=value*10+digit
if(value==a):
    print("palindrome")
else:
    print("not palindrome")