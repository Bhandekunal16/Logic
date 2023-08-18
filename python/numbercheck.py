class person :
      def __init__(self, number) :
        self.number=number
     
      def giveMeNumber(self,pattern):
            number = len(self.number)
            if number == pattern :
              print(f"this is my number {self.number}")
            elif number == 9:
              print("one number is missing")
            elif number == 8:
              print("two number is missing")
            elif number == 7:
              print("three number is missing")
            elif number == 6:
              print("four number is missing")
            elif number == 5:
              print("five number is missing")
            elif number == 4:
              print("six number is missing")
            elif number == 3:
              print("seven number is missing")
            elif number == 2:
              print("eight number is missing")
            elif number == 1:
              print("nine number is missing")
            else :
              print("this is not perfect number")
number= person (str(input()))
number.giveMeNumber(10)