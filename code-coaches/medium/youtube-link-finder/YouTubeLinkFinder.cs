using System;

class YouTubeLinkFinder
{
    static string ExtractVideoId(string url)
    {
        if (url.Contains("youtube.com/watch"))
        {
            string[] parts = url.Split(new string[] { "v=" }, StringSplitOptions.None);
            if (parts.Length == 2)
            {
                return parts[1];
            }
        }
        else if (url.Contains("youtu.be/"))
        {
            string[] parts = url.Split('/');
            if (parts.Length > 0)
            {
                return parts[parts.Length - 1];
            }
        }
        throw new ArgumentException("Invalid YouTube video URL");
    }

    static void Main(string[] args)
    {
        string url = Console.ReadLine();
        string videoId = ExtractVideoId(url);
        Console.WriteLine(videoId);
    }
}
