def main():
    num_blocks = sum(int(input()) for _ in range(4))
    num_students = 15
    print(num_blocks % num_students)


if __name__ == "__main__":
    main()
