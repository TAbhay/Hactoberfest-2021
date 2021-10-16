# -*- coding: utf-8 -*-
"""
Created on Tue Oct  8 13:12:18 2019

@author: Suyash
"""
def Moment_of_force():
#qs1,qs2,qs3 for simple force qs1=0 then qs2 will run else qs3 will run
# (m for magnitude) and (M for moment) and (Ch=Choice)

    import math
    
#    sum_Fx=0    #initialization             
#    sum_Fy=0    #initialization
    angle=0     #initialization
    M1=0        #initialization
#    M2x=0       #initialization
    M2y=0       #initialization
    C3=0        #initialization
    M4=0        #initialization
    M5=0        #initialization
    M6=0        #initialization
    M7=0        #initialization
    MF=0        #initialization
    MF1=0       #initialization
    MF2=0       #initialization
    MF3=0       #initialization
    MF4=0       #initialization
    MF5=0       #initialization
    MF6=0       #initialization
    MF7=0       #initialization
    
#    cos=math.cos    #assigning for simplification
    sin=math.sin    #assigning for simplification
    pi=math.pi      #assigning for simplification
    
    QS1=int(input("Please enter the total number of elements in the force system: "))
    print("\nPlease enter the following numerals for the forces or moment as follows: ")
    print("\n1=Simple force \t\t\t\t2=Inclined force \n3=Couple \t\t\t\t4=Rectangular Lamina\n5=Uniformly Distributed Load \t\t6=Triangular lamina(UVL) \n7=Trapezoidal Lamina(UVL)")
    
    
    for i in range(0,QS1):
        Ch=int(input("Please enter choice from the given numerals of your chosen corresponding element: "))
        
    #1. SIMPLE FORCE
    
        if Ch==1:
            m1=float(input("Please enter the magnitude in newton: "))
            D1=float(input("Please enter the distance: "))
            Q1=int(input("Please enter 0 if force is horizontal and 1 if Vertical: "))
            if Q1==0:
                Q11=int(input("Please enter 0 if force is in right direction and 1 if left: "))
            else:
                Q12=int(input("Please enter 0 if force is in up direction and 1 if down: "))
            
                if Q1==0 and Q11==0:
                    F1=m1*1        
                elif Q1==0 and Q11==1:
                    F1=m1*(-1)
                elif Q1==1 and Q12==0:
                    F1=m1*1
                elif Q1==1 and Q12==1:
                    F1=m1*(-1)
                M1=F1*D1    
                cra=int(input("Check and answer 0 if force is Clockwise and 1 if Anticlockwise: "))
                if M1>0 and cra==0:
                    M1=M1*1
                elif M1<0 and cra==0:
                    M1=M1*(-1)
                elif M1>0  and cra==1:
                    M1=M1*(-1)
                elif M1<0  and cra==1:
                    M1=M1*1
                MF1=MF1+M1
                print(MF1)    
                 
       
    #2. INCLINED FORCE     
            
        elif Ch==2:
            m2=float(input("Please enter the magnitude in newton: "))
            D2=float(input("Please enter the distance: "))
            A2=float(input("Please enter the angle in degree: "))        
            Quad=int(input("Please enter the Quadrant in which the force lie: "))
            xry=int(input("Please enter 0 if the angle is with x-axis and 1 if y-axis: "))
            
            if Quad == 1:
                if xry==0:
                    angle=A2
                else :
                    angle=90-A2
            elif Quad==2 :
                if xry==0:
                    angle=180-A2
                else :
                    angle=90+A2
            elif Quad==3:
                if xry==0:
                    angle=180+A2
                else :
                    angle=270-A2
            elif Quad==4:
                if xry==0:
                    angle=360-A2
                else :
                    angle=270+A2
            
    #        Ax=m2*cos((pi/180)*angle)
            Ay=m2*sin((pi/180)*angle)
    #        M2x=Ax*D2              #statements for finding M2x, but M2x=0 due to principle of transmissibility.
    #        M2x=round(M2x)
    #        print(M2x)     
    #        MF=MF+M2x
    #        print(MF)
            M2y=Ay*D2
            M2y=round(M2y,2)
           
    #        if cra==0:
    #            M2y=M2y*1
    #        else:
    #            M2y=M2y*(-1)
            cra=int(input("Check and answer 0 if force is Clockwise and 1 if Anticlockwise: "))
            if M2y<0 and cra==0:
                M2y=M2y*(-1)
            elif M2y>0  and cra==0:
                M2y=M2y*1
            elif M2y>0  and cra==1:
                M2y=M2y*(-1)
            elif M2y<0  and cra==1:
                M2y=M2y*1
            MF2=MF2+M2y
    #        print(M2y) 
            print(MF2)
    
    #3. COUPLE              #(C- capital) & (Couple = Force*distance) "so no need of multiplying with distance" 
                            
        elif Ch==3:    
            C3=float(input("Please enter the magnitude of couple: "))  #(in KNm or  Nm)
            Q3=int(input("Please enter 0 if couple is clockwise and 1 if anticlockwise: "))
            
            if Q3==0:
                C3=C3*1
            else:
                C3=C3*(-1)
    #        print(C3)
            MF3=MF3+C3
            print(MF3)
           
    #4. RECTANGULAR LAMINA   (C6=centroid of Rectangular Lamina)   (S6=side residing on the rod)
    #("For centroid of rectangle the side of rectangle to be taken is the one residing on the rod" )
            
        elif Ch==4:
            L4=float(input("Please enter the length of Rectangular Lamina: "))
            B4=float(input("Please enter the breadth of Rectangular Lamina: "))
            A4=L4*B4
            D4=float(input("Please enter the distance of Rectangular Lamina from one end of the rod: "))
            S4=float(input("Please enter the magnitude of the side residing on the rod: "))  #it may be L6/B6
            C4=S4/2
            D41=D4+C4
            M4=A4*D41
            cra=int(input("Check and answer 0 if force is Clockwise and 1 if Anticlockwise: "))
            if cra==0 and M4>0:
                M4=M4*1
            elif cra==0 and M4<0:
                M4=M4*(-1)
            elif cra==1 and M4<0:
                M4=M4*1
            elif cra==1 and M4>0:
                M4=M4*(-1)   
    #        print(M4)
            MF4=MF4+M4
            print(MF4)
    #5. (UDL-UNIFORMLY DISTRIBUTED LOAD)
            
        elif Ch==5:
            m5=float(input("Please enter the magnitude of force acting per unit length of UDL: "))     #(in KN/m or N/m)
            d5=float(input("Please enter the distance over which the UDL is spread: "))
            D5=float(input("Please enter the distance of UDL from one end of the rod: "))
            m51=m5*d5
            C5=d5/2
            D51=D5+C5
            M5=m51*D51
            cra=int(input("Check and answer 0 if force is Clockwise and 1 if Anticlockwise: "))
            if cra==0 and M5>0:
                M5=M5*1
            elif cra==0 and M5<0:
                M5=M5*(-1)
            elif cra==1 and M5<0:
                M5=M5*1
            elif cra==1 and M5>0:
                M5=M5*(-1)    
    #        print(M5)
            MF5=MF5+M5
            print(MF5)
    #6. (UVL-TRIANGULAR LAMINA)
            
        elif Ch==6:
            B6=float(input("Please enter the magnitude of base of triangular lamina: "))
            H6=float(input("Please enter the magnitude of height of triangular lamina: "))
            D6=float(input("Please enter the distance of the triangular lamina from one end of the rod:  "))
            Q6=int(input("Please enter 0 if toe of triangle is towards left and 1 if towards right: "))
            if Q6==0:
                C6=0.6666666667*B6
            else:
                C6=B6-(0.6666666667*B6)
            C6=round(C6,2)
            D61=D6+C6
            A6=0.5*B6*H6
            m6=A6       #in(N or KN)
            M6=m6*D61
            cra=int(input("Check and answer 0 if force is Clockwise and 1 if Anticlockwise: "))
            if cra==0 and M6>0:
                M6=M6*1
            elif cra==0 and M6<0:
                M6=M6*(-1)
            elif cra==1 and M6>0:
                M6=M6*(-1)
            elif cra==1 and M6<0:
                M6=M6*1    
    #        print(M6)
            MF6=MF6+M6
            print(MF6)
    
    #7. (UVL-TRAPEZOIDAL LAMINA)       #(C5=centroid of Trapezoidal Lamina)
            
        elif Ch==7:
            A7=float(input("Please enter the magnitude of base(a) of Trapezoidal Lamina:  "))
            B7=float(input("Please enter the magnitude of base(b) of Trapezoidal lamina: "))
            H7=float(input("Please enter the magnitude of height of Trapezoidal lamina: "))
            D7=float(input("Please enter the distance of the triangular lamina from one end of the rod: "))
            A71=0.5*(A7+B7)*H7
            C7=((B7+2*A7)/(B7+A7))*(0.333333333*H7)
            C71=(round(C7,3))
            D71=D7+C71
            M7=round(A71*D71,3)
            #           (for the direction of forces conditions are given below) 
            Q7=int(input("Please enter 0 if forces in Trapezoidal Lamina are horizontal and 1 if Vertical: "))
            if Q7==0:
                Q71=int(input("Please enter 0 if forces are in right direction and if 1 left: "))
            else:
                Q72=int(input("Please enter 0 if forces are in up direction and if 1 down: "))
            
            if Q7==0 and Q71==0:
                M7=M7*1        
            elif Q7==0 and Q71==1:
                M7=M7*(-1)
            elif Q7==1 and Q72==0:
                M7=M7*1
            elif Q7==1 and Q72==1:
                M7=M7*(-1)
            cra=int(input("Check and answer 0 if force is Clockwise and 1 if Anticlockwise: "))
            if cra==0 and M7>0:
                M7=M7*1
            elif cra==0 and M7<0:
                M7=M7*(-1)
            elif cra==1 and M7<0:
                M7=M7*1
            elif cra==1 and M7>0:
                M7=M7*(-1)      
    #        print(M7)
            MF7=MF7+M7
            print(MF7)
            
    MF=MF1+MF3+MF2+MF4+MF5+MF6+MF7
    print("Momment of Force with respect to one end : ",MF)
            
            
                 