import Foundation

if  let input1 = readLine(),
    let ars = Decimal(string: input1), // Argentine peso
    let input2 = readLine(),
    let usd = Decimal(string: input2) // US dollar
{
	let arsToUsd: Decimal = 0.02
	let convertedUsd = ars * arsToUsd
	
	if convertedUsd > usd {
		print("Dollars")
	} else {
		print("Pesos")
	}
}
