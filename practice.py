display = input("Enter 1 to perform addition: ")

if display == "1":
    num1 = int(input("Enter your first number: "))
    num2 = int(input("Enter your second number: "))
    result = num1 + num2
    print("This is your addition:", result)
else:
    print("Invalid input. Please enter 1 to perform addition.")
