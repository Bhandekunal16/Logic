class person : 
      def __init__(self,name,age) :
        self.name=name
        self.age= age
      def greater(self,carNo, degree ) :
                    print(f"this is my name {self.name} and age : {self.age} my car no is {carNo} and i am studying in {degree}")
                    print('my name {}  and age is {} i am studying in {}'.format(self.name, self.age, degree))

class car :
  def __init__(self,carNo) :
    self.carNo=carNo

  def getCarNo(self) : 
      return self.carNo

class education :
  def __init__(self, degree) :
      self.degree= degree
  
  def getEducation(self) :
      return self.degree

person_instance = person(str(input("give me the name :")), int(input("give me your age :")))  
vehicle =car(int(input("give me car no :")))
degree = education(str(input("give me your education details :")))
person_instance.greater(vehicle.getCarNo(), degree.getEducation())   