def modify_matrix(matrix):
    '''
    Enter Code here
    '''

# Main function
def main():
    # Define the matrix inbuilt
    matrix = [
        [49, 16, 50, 47, 28, 50],
        [43, 44, 12, 32, 37, 12],
        [33, 26, 37, 48, 25, 37],
        [31, 48, 41, 19, 16, 16]
    ]

    # Modify the matrix
    modified_matrix = modify_matrix(matrix)

    # Print the modified matrix
    print("Modified Matrix:")
    for row in matrix:
        print(' '.join(map(str, row)))


# Execute the main function
if __name__ == "__main__":
    main()
