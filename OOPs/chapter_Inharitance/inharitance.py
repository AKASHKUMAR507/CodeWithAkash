class Employee:
    compnay = "Google"

    def showDetail(self):
        print("This is an employee")

class coder(Employee):
    language = "Python"

    def getLnaguage(self):
        print(f"The language is {self.language}")

e = Employee()
e.showDetail()
p = coder()
p.showDetail()
