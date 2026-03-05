n = int(input("Enter number of elements: "))
x = []  
for i in range(n):
    x.append(int(input("Enter element: ")))

for j in range(len(x)-1):
    m=j
    for i in range(j+1,len(x)):
        if x[m]>x[i]:
            m=i
    x[j],x[m]=x[m],x[j]
print(x)