def main():
    num_friends = int(input())
    candles_per_person = 9
    # + candlesPerPerson because we order 9 candles, independently of the number of friends
    candles = num_friends * candles_per_person + candles_per_person
    print(candles)


if __name__ == "__main__":
    main()
