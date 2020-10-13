A = [10, 16, 8, 12, 15, 6, 3, 9, 5]

def partition(l,h):
    pivot = A[l]
    i = l
    j = h
    while (i < j):
        while (A[i] <= pivot):
            i += 1
        while (A[j] > pivot):
            j -= 1
        if (i < j):
            A[i], A[j] = A[j], A[i]
    A[l], A[j] = A[j], A[l]
    return j

def quicksort(l,h):
    if (l < h):
        j = partition(l, h)
        quicksort(l, j)
        quicksort(j+1, h)

print("Input list: ", A)
quicksort(0, len(A) - 1)
print("Sorted list: ", A)