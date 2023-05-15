def is_roadrunner_safe(
    distance_to_safety: int, roadrunner_speed: int, coyote_speed: int
) -> bool:
    seconds_to_safety = distance_to_safety / roadrunner_speed
    roadrunner_distance = roadrunner_speed * seconds_to_safety
    coyote_distance = coyote_speed * seconds_to_safety - 50
    return roadrunner_distance > coyote_distance


def main():
    distance_to_safety = int(input())
    roadrunner_speed = int(input())
    coyote_speed = int(input())

    if is_roadrunner_safe(distance_to_safety, roadrunner_speed, coyote_speed):
        print("Meep Meep")
    else:
        print("Yum")


if __name__ == "__main__":
    main()
