books = {
	"Life of Pi": "Adventure Fiction",
	"The Three Musketeers": "Historical Adventure",
	"Watchmen": "Comics",
	"Bird Box": "Horror",
	"Harry Potter": "Fantasy Fiction",
	"Good Omens": "Comedy"
}

book = input()
result = books.get(book, 'Book not found')
print(result)
