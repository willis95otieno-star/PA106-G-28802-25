#NAME: WILLLIS OTIENO
#ADM NO:PA106/G/28802/25
'''A BANK PROGRAME THAT WILL DETERMINE WHETHER CUSTOMER 
HAS QUALIFIED FOR LOAN UNDER THE FOLLOWING CRITERIA;
21 YEARS AND ABOVE,ANNUAL INCOME(A_I) ABOVE AT LEAST 21000
BY ACCEPTING AGE AND INCOME AS USERFRIENDLY PROMPTS'''


print("\nplease fill the fields below: \n")
NAME=input("name: ")
AGE=int(input("age: "))
A_I=int(input("annual income: "))

print("\n--------the bank customer----------\n")
print("name",NAME)
print("age",AGE)
print("annual income",A_I)

if AGE > 20 and A_I >= 21000:
    print("\ncongratulation you've qualified for loan.Thank you.")
else:
    print("\nunfortunately,we are unable to offer you loan at this time.Thank you.")
