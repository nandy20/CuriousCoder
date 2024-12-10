n = 3533
// We are copying n because n is going to be manipulated to find each digit in it so at the end it will become 0.
x = n
revNum = 0
while n > 0:
    lastDigit = n % 10
    revNum = (revNum * 10) + lastDigit
    n = n // 10
if revNum == x:
    print("Palindrome")
else:
    print("Not Palindrome")
