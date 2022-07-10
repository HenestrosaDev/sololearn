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
	usDateSplitted = usDate.split("/")
	euDate = "#{usDateSplitted[1]}/#{usDateSplitted[0]}/#{usDateSplitted[2]}"
else
	usDateSplitted = usDate.split(" ")
	month = monthToNum[usDateSplitted[0]]
	day = usDateSplitted[1].delete_suffix!(",")
	euDate = "#{day}/#{month}/#{usDateSplitted[2]}"
end

puts euDate
