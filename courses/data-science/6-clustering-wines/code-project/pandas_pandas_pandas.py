import numpy as np


def main():
    data_points_num = int(input())
    centroid_1 = np.array([[0.0, 0.0]])
    centroid_2 = np.array([[2.0, 2.0]])

    for idx in range(data_points_num):
        x, y = (float(point) for point in input().split())

        distance_to_centroid_1 = round(
            np.linalg.norm(centroid_1[0] - [x, y]),
            2
            # Another option:
            # np.sqrt((centroid_1[0][0] - x) ** 2 + (centroid_1[0][1] - y) ** 2), 2
        )
        distance_to_centroid_2 = round(
            np.linalg.norm(centroid_2[0] - [x, y]),
            2
            # Another option:
            # np.sqrt((centroid_2[0][1] - x) ** 2 + (centroid_2[0][1] - y) ** 2), 2
        )

        if distance_to_centroid_1 <= distance_to_centroid_2:
            centroid_1 = np.vstack((centroid_1, [x, y]))
            # Another option:
            # centroid_1 = np.concatenate((centroid_1, [x, y]), axis=0)
        else:
            centroid_2 = np.vstack((centroid_2, [x, y]))
            # Another option:
            # centroid_2 = np.concatenate((centroid_2, [x, y]), axis=0)

    new_centroid_1 = get_new_centroid(centroid_1)
    print(new_centroid_1)

    new_centroid_2 = get_new_centroid(centroid_2)
    print(new_centroid_2)


def get_new_centroid(centroid):
    if centroid.size > 2:
        centroid_mean = np.mean(centroid[1:], axis=0)
        return np.around(centroid_mean, decimals=2)
    else:
        return None


if __name__ == "__main__":
    main()
