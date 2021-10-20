L = [2,5,8]
R = [3,20,56]
merged_array = [None]*(len(L)+len(R))

L.append(999999999)
R.append(999999999)
i = 0
j = 0
for k in range(len(merged_array)):
    if(L[i] <= R[j]):
        merged_array[k] =  L[i]
        i+=1
    else:
        merged_array[k] = R[j]
        j+=1
print(merged_array)