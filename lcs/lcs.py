#!/usr/bin/python3
#// longest common sequences to find the gene sequence
#//


def lcs(s1, s2):
    m = len(s1)+1
    n = len(s2)+1
    opt = [[0]*n for i in range(m)]
    for i in range(1, m):
        for j in range(1, n):
            if(s1[i-1]==s2[j-1]):
                opt[i][j]=1+opt[i-1][j-1]
            else:
                opt[i][j]=max(opt[i-1][j], opt[i][j-1])

    return opt[m-1][n-1];

def main(): 
    s1="gtactcatg";
    s2="agtcatag";
    print(s1)
    print(s2)
    print(lcs(s1, s2))

if __name__ == "__main__":
    main()

