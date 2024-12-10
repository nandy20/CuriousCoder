n=23423573
revN = 0
while(n>0):
    ld = n%10;
    revN = revN*10 + ld;
    n=n//10;
    
print(revN)
