        program Divisors
        
        implicit none
        
        real :: i,a,b
        
        print *, "Please enter a divisor"
        read *, a
        print *, "Please enter a number to divide by"
        read *, b

        i = mod(b,a)
        
        if (i == 0) then
                print *, a,"is a divisor of",b
        else 
                print *, a,"is not a divisor of",b
        end if 
             
        end program
