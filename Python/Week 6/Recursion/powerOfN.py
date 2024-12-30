def powerOfN(n,m):
    if(m==0):
        return 1;
    return n* powerOfN(n,m-1)

print(powerOfN(5,2))
