# amstrong number example 153
a=156
count_digits=len(str(a))
temp=a
sum=0
while(temp>0):
    digit=temp%10
    sum=sum+(digit**count_digits)

    count_digits=count_digits
    temp = temp // 10

if(sum==a):
    print("Amstrong Number")
else:
    print("not an Amstrong Number")