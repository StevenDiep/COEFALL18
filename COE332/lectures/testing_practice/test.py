from app import app
import unittest


class BasicTests(unittest.TestCase):

    #### setup and teardown ####

    # executed prior to each test
    def setUp(self):
        # creates a test client
        self.app = app.test_client()
        # propagate the exceptions to the test client
        self.app.testing = True
        pass

    # executed after each test
    def tearDown(self):
        pass


    #### tests ####

    def test_home_page(self):
        response = self.app.get('/')
        self.assertEqual(response.status_code, 200)
        self.assertIn(b"Hello world", response.data)

    def test_double(self):
        response = self.app.get('double/2')
        self.assertEqual(int(response.data), 4)

    def test_hello_name(self):
        response = self.app.get('hello/brandi')
        self.assertEqual(response.status_code, 200)
        self.assertIn(b"Hello brandi", response.data)

    def test_hello_without_name(self):
        response = self.app.get('hello/')
        self.assertEqual(response.status_code, 404)

    def test_goodbye_with_arg_test(self):
        response = self.app.get('goodbye?name=Joe')
        self.assertEqual(response.status_code, 200)
        self.assertIn(b"Goodbye Joe", response.data)

    def test_goodbye_without_arg_test(self):
        response = self.app.get('goodbye')
        self.assertEqual(response.status_code, 200)
        self.assertIn(b"Goodbye", response.data)

    def test_post_animal(self):
        response = self.app.post('animals?animal=fish')
        json_response = response.get_json()["animals"][0]
        self.assertEqual(response.status_code, 200)
        self.assertIn("fish", json_response)

    def test_get_animal(self):
        response = self.app.get('animals')
        json_response = response.get_json()["animals"]
        self.assertEqual(response.status_code, 200)





if __name__ == "__main__":
    unittest.main()
