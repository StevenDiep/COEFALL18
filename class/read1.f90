        program read
         
        implicit none
        real :: input
        real, parameter :: ret_age = 62.

        print *, "Enter your age:"
        read *, input
        print *, "You have entered", input

        end program read
