using System;

namespace SocialNetwork
{
	class Program
	{
		static void Main(string[] args)
		{
			string postText = Console.ReadLine();

			Post post = new Post();
			post.Text = postText;
			post.ShowPost();
		}
	}

	class Post
	{
		public string Text { get; set; }

		public Post()
		{
			Console.WriteLine("New post");
		}

		public void ShowPost()
		{
			Console.WriteLine(Text);
		}
	}
}