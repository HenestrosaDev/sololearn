def is_password_strong(password):
    # Check if the password has at least 2 numbers, 2 special characters,
    # and a length of at least 7 characters
    num_digits = len([char for char in password if char.isdigit()])
    num_special_chars = len([char for char in password if char in "!@#$%&*"])
    is_strong = num_digits >= 2 and num_special_chars >= 2 and len(password) >= 7
    return is_strong


def main():
    # Get password input from user
    password = input("Enter your password: ")

    # Check if the password is strong or weak and print the result
    if is_password_strong(password):
        print("Strong")
    else:
        print("Weak")


if __name__ == "__main__":
    main()
