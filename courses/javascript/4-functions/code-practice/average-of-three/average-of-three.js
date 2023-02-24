const main = () => {
  const nums = [
    parseInt(readLine(), 10),
    parseInt(readLine(), 10),
    parseInt(readLine(), 10),
  ];

  const average = avg(nums);
  console.log(average);
}

const avg = (nums) => {
  return nums.reduce((a, b) => a + b) / nums.length;
};
