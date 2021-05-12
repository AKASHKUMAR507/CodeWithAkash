class Sample:
    a = "Akash"

obj = Sample()
obj.a = "Kanhaiya"
Sample.a = "Kumar"

print(Sample.a)
print(obj.a)
