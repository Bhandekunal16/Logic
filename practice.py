display = input("Enter 1 to perform addition: ")

if display == "1":
    num1 = int(input("Enter your first number: "))
    num2 = int(input("Enter your second number: "))
    result = num1 + num2
    print("This is your addition:", result)

if display == "2":
    num1 = int(input("Enter your second number: "))
    result1=num1*1
    result2=num1*2
    result3=num1*3
    result4=num1*4
    result5=num1*5
    result6=num1*6
    result7=num1*7
    result8=num1*8
    result9=num1*9
    result10=num1*10
    print("This is your addition:", result1,result2,result3,result4,result5,result6,result7,result8,result9,result10)
else:
    print("Invalid input. Please enter 1 to perform addition.")
