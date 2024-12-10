n=23423573
k = 3
count = 0
while(n>0):
    ld = n%10;
    count = count + 1;
    if count==k:
        print(ld)
        break
    n=n//10;
