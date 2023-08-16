class BankAccount(): 
    arr = []

    def __init__(self, name, accountNo, balance, mobileNo):
        self.name = name
        self.accountNo = accountNo  
        self.balance = balance      
        self.mobileNo = mobileNo
 
    def accountOpening(self):
        self.arr.append({"name": self.name, "accountNo": self.accountNo, "balance": self.balance, "mobileNo": self.mobileNo})
        return self.arr

cus1 = BankAccount("Kunal", 23, 2000, 8779143048)
cus1.accountOpening()
cus2 = BankAccount("vishal", 24, 2000, 8779143048)

def get():
    return cus2.accountOpening()

print(get())
