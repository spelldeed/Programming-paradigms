def type_case():
    x=input('input: ')
    for i in x:
        if(i.isdigit()):
            print(str(i)+' is digit')
        elif(i.islower()):
            print(str(i)+' is char and lowercase')
        elif(i.isupper()):  
            print(str(i)+' is char and uppercase')
        else:
            print('INVALID RESPONSE')


def fact(b):
    if(b==1):
       return(b)
    else:
        return(b*fact(b-1))

def largest_fact():
    print('enter three numbers')
    lst=list(map(int,input().split()))
    lst.sort(reverse=True)
    print(lst[0])
    print('enter number for factorial')
    b=int(input())
    print(fact(b))

def dec_to_bin():
    print('enter number(base 10)')
    a=int(input())
    lst=list()
    while(a!=0):
        lst.append(a%2)
        a=a//2
    lst.reverse()
    for i in lst:
        print(i,end="")

def odd():
    sum=0
    count=0
    print('start entering numbers , if u want to stop enter -1')
    lst=list(map(int,input().split()))
    i=0
    while(lst[i]!=-1):
        if(lst[i]%2!=0)and(lst[i]>0):
            sum=sum+lst[i]
            count=count+1
        i=i+1
    print('sum = '+str(sum))
    print('count = '+str(count))
    print('average = '+str((sum)/(count)))

def power_2():
    print('enter the number')
    n=int(input())
    if((n!=0)and((n&(n-1))==0)):
        print('power of 2')
    else:
        print('not a power of 2')
      

print('enter :\n1 to check the case and datatype of input\n2 to get largest number and factorial\n3 to convert a decimal number into binary\n4 to get count, sum ,average of odd numbers entered by the user\n5 to test if the given number is power of 2')
ans=1
while(ans!=0):
    print('enter your choice')
    ch=int(input())
    if ch==1:
        type_case()
    elif ch==2:
        largest_fact()
    elif ch==3:
        dec_to_bin()
    elif ch==4:
        odd()
    elif ch==5:
        power_2()
    else:
          print('invalid response')
    print('enter :1 to continue or 0 to exit')
    ans=int(input())
    
