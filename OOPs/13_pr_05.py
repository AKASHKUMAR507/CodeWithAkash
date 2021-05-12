class Train:
    def __init__(self,name,fare,seats):
        self.name = name
        self.fare = fare
        self.seats = seats

    def getStatus(self):
        print(f"The name of the train is {self.name}")
        print(f"The seats avaible in the train are {self.seats}")

    def fareInfo(self):
        print(f"the price of the ticket is :{self.fare}")

    def bookTicket(self):
        if(self.seats>0):
            print(f"Your ticket has been booked! seat number is {self.seats}")
            self.seats = self.seats - 1
        else:
            print("Seats is not avaible")

intercity = Train("Intercity Express:1389",90,3)
intercity.getStatus()
intercity.fareInfo()
intercity.bookTicket()
intercity.bookTicket()
intercity.bookTicket()
intercity.bookTicket()
intercity.getStatus()



