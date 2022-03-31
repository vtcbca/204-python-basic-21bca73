num=int(input("Enter any Number:"))
sum=0
tmp=num
while tmp>0:
    digit=tmp%10
    sum+=digit **3
    tmp//=10
if num == sum:
    print(f"{num} is armstog")
else:
    print(f"{num} is not armstog")
