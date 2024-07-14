def get_height():
    while True:
        try:
            height = int(input("Height: "))

            if height > 0 and height < 9:
                return height

        except ValueError as error:
            print(error)


def print_pyramid(height):

    for line in range(height):
        print(" " * (height - line - 1), end="")
        print("#" * (line + 1))


print_pyramid(get_height())
