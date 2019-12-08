        module pointMod
        implicit none

        type Point
          real :: x,y
        end type Point
        
        contains 
          real function distance(p,q)
            type(Point):: p,q
            distance = sqrt(((q%x - p%x)**2) + ((q%y-p%y)**2))
          end function
        end module pointMod
        
        program main
        use pointMod
        type(Point) :: a,b
        real :: dis
        
        a%x = 0
        a%y = 0
        b%x = 5
        b%y = 5
        dis = distance(a,b)
        print *, dis
        
        end program


