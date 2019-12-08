        program test
        
        implicit none
        integer :: a = 3, b = 4, c = 5

        if (a < b .and. b < c) then 
                print *, "c is the biggest number"
        else if (a<b .and. b> c) then 
                print *, "b is the biggest number"
        end if
        end program
