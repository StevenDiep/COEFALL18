from requests import get
from mypackage.quadratics import Quadratic


def get_coefficients():
    response = get("https://quadratics.fake/coefficients")
    coefficients = response.json()
    # Expect coefficients to be a dictionary of { a: value, b: value, c: value }
    # Return a tuple of the cofficients retrieved
    return (coefficients['a'], coefficients['b'], coefficients['c'], )

def show_roots(a, b, c):
    quad = Quadratic(a, b, c)
    print(quad)
    print(quad.roots())

def main():
    coefficients = get_coefficients()
    show_roots(coefficients[0], coefficients[1], coefficients[2])

if __name__ == "__main__":
    main()


