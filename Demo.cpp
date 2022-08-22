a=[1,2,3,3,3,3,5,7,43]
val=int(input("Enter value "))
l=[]
for i in range(len(a)):
    if val==a[i]:
        l.append(i)
print("First Occurance",min(l))
print("Last occurance",max(l))



a=input("Enter the string ")
count=0
for i in range(len(a)):
    if a[i].isdigit():
        count+=1
        break
if count==1:
    print("It contains numeric value")
else:
    print("It doesn't contain numeric value")


#prepinsta

a=[11,43,56,2,548,347,856]
print(min(a),max(a))
a="fgrtyefw"
print(min(a),max(a))


a=[11,365,235,237,327,376,9283]
a.sort()
print(a[0])
print(a[-1])
print(a[1])



a=[54,78,32,564,897,321]
sum=0
for i in a:
    sum+=i
print(sum)

a=[54,2,5,46,354,986,243,54,86,44]
a.sort(reverse=True)
print(a)


a=[354,47,3,37,873,543,76,56,78,4,43]
if len(a)%2==0:
    l=len(a)//2
else:
    l = len(a) // 2+1
l1=a[:l]
l2=a[l:]
l1.sort()
l2.sort(reverse=True)
new=l1+l2
print(new)



l=[1,2,3,3,4,5,2,1,6,4,7,8]
dic={}
for i in l:
    if i in dic:
        dic[i]+=1
    else:
        dic[i]=1
for key,value in dic.items():
    print(key,"=",value)
    
    
l=[1,8,7,2,3,3,4,5,2,1,6,8,4,8]
l.sort()
a=sorted(l,key=lambda i:l.index(i))
b=sorted(a,key=lambda i:a.count(i),reverse=True)
print(b)


l=["ghht","123321","adfgfda","123dfd321","fgriiu"]
new=[]
for i in l:
    if i==i[::-1]:
        new.append(i)
new.sort(key=len,reverse=True)
print(new[0])



a=[1,8,3,4,9,7,2,3,8,6,5,4,2,1]
dic={}
for i in a:
    if i in dic:
        dic[i] += 1
    else:
        dic[i] = 1
count1=0
print("Non-repeating elements: ",end="")
for key,value in dic.items():
    if value==1:
        count1+=1
        print(key,end=" ")
print("\nDistinct elements = ",count1)
print("Rpeating elements: ",end="")
count2=0
for key,value in dic.items():
    if value>1:
        count2 += 1
        print(key,end=" ")
print("\nRpeating elements = ",count2)



def remove_duplicate(list):
    new_list=[]
    for i in list:
        if i in new_list:
            continue
        else:
            new_list.append(i)
    print(new_list)
remove_duplicate([1,8,3,4,9,7,2,3,8,6,5,4,2,1])
        
 
s="ghgytvdrewjlkjnnl"
c=0
for i in s:
    c+=1
print("The length of the string is ",c)     
	    
	  
	  
a="dgnfTREASRV"
print(a.swapcase())

new=str()
for i in a:
    if i.isupper():
        new+=i.lower()
    else:
        new+=i.upper()
print("Toggled String ",new)
        	  

a="j3crybrjbhbubbcewiur"
c1,c2=0,0
for i in a:
    if i in ["a","e","i","o","u"]:
        c1+=1
    else:
        c2+=1
print("Vovels: ",c1)
print("Consonants: ",c2)	  


a="apple"
new=str()
for i in a:
    if i not in ["a","e","i","o","u"]:
        new+=i
print(new)



a="radhar"
i=len(a)
new=str()
while i>=0:
    new+=a[i-1]
    i-=1
if a==new:
    print(a, "is Palindrome")
else:
    print(a, "is not Palindrome")


a="dwcg@#$ctf23456768e798hgdvq"
new=str()
for i in a:
    if i.isalpha():
        new+=i
print(new)


