        program hw6
                
        implicit none
        integer :: a
        logical :: ans        

        print *,"Please enter a number to evaluate: "
        read *, a
        ans = iprime(a)
        print *, ans
        
        contains
         logical function iprime(x)
          
          integer :: x,n,counter
          
          counter = 0
          if (x == 0) then
            iprime = .FALSE.
            counter = 1
          else if (x == 1) then
            iprime = .FALSE.
            counter = 1
          else if (x == 2) then 
            iprime = .TRUE.
          else
            do n = 2,(x-1)
              if (mod(x,n) == 0) then
                counter = counter + 1
                iprime = .FALSE.
                exit
              end if
            end do
          end if

          if (counter == 0) then
            iprime = .TRUE.
          end if
          end function
        end program   
