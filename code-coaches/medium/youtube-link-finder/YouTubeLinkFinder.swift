import Foundation

func extractVideoId(from url: String) throws -> String {
    if url.contains("youtube.com/watch") {
        let parts = url.components(separatedBy: "v=")
        if parts.count == 2 {
            return parts[1]
        }
    } else if url.contains("youtu.be/") {
        let parts = url.components(separatedBy: "/")
        if let lastPart = parts.last {
            return lastPart
        }
    }
    throw NSError(domain: "Invalid YouTube video URL", code: 0)
}

func main() {
    if let url = readLine() {
        do {
            let videoId = try extractVideoId(from: url)
            print(videoId)
        } catch let error as NSError {
            print("Error: \(error.localizedDescription)")
        }
    }
}

main()