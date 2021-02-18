import math

def calc():
   print('For scientific calculator the numbers are assumed to be in degrees')
   print('enter 2 numbers')
   a=int(input())
   b=int(input())
   print('Addition : '+str(a+b))
   print('Subtraction : '+str(a-b))
   print('Multiplication : '+str(a*b))
   print('Division(decimal) : '+str(a/b))
   print('Division(integer) : '+(str(a//b)))
   print('sin(a) = '+str(math.sin(math.radians(a))))
   print('sin(b) = '+str(math.sin(math.radians(b))))
   print('cos(a) = '+str(math.cos(math.radians(a))))
   print('cos(b) = '+str(math.cos(math.radians(b))))
   print('tan(a) = '+str(math.tan(math.radians(a))))
   print('tan(b) = '+str(math.tan(math.radians(b))))

def rev():
   print('enter a positive integer')
   n=input()
   for i in range(len(n)-1,-1,-1):
       print(n[i],end="")
   print('\n')

def month(ch):
  sw_ch={
         1:'January',
         2:'February',
         3:'March',
         4:'April',
         5:'May',
         6:'June',
         7:'July',
         8:'August',
         9:'September',
         10:'October',
         11:'November',
         12:'December'
        }
  return sw_ch.get(ch,'invalid argument')

def is_prime():
    print('enter a positive integer')
    n=int(input())
    if(n==1):
        print('neither a prime nor a composite number')
        return(False)
    elif(n%2!=0):
       for i in range(3,n//2+1,2):
           if(n%i==0):
             return(False)
       return(True)
    else:
       return(False)

def st():
    print('enter 3 numbers')
    k=list(map(int,input().strip().split()))
    if (k[1]-k[0]>0 and k[2]-k[1]>0):
       print('True')
    else:
       print('False')
       k.sort()
       for i in k:
         print(i,end=" ")

print('enter :\n1 for calculator\n2 to get reverse for entered integer number\n3 to know whether entered number is prime or not\n4 to check if entered numbers are sorted or not\n5 for getting month of the year')
ans=1
while(ans!=0):
   print('enter your choice')
   c=int(input())
   if c==1:
     calc()
   elif c==2:
     rev()
   elif c==3:
     print('True if prime else False')
     t=is_prime()
     print(t)
   elif c==4:
     st()
   elif c==5:
     print('enter the number')
     ch=int(input())
     print(month(ch))
   else :
     print('invalid argument')
   print('Enter :\n1 to continue or 0 to exit')
   ans=int(input())

   





