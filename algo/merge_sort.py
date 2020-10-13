A = [10, 16, 8, 12, 15, 6, 3, 9, 5]

def mergeSort(arr):
    # base case
    if (len(arr) == 1):
        return arr
    
    # divide - split the arrays until there is only one element.
    mid = int(len(arr)/2)
    L = arr[:mid]
    R = arr[mid:]
    mergeSort(L)
    mergeSort(R)
    
    # conquer - compare element across sub-arrays then merge them.
    i = j = k = 0
    while ((i < len(L)) and (j < len(R))):
        if (L[i] < R[j]):
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1
    while (i < len(L)):
        arr[k] = L[i]
        i += 1
        k += 1
    while (j < len(R)):
        arr[k] = R[j]
        j += 1
        k += 1
    return arr


print("Input list: ", A)
print("Sorted list: ", mergeSort(A))