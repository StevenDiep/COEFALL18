        program Loops
        
        implicit none
        integer :: i,j,k
        
        j = 100
        k = 200
        i = 0
        do 
            j = j * 1.05
            k = k * 1.02
            i = i + 1
            if (j == k) then
                print *,&
                "The years it took for the money to be equal is",i
                exit  
            end if
        end do
        
        end program
