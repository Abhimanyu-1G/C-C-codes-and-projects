'''Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

Note:  is considered to be an even index.'''
# Enter your code here. Read input from STDIN. Print output to STDOUT
T= int(input())
while (T>0):
    S= input()
    print(S[0::2],S[1::2])
    T-=1
    
