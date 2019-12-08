        program prime
        
        implicit none
        integer :: i,j,k,counter
        
        do i = 0,100
          if (i == 0) then
            print *, "0 is not prime by definition "
          else if (i == 1) then
            print *, "1 is not prime by definition"
          else if (i == 2) then
            print *, "2 is prime"
          else
            counter = 0
            do j = 2, (i-1)
              k = mod(i,j)
              if (k == 0 ) then
                print *, i, "is not prime: it is divisible by",j
                counter = counter + 1
                exit
              end if
            end do
          if (counter == 0) then
              print *, i,"is prime"
          end if
          end if
        end do
        end program
