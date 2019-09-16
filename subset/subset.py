#!/usr/bin/python3

def subset(arr, s):
    Opt=[[0]*(s+1) for i in range(len(arr))]
    for i in range(len(arr)):
        Opt[i][0]=1
    for j in range(1, s+1):
        Opt[0][j]= int(j==arr[0]) 

    for i in range(1, len(arr)):
        for j in range(1, s+1):
            if(j < arr[i]):
                Opt[i][j] = Opt[i-1][j] 
            else:
                Opt[i][j] = Opt[i-1][j] + Opt[i-1][j-arr[i]] 

    return Opt[len(arr)-1][s]!=0;

def main(): 
    arr = [4,2,5,6]
    print(arr)
    for i in range(3, 18):
        print("sum={}:{}".format(i,subset(arr, i)))

if __name__=="__main__":
    main()
