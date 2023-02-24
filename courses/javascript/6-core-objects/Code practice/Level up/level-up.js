function main() {
    const levels = parseInt(readLine(),10);
    const points = new Array();

    let count = 0;
    while (count < levels) {
        var elem = parseInt(readLine(), 10);
        points[count] = elem;
        count++;
    }

    const sum = points.reduce((a, b) => a + b);
    console.log(sum);
}