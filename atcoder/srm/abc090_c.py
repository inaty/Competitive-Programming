if __name__ == '__main__':
    n, m = map(int,input().split())

    if n == 1 and m == 1:
        print(1)
    elif n == 1 and m != 1:
        print(max(0, m - 2))
    elif n != 1 and m == 1:
        print(max(0, n - 2))
    if n >= 2 and m >= 2:
        print((n-2)*(m-2))
