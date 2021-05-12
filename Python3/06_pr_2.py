sub1 = int(input("Enter first subject marks\n"))
sub2 = int(input("Enter second subject marks\n"))
sub3 = int(input("Enter third subject marks\n"))
# sub4 = int(input("Enter fourth subject marks\n"))

if (sub1<33 or sub2<33 or sub3<33):
    print("You are fail")
elif(sub1+sub2+sub3)/3 <40:
    print("You are fail due to less total precentage less than 40")
else:
    print("congatulations! you passed the exam")
 