a="i am supreme"
new=str()
for i in a:
    if not i.isspace():
        new+=i
print(new)


a="(s+v)*{s-[w-c]}"
new=str()
for i in a:
    if i not in ["[","]","{","}","(",")"]:
        new+=i
print(new)



a="wd2had26"
sum=0
for i in a:
    if i.isdigit():
        sum+=int(i)
print(sum)




a="i can i will we got it"
l=a.split()
new=str()
for i in l:
    if len(i)!=1:
        new += i[0].upper() + i[1:-1] + i[-1].upper()
    else:
        new += i.upper()
print(new)



a="x4387609-542356swgwbjaneedmlyweakrfj"
dic={}
for i in a:
    if i in dic:
        dic[i]+=1
    else:
        dic[i]=1
print("Value     Frequency")
for key,value in dic.items():
    print(key,"      ",value)



a="x4387609-542356swgwbjaneedmlyweakrfj"
dic={}
for i in a:
    if i in dic:
        dic[i]+=1
    else:
        dic[i]=1
print("Non repeating char: ",end="")
for key,value in dic.items():
    if value==1:
        print(key,end=" ")
print("\nRepeating char: ",end="")
for key,value in dic.items():
    if value>1:
        print(key,end=" ")

# anagram strings: strings having same characters
a="knee"
b="keen"
s1=sorted(a)
s2=sorted(b)
if s1==s2:
    print("String is anagram")
else:
    print("String is not anagram")



a="united kingdom"
print(a.replace("kingdom","states"))




a="asdfgh"
b="as$df%g#h"
new=str()
if a.isalnum():
    for i in b:
        if i.isalnum():
            new+=i
else:
    for i in a:
        if i.isalnum():
            new+=i
if a==new or b==new:
    print("Strings match")
else:
    print("Strings do not match")



# possible sub-sequences in two strings 
a=input("Enter 1st string ")
b=input("Enter 2nd string ")
l1,l2=len(a),len(b)
cnt=[[0 for i in range(l2+1)]for i in range(l1+1)]
print(cnt)
for i in range(1,l1+1):
    for j in range(1,l2+1):
        if a[i-1]==b[j-1]:
            cnt[i][j]=1+cnt[i][j-1]+cnt[i-1][j]
            print("1",cnt[i][j])
        else:
            cnt[i][j]=cnt[i][j-1]+cnt[i-1][j]-cnt[i-1][j-1]
            print("2", cnt[i][j])
print(cnt[l1][l2])



num=int(input("Enter number "))
if num>=0:
    print(num, "is Positive")
else:
    print(num,"is Negative")



num=int(input("Enter number "))
if num%2==0:
    print(num, "even")
else:
    print(num,"is odd")


num=int(input("Enter number "))
sum=0
for i in range(num+1):
    sum+=i
print("Sum is ",sum)



num1=int(input("Enter number "))
num2=int(input("Enter number "))
sum=0
a=max(num1,num2)
b=min(num1,num2)
for i in range(b,a+1):
    sum+=i
print("Sum is ",sum)



num1=int(input("Enter number "))
num2=int(input("Enter number "))
if num1>num2:
    print(num1," Is greatest")
else:
    print(num2, " Is greatest")



num1=int(input("Enter number "))
num2=int(input("Enter number "))
num3=int(input("Enter number "))
if num1>num2:
    if num1>num3:
        print(num1, " Is greatest")
    else:
        print(num3, " Is greatest")
elif num2>num3:
    print(num2, " Is greatest")
else:
    print(num3, " Is greatest")



year=int(input("Enter the year "))
if year%100!=0:
    if year %4 == 0:
        print(year, "is a leap year")
    else:
        print(year, "is not a leap year")
elif year%400==0:
    print(year, "is a leap year")
else:
    print(year, "is not a leap year")


