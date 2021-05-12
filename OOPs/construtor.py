class Employee:
    company = "Google"

    def __init__(self,name,salary,subunit):
        self.name = name
        self.salary = salary
        self.subunit = subunit
        print("Employee is created!")
    
    def getDetail(self):
        print(f"The name of the Employee is {self.name} ")
        print(f"The salary of the Employee is {self.salary} ")
        print(f"The subunit of the Employee is {self.subunit} ")


    def getsalary(self):
        print(
            f"salary for this employee working in {self.company} is {self.salary}")

    @staticmethod
    def greet():
        print("GOod morning Sir")

    @staticmethod
    def time():
        print("The time is 9AM in the morning")


Akash = Employee("Akash",100,"YouTube")
Akash.getDetail()