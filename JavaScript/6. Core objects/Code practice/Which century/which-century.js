function main() {
    const year = parseInt(readLine(), 10);
    const century = getCentury(year);
    console.log(century);
}

const getCentury = (year) => {
    return Math.ceil(year / 100);
}