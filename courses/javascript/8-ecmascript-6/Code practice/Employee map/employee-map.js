const main = () => {
  const employees = new Map([
    ["Richard", "Developer"],
    ["Maria", "SEO Specialist"],
    ["Tom", "Product Manager"],
    ["David", "Accountant"],
    ["Sophia", "HR Manager"],
  ]);

  const name = readLine();
  const position = readLine();
  employees.set(name, position);

  for ([key, value] of employees) {
    console.log(`${key} : ${value}`);
  }
}
