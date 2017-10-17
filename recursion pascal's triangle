def get_rec(n):
    if n == 1:
        print(1)
        print("\n")
        return [1]
    elif n == 2:
        print("{} {}".format(1,1))
        print("\n")
        return [1,2]
    else:
        ff = get_rec(n-1)
        lis = [1]
        for i in range(1,len(ff)):
            lis.append(ff[i-1]+ff[i])
        lis.append(1)
        strings = " ".join(str(s1) for s1 in lis)
        print strings
        return lis
