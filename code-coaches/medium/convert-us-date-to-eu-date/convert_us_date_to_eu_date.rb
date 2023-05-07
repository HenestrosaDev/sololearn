monthToNum = {
	"January" => "1",
	"February" => "2",
	"March" => "3",
	"April" => "4",
	"May" => "5",
	"June" => "6",
	"July" => "7",
	"August" => "8",
	"September" => "9",
	"October" => "10",
	"November" => "11",
	"December" => "12",
}

usDate = gets.chomp
euDate = ""

if usDate.include? "/"
	usDateSplit = usDate.split("/")
	euDate = "#{usDateSplit[1]}/#{usDateSplit[0]}/#{usDateSplit[2]}"
else
	usDateSplit = usDate.split(" ")
	month = monthToNum[usDateSplit[0]]
	day = usDateSplit[1].delete_suffix!(",")
	euDate = "#{day}/#{month}/#{usDateSplit[2]}"
end

puts euDate