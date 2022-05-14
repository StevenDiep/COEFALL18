from unittest import TestCase
from unittest.mock import MagicMock, patch
from mypackage.quadratics import Quadratic
from main import main, show_roots, get_coefficients

"""
A TestCase for main.py. Note that we import main differently than other
packages, since it is at the top level of our program
"""
class TestMyproggy(TestCase):

    """
    Patches are a way of faking methods, classes and packages and replacing
    them with MagicMocks. Notice that we are using the @patch method
    decorator, and that the parameters for the test are in REVERSE
    order of the patches. 

    We can set the .return_value of any MagicMock
    """
    @patch('main.show_roots')
    @patch('main.get_coefficients')
    def test_main(self, mock_get_coefficients, mock_show_roots):
        # We want the fake get_coefficients function to return a specific value
        mock_get_coefficients.return_value = (2, 4, 2, )

        # Call the main function
        main()

        # Make sure that the get_coefficients function was called
        mock_get_coefficients.assert_called()

        # Make sure that the show_roots function was called with the expected values
        # (in this case, the faked return values from get_coefficients)
        mock_show_roots.assert_called_with(2, 4, 2)


    """
    Patches can also target methods in classes. Here, we are patching
    main.py's copy of the Quadratic class. Specifically, the roots() method
    of the class. The rest of the Quadratic class is "real"

    NOTE: We do not patch 'mypackage.quadratics.Quadratic'. We patch the
    copy that is being used! If you patch mypackage.quadratics.Quadratic
    it will interfere with other tests.

    Try this:
        Add another patch for main.Quadratics.__str__ and assert that
        it was called
    """
    @patch('main.Quadratic.roots')
    def test_show_roots(self, mock_quadratic_roots):
        # Call the show_roots function with some fake data
        show_roots(1, 2, 3)

        # Make sure that the roots() function was called
        mock_quadratic_roots.assert_called()


    """
    Try this:
        Write a test for get_coefficients(). requests.get() has been mocked
        for you, because we definitely do not want our test code attempting
        to make an http request to a fake URL. However, mock_get must return
        a MagicMock object so that we can also fake the call for
        response.json(). Your test must assert that the returned
        value of get_coefficients() is equal to the tuple (1, 2, 3, )
    """
    @patch('main.get')
    def test_get_coefficients(self, mock_get):
        pass