num1=int(input("Enter the number "))
num2=int(input("Enter the number "))
temp=num1
print("Prime Numbers: ",end="")
while temp<=num2:
    cnt=0
    for i in range(1,num2+1):
        if temp%i==0:
            cnt+=1
    if cnt==2:
        print(temp,end=" ")
    temp+=1



num=int(input("Enter the number "))
temp=num
sum=0
while temp>0:
    rem=temp%10
    sum+=rem
    temp//=10
print("Sum of digits is ",sum)



num=int(input("Enter the number "))
temp=num
rev=0
while temp>0:
    rem=temp%10
    rev=rev*10+rem
    temp//=10
print("Reverse of number is ",rev)



num=int(input("Enter the number "))
temp=num
rev=0
while temp>0:
    rem=temp%10
    rev=rev*10+rem
    temp//=10
if num==rev:
    print(num," is Palindrome")
else:
    print(num, " is not Palindrome")


# Armstrong Number: num is equal to the sum of digits in the power of total number of digits
num1=int(input("Enter the number "))
num2=int(input("Enter the number "))
temp=num1
print("The armstrong numbers in range: ",end="")
for num in range(num1,num2+1):
    arm=0
    l=len(str(num))
    temp=num
    while temp>0:
        rem =temp % 10
        arm = arm + (rem ** l)
        temp //= 10
    #print(arm)
    if num == arm:
        print(num,end=" ")



num=int(input("Enter the number "))
a=0
b=1
print("Fibonacci series upto",num,":",a,b,end=" ")
while b<num:
    c=a+b
    a=b
    b=c
    if c<=num:
        print(c,end=" ")
        
        
        
num=int(input("Enter the number "))
a=0
b=1
print("Nth term of a Fibonacci series",num,":",end=" ")
for i in range(2,num):
    c=a+b
    a=b
    b=c
print(c)


num=int(input("Enter the number "))
def factorial(num):
    if num==0:
        return 1
    else:
        return num*factorial(num-1)
print("Factorial of",num,"is",factorial(num))


num=int(input("Enter the number "))
power=int(input("Enter the power "))
print(num,"^",power,"=",num**power)


num=int(input("Enter the number "))
print("Factors of",num,": ",end="")
for i in range(1,num+1):
    if num%i==0:
        print(i,end=" ")



#strong number: 143=1!+4!+3!
num=int(input("Enter the number "))
str=0
temp=num
def factorial(n):
    if n==0:
        return 1
    else:
        return n*factorial(n-1)
while num>0:
    rem=num%10
    str+=factorial(rem)
    num//=10
if temp==str:
    print(temp," is a strong number")
else:
    print(temp, " is not a strong number")



#perfect number: num=sum of other factors
num=int(input("Enter the number "))
sum=0
for i in range(1,num):
    if num%i==0:
        sum+=i
if num==sum:
    print(num,"is a perfect number")
else:
    print(num, "is not a perfect number")



#Abudant number: sum of other factors>num
num=int(input("Enter the number "))
sum=0
for i in range(1,num):
    if num%i==0:
        sum+=i
if sum>num:
    print(num,"is an abudant number")
else:
    print(num, "is not an abudant number")


#Harshad number: 12 => 12%(1+2)==0
num=int(input("Enter the number "))
sum=0
temp=num
while num>0:
    rem=num%10
    sum+=rem
    num//=10
if temp%sum==0:
    print(temp,"is a hurshad number")
else:
    print(temp, "is not a hurshad number")


#Friendly Pair: sum of factors of a//a==sum of factors ofb//b
num1=int(input("Enter the number "))
num2=int(input("Enter the number "))
sum1,sum2=0,0
for i in range(1,num1):
    if num1%i==0:
        sum1+=i
for i in range(1,num2):
    if num2%i==0:
        sum2+=i
if sum1//num1==sum2//num2:
    print(num1,"and",num2,"are friendly pairs")
else:
    print(num1, "and", num2, "are not friendly pairs")


