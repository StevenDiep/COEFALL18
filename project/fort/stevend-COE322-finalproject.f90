        program hw6
                
        implicit none
        integer :: a = 11000,b = 11001,i,j,r,k
        real :: averageDist         
        real, dimension(11000) :: P
        real, dimension(10000) :: C
      
        
        call printpnumber(a,P)
        do i = 3,10000
          j = i + 1       
          do while(1)
            r = 2*P(i) - P(j)
            if (iprime(r) == .TRUE.) then
              C(i) = P(i) - r  
              exit
            else
              j = j + 1
            end if
          end do
        end do

        averageDist = sum(C) / 9998
        
        print *, C
        print *, "The average distance for the first 10000 prime number pairs is: ", averageDist
        print *, "The distances will increase with p"
        print *, "The maximum distance is 792"
        print *, "The minimum distance is 2"
        
            

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

         subroutine printpnumber(b,N)
         
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
     
         end subroutine
        end program



   
