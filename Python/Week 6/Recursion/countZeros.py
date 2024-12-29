def countzero(n):
    if(n%10==n):
       if(n%10==0):
           return 1
       else:
           return 0
    if(n%10==0):
        return 1+countzero(n//10)
    else:
        return countzero(n//10)

print(countzero(304050))
