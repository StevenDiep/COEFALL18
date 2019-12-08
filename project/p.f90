        program hw6
                
        implicit none
        integer :: a         
        real, dimension(10000) :: N
      
        a = 10000
        N = printpnumber(a)
        print *, N

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
         real,dimension(b) function printpnumber(b)
         
         integer :: a,b,counter
         real, dimension(b) :: N
          
         counter = 0
         a = 0
         do while (counter < b)
           if (iprime(a) == .TRUE.) then
             counter = counter + 1
             N(counter) = a
           end if
           a = a + 1
         end do
         printpnumber = N
         end function
        end program



   
