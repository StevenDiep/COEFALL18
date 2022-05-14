from unittest import TestCase
from unittest.mock import MagicMock
from .quadratics import Quadratic

"""
A TestCase for the Quadratic class

Since the Quadratic class is in the quadratics.py file in this directory,
we can import it from .quadratics. This works only if the directory also
contains an empty __init__.py file!

Notice that the header TestQuadratic has (TestCase) as a parameter. This 
test inherits all the functionality of the unittest.TestCase class. The
unittest framework finds all of these classes and runs every function inside
of them.
"""
class TestQuadratic(TestCase):

    """
    A simple test for the discriminant() function that uses self.assertEqual.
    You can see what happens when a test fails by changing either the values of
    the Quadratic() constructor or the assertion.
    """
    def test_discriminant(self):
        # This is the easiest possible test case. Create an instance of the Quadratic class
        quad = Quadratic(2, 4, 2)

        # We want to make sure the values (a=2, b=4, c=2) make a discriminant of 0
        self.assertEqual(quad.discriminant(), 0)

    """
    Try this:

        Write a test that verifies that the string representation of a Quadratic instance is correct.
    """
    def test_str(self):
        # Try this: 
        pass

    """
    A test for the roots() function. This test uses a MagicMock to substitute a 
    real function for a fake one, where we can fakethe output. The reason we 
    do this is so that we can test the roots() function regardless of whether or not
    the discriminant() function works.
    """
    def test_one_root(self):
        # This one's a little trickier. First we make a Quadratic instance. We 
        # don't care what the actual values are, because we will use a MagicMock
        # to bypass the discriminant() code later
        quad = Quadratic(1, 5, 2)

        # Do a=1, b=5, c=2 create a quadratic with one root? Nope! But it doesn't matter...
        # We are patching the instance so that the discriminant function is mocked and always returns 0.
        quad.discriminant = MagicMock(return_value=0)

        # Let's test our mock discriminant function to make sure it returns 0
        self.assertEqual(quad.discriminant(), 0)

        # Now we can call quad.roots(), which in turn calls our mocked discriminant function
        roots = quad.roots()

        # We can test mocks to see if they were called
        quad.discriminant.assert_called()

        # Whatever the output is, the roots tuple should have both values be equal
        self.assertEqual(roots[0], roots[1])

    """
    Try this:
        Write a test that covers quadratics.py line 20
    """
    def test_no_roots(self):
        pass

    """
    Try this:
        Write a test that covers quadratics.py line 25
    """
    def test_two_roots(self):
        pass
