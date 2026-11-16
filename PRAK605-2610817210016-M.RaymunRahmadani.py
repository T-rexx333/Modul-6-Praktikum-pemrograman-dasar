ordo = int(input())

# baca matriks A
input()
A = []
for i in range(ordo):
    A.append(list(map(int, input().split())))

# baca matriks B
input()
B = []
for i in range(ordo):
    B.append(list(map(int, input().split())))

# siapkan hasil berisi 0
hasil = [[0] * ordo for i in range(ordo)]

# hitung A x B
for i in range(ordo):
    for j in range(ordo):
        for k in range(ordo):
            hasil[i][j] += A[i][k] * B[k][j]

# cetak
print("Matriks AXB")
for i in range(ordo):
    for j in range(ordo):
        print(hasil[i][j], end=" ")
    print()