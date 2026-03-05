n = int(input("Enter number of elements: "))
x = []
for i in range(n):
    x.append(int(input("Enter element: ")))
print("Elements before sorting: ",x)

while True:
    print("/n Mennnu")
    print("1. Bubble Sort")
    print("2. selection Sort")
    print("3. Insertion Sort")
    print("4. Exit")
    choise=int(input("Enter choise you want to perform: "))
    match choise:
        case 1:
            for j in range (len(x)-1):
                for i in range (len(x)-1-j):
                    if x[i]>x[i+1]:
                        x[i],x[i+1]=x[i+1],x[i]

            print(x)
        case 2:
            for j in range(len(x)-1):
                m=j
                for i in range(j+1,len(x)):
                    if x[m]>x[i]:
                        m=i
                x[j],x[m]=x[m],x[j]
            print(x)
        case 3:
            for i in range(1,len(x)):
                j=i
            while j>0:
                if x[j-1]>x[j]:
                    x[j-1],x[j]=x[j],x[j-1]
                else:
                    break
                j=j-1
            print(x)
        
        case 4:
            exit(0)
