#!/usr/bin/python3

def stealMost(arr, n):
    Opt = [0]*len(arr)
    Opt[0] = arr[0];
    Opt[1] = arr[1];
    for i in range(2, n):
        Opt[i] = max(arr[i] + Opt[i-2], Opt[i-1])

    return Opt[n-1]

def main():
    arr = [1, 2, 4, 1, 7, 8, 3]
    print(stealMost(arr, 4))
    print(stealMost(arr, 5))
    print(stealMost(arr, 6))
    print(stealMost(arr, 7))

if __name__ == "__main__":
    main()

