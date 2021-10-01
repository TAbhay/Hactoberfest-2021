class train:
    List =[]
    def __init__(self,name,fare,seats):
        self.name= name
        self.fare=fare
        self.seats= seats
        for i in range(1,self.seats+1):
           self.List.append(i)

    def getStatus(self):
        print("*******************")
        print(f"The name of the train is: {self.name} \nThe seats available in the train is: {self.seats} ")
        print("*******************")
    def fareInfo(self):
        print(f"The price of the ticket is: Rs.{self.fare}")

    def booktickets(self,seatNumber):
        for item in self.List:
            if(item== int(seatNumber)):
                print(f"Your Ticket has been booked for the Seat Number {seatNumber} in {self.name}")
                self.seats=self.seats-1
                self.List.remove(item)
                print(self.List)
                break

        else:
            print(f"Your ticket for this {seatNumber} seat Number has already been booked . Kindly try another seat")


    def cancelTicket(self,seatNumber):

        for item in self.List:
            if item==int(seatNumber):
                print(f"Your Ticket Has already been cancelled for the Seat Number {item}")
                print(self.List)
                break
        else:
            print(f"Your Ticket is cancelled for the Seat Number: {seatNumber}")
            self.List.append(int(seatNumber))
            self.seats=self.seats+1



Rajdhani_Express = train("Rajdhani Express",90, 300)
Rajdhani_Express.getStatus()
Rajdhani_Express.booktickets(230)
Rajdhani_Express.cancelTicket(230)
Rajdhani_Express.booktickets(230)

Rajdhani_Express.getStatus()


