y = ord("A")
print(y)

a,b,c = int(input("Enter three number to check greatest amongst all:")).split()

if a > b and a > c:
  print("%d is the greatest" %a)

elif b > a and b > c:
  print("%d is the greatest" %b)

else:
  print("%d is the greatest" %c)
