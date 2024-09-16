def bubble_sort_decrescente(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] < arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

# Exemplo de uso
array = [5, 1, 4, 2, 8]
print("Array original:", array)
array_ordenado = bubble_sort_decrescente(array)
print("Array ordenado em ordem decrescente:", array_ordenado)

