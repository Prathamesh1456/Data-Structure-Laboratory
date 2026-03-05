n = int(input("Enter number of elements: "))
x = []  
for a in range (n):
    x.append(int(input("Enter element: ")))
    for j in range (len(x)-1):
        for i in range (len(x)-1-j):
            if x[i]>x[i+1]:
                x[i],x[i+1]=x[i+1],x[i]

print(x)
