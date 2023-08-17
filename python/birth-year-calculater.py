import datetime 
birthYear= float(input("give me value for 1 number :"))
now = datetime.datetime.now().year
year= now - birthYear
print(year)