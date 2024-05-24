id=int(input("enter id"))
n = list(range(1,25))
internid = []
pos = -1
for i in n:
    j = 1
    while j <= i:
        if j == 1:
            internid.append(5000*i)
        else:
            internid.append(internid[j-1]+5000+(j-1))
        pos += 1
        
        if id == internid[pos]:
            print(f'Intern {i}')
            print(f'Day {j}')
            
        j += 1
        
    i += 1















