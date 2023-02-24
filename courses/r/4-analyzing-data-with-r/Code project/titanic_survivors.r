x <- read.csv('/usercode/files/titanic.csv')

adults <- x[x$Age >= 18,]
adult_survivors_class <- by(adults$Pclass, adults$Survived, mean)
relation_rounded <- apply(adult_survivors_class, 1, round, digits = 6)
print(relation_rounded)