@classmethod
def find_by_account_no(cls, accountNo):
        for account in cls.arr:
            if account["accountNo"] == accountNo:
                return account
        return None

def update_balance(self, new_balance):
        for account in self.arr:
            if account["accountNo"] == self.accountNo:
                account["balance"] = new_balance
                account_no_to_update = 23
                new_balance = 2500
                account_to_update = BankAccount.find_by_account_no(23)
                if account_to_update:
                                      account_to_update.update_balance(new_balance)
                                      print("Balance updated successfully!")
                else:
                      print("Account not found.")

# Print the updated array
print(BankAccount.arr) 