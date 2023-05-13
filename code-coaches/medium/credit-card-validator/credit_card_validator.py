def does_pass_luhn_algorithm(cc_num: str) -> bool:
    # Step 1: Reverse the credit card number
    reversed_cc_num = cc_num[::-1]

    total_sum = 0
    for i in range(len(reversed_cc_num)):
        digit = int(reversed_cc_num[i])
        # Step 2: Multiply every second digit by 2
        if i % 2 == 1:
            digit *= 2
            # Step 3: Subtract 9 from all numbers higher than 9
            if digit > 9:
                digit -= 9

        # Step 4: Add all the digits together
        total_sum += digit

    # Step 5: Modulo 10 of that sum should be equal to 0
    return total_sum % 10 == 0


def validate_credit_card_number(cc_num) -> bool:
    return len(cc_num) == 16 and does_pass_luhn_algorithm(cc_num)


def main():
    cc_num = input()
    if validate_credit_card_number(cc_num):
        print("valid")
    else:
        print("not valid")


if __name__ == "__main__":
    main()
