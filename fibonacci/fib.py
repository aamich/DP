#!/usr/bin/python3


def fib(n):
    vals=[0]*(n+1)
    vals[1]=1
    if(n < 2):
        return vals[n]
    for i in range(2, n+1): 
        vals[i]=vals[i-1]+vals[i-2]
    return vals[n]
        
def main(): 
    for i in range(2, 45):
        print("{}:{}".format(i,fib(i)))

if __name__=="__main__":
    main()

