a=input('enter the array with space between the array\n')
bubble=a.split()
length=len(bubble)
flag=0
for i in range(length):
    bubble[i]=int(bubble[i])
while(1):
    for i in range(length-1):
        if(bubble[i]>bubble[i+1]):
            temp=bubble[i]
            bubble[i]=bubble[i+1]
            bubble[i+1]=temp
            flag=1
    if(flag==0):
        break
    flag=0
print(bubble)

    

    