        program array  
        
        implicit none
        integer :: i,j
        
        i = 2
        j = 3
        print *, i,j
        call swap(i,j)
        print *, i,j

        contains 
          subroutine swap(i,j)
           integer :: t,i,j
           
           t = i
           i = j
           j = t
          end subroutine swap
       end program
        
