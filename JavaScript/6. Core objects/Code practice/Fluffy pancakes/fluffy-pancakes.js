function main() {
    const breakfasts = [
        'Cinnamon Doughnuts',
        'Waffles',
        'Granola',
        'Chorizo Burrito',
        'French Toast'
    ];

    const index = parseInt(readLine(), 10);
    breakfasts[index] = 'Fluffy Pancakes';

    console.log(breakfasts);
}