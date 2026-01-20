class ParkedVehicle:
    def __init__(self,vehicleSeq,fourWheeler,parkedFor,valetParking):
        self.vehicleSeq=vehicleSeq
        self.fourWheeler=fourWheeler
        self.parkedFor=parkedFor
        self.valetParking=valetParking
        self.parkedStatus="Parked"

class ParkingLot:
    def __init__(self,parkd_vehicles):
        self.parkd_vehicles=parkd_vehicles

    def updateParkedStatus(self,lot_number):
        if lot_number in self.parkd_vehicles.keys():
            self.parkd_vehicles[lot_number].parkedStatus="Cleared"
            status=(lot_number,"Cleared")
            return(status) #Display the Lot number and status (returned by this function) in the main function

        else:
            return None #return None to the main function and accordingly display "Lot Number Invalid" in main function

    def getParkingCharges(self,lot_number):
        if lot_number in self.parkd_vehicles.keys():
            charges=0
            if self.parkd_vehicles[lot_number].fourWheeler=="Yes":
                charges=charges+self.parkd_vehicles[lot_number].parkedFor*50
            else:
                charges=charges+self.parkd_vehicles[lot_number].parkedFor*30
            
            if self.parkd_vehicles[lot_number].valetParking=="Yes":
                charges=charges+10
            return charges

        else:
            return None



if __name__ == "__main__":
    n=int(input("Total number of parked vehicle:"))
    vehicleDict={}
    for i in range(n):
        vehicleSeq=int(input(f"sequence of {i+1} no of vehicle: "))
        fourWheeler=input("vehicle is four wheeler or not: ")
        parkedFor=float(input("parking time in hours: "))
        valetParking=input("Is it a valet parking or not: ")
        lot_number=int(input("lot number: "))
        vehicle=ParkedVehicle(vehicleSeq,fourWheeler,parkedFor,valetParking)
        vehicleDict[lot_number]=vehicle
    
    parking=ParkingLot(vehicleDict)
    lot_number=int(input("Enter the lot number to know the information: "))
    status=parking.updateParkedStatus(lot_number)
    charges=parking.getParkingCharges(lot_number)

    if status==None or charges==None:
        print("Lot Number Invalid")
    else:
        print(status[0],status[1])
        print(charges)