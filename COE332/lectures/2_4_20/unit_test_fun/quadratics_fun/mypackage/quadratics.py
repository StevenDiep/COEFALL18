
"""
A Quadratic class
"""
class Quadratic:
    """
    __init__ is a constructor
    The first parameter of any class method is self
    """
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c

    def discriminant(self):
        return self.b ** 2 - 4 * self.a * self.c

    def roots(self):
        if self.discriminant() < 0:
            return (math.nan, math.nan, )
        left_root = ( -self.b + (self.discriminant() ) ** 0.5) / ( 2 * self.a )
        right_root = ( -self.b - (self.discriminant() ) ** 0.5) / ( 2 * self.a )
        if self.discriminant() == 0:
            return (left_root, left_root, )
        return (left_root, right_root, )

    def __str__(self):
        return f"{self.a}x^2 + {self.b}x + {self.c}"