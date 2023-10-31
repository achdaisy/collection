#!/usr/bin/python3
"""defines a rectangle"""


class Rectangle:
    """Real definition of a rectangle"""
    def __init__(self, width=0, height=0):
        """Init function/constructor
        Args
            width (int): width of teh rectangle
            height (int): height of the rectangle
        """
        self.width = width
        self.height = height

    @property
    def width(self):
        """getter method for width attribute"""
        return self.__width

    @width.setter
    def width(self, value):
        """sets the width"""
        if not isinstance(value, int):
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @property
    def height(self):
        """getter method for height attribute"""
        return self.__height

    @height.setter
    def height(self, value):
        """setter method for the height value"""
        if not isinstance(value, int):
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value

    def area(self):
        """returns the area"""
        return (self.__width)*(self.__height)

    def perimeter(self):
        if (self.__width == 0) or (self.__height == 0):
            return 0
        else:
            return (self.__width * 2) + (self.__height * 2)

    def __str__(self):
        """Returns a representation of the rectangle.


        Uses the # symbol.
        """
        if self.__width == 0 or self.__height == 0:
            return("")
        return "\n".join(['#' * self.__width for _ in range(self.__height)])

