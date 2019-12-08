        program for
        
        implicit none
        real, parameter :: pi = 3.14159
        real :: a,b,c,V,Vc
        character(10) :: namee
        real:: d
        
        print *, "Enter your name "
        read *, namee
        print *,"Hello ",namee
        print *, "Enter value for a:"
        read *, a
        print *, "Enter value for b: "
        read *, b
        print *, "Enter value for c: "
        read *,c

        V = (4/3)*pi*a**3
        Vc = a*b*c
        d = (a*b*c)/7
        d = int(d)
        
        print *, "Volume of a sphere with radius a is ",V
        print *, "Volume of a cube with dimensions a,b,c is ",Vc
        print *, "The value of d is ",d        

        end program
        
