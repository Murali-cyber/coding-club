def removeNthElement(lst, n):
    '''
    ENTER CODE HERE
    '''

# Driver code
if __name__ == "__main__":
    list1 = [1, 2, 3, 4, 5]
    n1 = 3
    print(removeNthElement(list1, n1))  # Output: [1, 2, 3, 5]

    list2 = [1]
    n2 = 0
    print(removeNthElement(list2, n2))  # Output: []

    list3 = [1, 2]
    n3 = 1
    print(removeNthElement(list3, n3))  # Output: [1]
