"""Demonstrating read() and readlines()"""

    # Using read()
    # Open the file and associate with a file object
infile = open("input.txt")

    # Read the contents of the file into a string
str1 = infile.read()

    # Print str1
print("Result of using read():")
print(str1)

    # Always close the file once done using the file
infile.close()
    
    # Using read()
    # Open the file and associate with a file object
infile2 = open("input.txt")

    # Read the contents of the file into a string list
str_list = infile2.readlines()

    # Printing the third item in the string list.
print("Result of using readlines() and printing the third item in the string list:")
print(str_list[2])
print(str_list[3])

    # Always close the file once done using the file
infile2.close()
