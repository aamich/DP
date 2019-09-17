#!/usr/bin/python3

def lis(v):
    opt=[1]*len(v)
    for i in range(1, len(v)):
        for j in range(i):
            if(v[j] <= v[i]):
                opt[i] = 1+opt[j]

    return max(opt)

def main():
    v = [-1, 3, 4, 5, 2, 2, 2, 2]
    print(v)
    print(lis(v))

if __name__ == "__main__":
    main()
