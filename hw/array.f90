        program array
        
        implicit none
        integer :: i
        real, dimension(100) :: r
        
        for i = 1, 100
          r(i) =  call random_number(r) 
        print *, r

        end program
