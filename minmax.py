# cook your dish here
T = int(input())
while (T > 0):
    A, B, C = map(int, input().split())
    maximum = max(A, B, C)
    minimum = min(A, B, C)
    a = maximum - minimum
    print(a)
    
    T = T - 1