def extract_video_id(url)
  if url.include?("youtube.com/watch")
      video_id = url.split("v=").last
  elsif url.include?("youtu.be/")
      video_id = url.split("/").last
  else
      raise ArgumentError, "Invalid YouTube video URL"
  end

  video_id
end

def main
  url = gets.chomp
  puts extract_video_id(url)
end

if __FILE__ == $0
  main
end