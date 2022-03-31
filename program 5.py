n=(input("Ente any string:"))
a=n
rev=0
while(a<2):
    d=n%10
    rev=rev*10+d
    n=n//10
if(a==rev):
    print("number is palindrom")
else:
    print("number is not palindrom")
