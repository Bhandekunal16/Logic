display = input("Enter 1 to perform addition & enter 2 to perform table & enter 3 to perform subtraction & enter 4 to perform multiplication & enter 5 to perform division & enter 6 if you want to find squre & enter 7 if you want to find cube: ")

if display == "1":
    num1 = int(input("Enter your first number: "))
    num2 = int(input("Enter your second number: "))
    result = num1 + num2
    print("This is your addition:", result)

elif display == "3":
    num1 = int(input("Enter your first number: "))
    num2 = int(input("Enter your second number: "))
    result = num1-num2
    print("This is your subtraction:", result)
    
elif display == "4":
    num1 = int(input("Enter your first number: "))
    num2 = int(input("Enter your second number: "))
    result = num1*num2
    print("This is your multiplication:", result)
    
elif display == "5":
    num1 = int(input("Enter your first number: "))
    num2 = int(input("Enter your second number: "))
    result = num1/num2
    print("This is your division:", result)
    
elif display == "6":
    num1 = int(input("Enter your first number: "))
    result = num1*num1
    print("This is your square:", result)
    
elif display == "7":
    num1 = int(input("Enter your first number: "))
    result = num1*num1*num1
    print("This is your cube:", result)
    
elif display == "2":
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
    print("Invalid input. Please enter 1, 2, or 3,4,5 to perform the corresponding operation.")