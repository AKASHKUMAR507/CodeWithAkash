class Sample:
    a = "Akash"
    def __init__(self,name):
        self.name = name


obj = Sample("Akash")
obj.a = "Vicky"
print(Sample.a)
print(obj.a)