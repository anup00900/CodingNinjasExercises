# Problem: Remove x from string
def removeX(string): 
    l=string.split('x')
    r=""
    for i in l:
        r=r+i
    return r
# Main
string = input()
print(removeX(string))
