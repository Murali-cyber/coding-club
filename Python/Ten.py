def isValid(s: str) -> bool:
    '''
    enter code here
    '''

# Driver code
if __name__ == "__main__":
    print(isValid("()"))        # Output: True
    print(isValid("()[]{}"))    # Output: True
    print(isValid("(]"))        # Output: False
    print(isValid("([)]"))      # Output: False
    print(isValid("{[]}"))      # Output: True
