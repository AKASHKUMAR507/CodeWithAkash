class Employee:
    company = "Google"

Akash = Employee()
Ankita = Employee()
Akash.salary = 300
Ankita.salary = 9203

print(Akash.company)
print(Ankita.company)

Employee.company = "YouTube"
print(Akash.company)
print(Ankita.company)

print(Akash.salary)
print(Ankita.salary)