#Automorphic number: the square of the number contains the number in last digits => 625 contains 25 in the end digits
num=int(input("Enter the number "))
temp=num
sqr=num**2
c=0
while num>0:
    if num%10!=sqr%10:
        print(temp,"is not an automorphic number")
        c=1
        break
    num//=10
    sqr//=10
if c==0:
    print(temp, "is an automorphic number")
    


num1= int(input("Enter the number "))
num2= int(input("Enter the number "))
c=1
while c<=num1 and c<=num2:
    if num1%c==0 and num2%c==0:
        gcd=c
    c+=1
lcm=num1*num2//gcd
print(gcd,lcm)


#Pyramid pattern: 1
num=5
for i in range(num):
    for j in range(num-i-1):
        print(" ",end="")
    for j in range(i*2+1):
        print(i+1,end="")
    print()
num=5
for i in range(num):
    if i==0:
        continue
    for j in range(0,i):
        print(" ",end="")
    for j in range(i*2,num*2-1):
        print(num-i,end="")
    print()



#Pyramid Pattern:2
num=int(input("Enter the number "))
a,b=1,num
for i in range(num):
    a=1
    for j in range(num-i-1):
        print(" ",end="")
    for k in range(i*2+1):
        print(a,end="")
        a+=1
    print()
for i in range(num):
    b=1
    if i==0:
        continue
    for j in range(0,i):
        print(" ",end="")
    for k in range(i*2,num*2-1):
        print(b,end="")
        b+=1
    print()



#hollow pyramid
num=int(input("Enter the number "))
for i in range(num):
    if i==num-1:
        print("*"*i*2+"*")
    else:
        for j in range(num-i-1):
            print(" ",end="")
        for k in range(i*2+1):
            if k==0 or k==(i*2):
                print("*",end="")
            else:
                print(" ",end="")
        print()



#Remove duplicates from string
s=input("Enter the string ")
new=str()
a={}
for i in s:
    if i in a:
        a[i]+=1
    else:
        a[i]=1
for key,value in a.items():
    if value>=2:
        continue
    else:
        new+=key
print(new)



#pattern
num=int(input("Enter the number "))
for i in range(num):
    j = 0
    while j<i:
        print(i+1,"*", end="")
        j += 1
    print(i+1)


Enter the number 5
1
2 *2
3 *3 *3
4 *4 *4 *4
5 *5 *5 *5 *5



#binary to decimal
num=int(input("Enter the binary number "))
sum,temp=0,num
base=1
while num:
    rem = num % 10
    sum += rem * base
    base *= 2
    num //= 10
print("Decimal value of {} is {}".format(temp, sum))



#octal to decimal
num=int(input("Enter the octal number "))
sum,temp=0,num
base=1
while num:
    rem = num % 10
    sum += rem * base
    base *= 8
    num //= 10
print("Decimal value of {} is {}".format(temp, sum))



#MEditab INterview question
x=int(input("value of x-coordinate "))
y=int(input("value of y-coordinate "))
k=int(input("vlaue of k "))

a,b=0,0

while a<=x:
    if a==x:
        break
    a+=k

while b <=y:
    if b==y:
        break
    b += k

if a==x and b==y:
    print("Yes")
else:
    print(a,b,"No")




#remove given character from word
a="java"
print("".join(a.split("a")))



#Sorting a list
def sorting(l):
    for i in range(len(l)):
        for j in range(1,len(l)):
            if l[j-1]>l[j]:
                (l[j-1],l[j])=(l[j],l[j-1])
    return l
print(sorting([234,34,87,23,67,43,28,12,98]))



#Bubble Sort
l=[44,32,89,56,87,99,13]
for i in range(len(l)-1):
    for j in range(0,len(l)-1):
        if l[j]>l[j+1]:
            temp=l[j]
            l[j]=l[j+1]
            l[j+1]=temp
    print(l)
















































































        
        












































































































































	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	    
        
        
