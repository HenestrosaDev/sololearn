products <- data.frame(
    "id" = seq(1:8),
    "price" = c(8000, 3500, 1200, 19000, 5000, 4800, 6700, 9300),
    "tax" = c(300, 400, 200, 500, 250, 200, 550, 400)
)

products$total <- products$price + products$tax
print(mean(products$total))