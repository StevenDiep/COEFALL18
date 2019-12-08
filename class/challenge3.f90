        program fizzbuzz

        implicit none
        integer :: a
        real :: i, j, k, l
        
        print *, "Please enter a number to evaluate"
        read *, a
        i = a/3.0
        j = floor(i)
        k = a/5.0
        l = floor(k)
        if (i == j .and. k == l) then
                print *, "FizzBuzz"
        else if (i == j) then 
                print *, "Fizz"
        else if (k == l) then
                print *, "Buzz"
        end if
        
        end program fizzbuzz
