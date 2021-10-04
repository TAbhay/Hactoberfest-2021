"""
Program to print wave pattern in terminal screen

  * *     * *     * *     * *     * *     * *    
 *   *   *   *   *   *   *   *   *   *   *   *   
 *   *   *   *   *   *   *   *   *   *   *   *   
 *   *   *   *   *   *   *   *   *   *   *   *   
*     * *     * *     * *     * *     * *     * *

"""

def printSinWave(
    wave_h: int, 
    wave_l: int
    ):
 
    # Inner space and outer space.
    ins = 1
    os = 2
 
    # Loop for height of wave
    for i in range(1, wave_h + 1):
 
        # Loop for wave length
        for j in range(1, wave_l + 1):
 
            # Intermediate spaces
            for k in range(1, os + 1):
                print(end = " ")
             
            # put any symbol
            print("*", end = "")
 
            for k in range(1, ins + 1):
                print(end = " ")        
 
            # put any symbol
            print("*", end = "")
 
            for k in range(1, os + 1):
                print(end = " ")
             
            print(end = " ")
         
        # set a value of os to 1 if i+1 is not
        # equal to wave height or 0 otherwinse
        if (i + 1 != wave_h):
            os = 1
        else:
            os = 0
             
        # set value of ins to 3 if i+1 is not
        # equal to wave height or 5 otherwise
        if (i + 1 != wave_h):
            ins = 3
        else:
            ins = 5
        print()
 
if __name__ == "__main__":
    wave_h, wave_l = 5, 10
    printSinWave(wave_h, wave_l)