res <- 1
for(x in 1:10000) {
   res <- res * x
   if (res > 10000) {
       break
   }
}
print(res)