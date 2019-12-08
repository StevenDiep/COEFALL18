        program array1

        implicit none
        character(len=8) :: n  = 'John Doe'
        print '(a1,a8,a1)', '>', n, '<'  ! >John Doe<  ! Explicit width
        print '(a, a, a)',  '>', n, '<'  ! >John Doe<  ! Implicit width
        print '(a, a4,a)',  '>', n, '<'  ! >John<      ! String truncated
        print '(a, a5,a)',  '>', n, '<'  ! >John <     ! String truncated
        print '(a, a6,a)',  '>', n, '<'  ! >John D<    ! String truncated
        print '(a, a8,a)',  '>', n, '<'  ! >John Doe<  ! String padded
        print '(a, a9,a)',  '>', n, '<'  ! > John Doe< ! String padded

        end program
