n = 9
count = 0
for i in range(2, n ):
    if n % i == 0:
        count = 1
if count == 1:
    print("Not Prime")
else:
    print("Prime")
