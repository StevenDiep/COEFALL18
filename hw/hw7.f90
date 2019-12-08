        program hw6
                
        implicit none
        integer :: a        

        call printpnumber(a)
        
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
         subroutine printpnumber(b)
         
         integer :: a,b,counter
         
         print *, "How many prime numbers would you like to see? "
         read *, b 
         counter = 0
         a = 0
         do while (counter < b)
           if (iprime(a) == .TRUE.) then
             print *, a
             counter = counter + 1
           end if
           a = a + 1
         end do
         end subroutine
        end program



   
