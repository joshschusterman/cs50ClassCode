def get_positive_int():
    while True:
        n = int(input("PositiveInteger: "))
        if n > 0:
            break
    print(n)

get_positive_int()