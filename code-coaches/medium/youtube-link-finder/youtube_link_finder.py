def extract_video_id(url: str) -> str:
    if "youtube.com/watch" in url:
        video_id = url.split("v=")[1]
    elif "youtu.be/" in url:
        video_id = url.split("/")[-1]
    else:
        raise ValueError("Invalid YouTube video URL")

    return video_id


def main():
    url = input()
    print(extract_video_id(url))


if __name__ == "__main__":
    main()
