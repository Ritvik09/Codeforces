for _ in range(int(input())):
               n = int(input())
               c = 0
               while(n>=2):
                   h = (-1+(24*n+1)**0.5)//6
                   p = h*(3*h+1)/2
                   c += 1
                   n -= p
               print(c)
