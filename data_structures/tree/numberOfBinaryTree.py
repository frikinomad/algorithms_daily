# finding no of unique binary trees: https://leetcode.com/problems/unique-binary-search-trees/submissions/
# using formulae for catalan numbers

x = int(input("Enter a number to find binary trees: "))


def factorial(x):
    fact=1
    for i in range(1,x+1):
        fact=fact*i
    return fact


def numberOfBinaryTree(x):
    return ((factorial(2*x))/((factorial(x+1))*factorial(x)))   #formulae for catalan numbers - google it


print(numberOfBinaryTree(x)) 
    