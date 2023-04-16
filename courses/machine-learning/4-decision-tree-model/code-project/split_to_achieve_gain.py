def get_gini_impurity(dataset):
    p = dataset.count(1) / (len(dataset))
    return 2 * p * (1 - p)


def get_information_gain(initial_dataset, dataset_a, dataset_b):
    gini_impurity_initial = get_gini_impurity(initial_dataset)
    gini_impurity_a = get_gini_impurity(dataset_a)
    gini_impurity_b = get_gini_impurity(dataset_b)

    total_values = len(dataset_a) + len(dataset_b)
    return gini_impurity_initial - (len(dataset_a) / total_values * gini_impurity_a) - (
                len(dataset_b) / total_values * gini_impurity_b)


def main():
    S = [int(x) for x in input().split()]
    A = [int(x) for x in input().split()]
    B = [int(x) for x in input().split()]

    information_gain = get_information_gain(S, A, B)
    print(round(information_gain, 5))


if __name__ == "__main__":
    main()
