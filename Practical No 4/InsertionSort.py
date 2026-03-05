n = int(input("Enter number of elements: "))
x=[]
for b in range(n):
    x.append(int(input("Enter element: ")))
    for i in range(1,len(x)):
        j=i
        while j>0:
            if x[j-1]>x[j]:
                x[j-1],x[j]=x[j],x[j-1]
            else:
                break
            j=j-1
print(x)

