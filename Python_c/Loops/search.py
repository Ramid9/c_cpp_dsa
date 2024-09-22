tup = (1,2,3,4,5,6,7,8,9)
x = int(input("enter the target "))
i=0
while i<=len(tup)-1 :
    if(tup[i]==x):
        print("found at index", i)
        break
    i += 1
if(i==len(tup)):
    print("NOT FOUND")