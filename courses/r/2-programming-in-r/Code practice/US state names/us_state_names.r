#CA - California
#NY - New York
#FL - Florida
#OH - Ohio

state <- readLines('stdin')

result <- switch(
  state,
  "CA" = "California",
  "NY" = "New York",
  "FL" = "Florida",
  "OH" = "Ohio"
)

print(result)