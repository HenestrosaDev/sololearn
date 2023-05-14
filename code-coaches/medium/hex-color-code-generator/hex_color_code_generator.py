def rgb_to_hex(r, g, b):
    # convert each RGB value to a two-digit hex string
    r_hex = format(r, "02x")
    g_hex = format(g, "02x")
    b_hex = format(b, "02x")

    # concatenate the hex strings with a "#" in front
    hex_code = "#" + r_hex + g_hex + b_hex
    return hex_code


def main():
    r_rgb = int(input())
    g_rgb = int(input())
    b_rgb = int(input())

    print(rgb_to_hex(r_rgb, g_rgb, b_rgb))


if __name__ == "__main__":
    main()
