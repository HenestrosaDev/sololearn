function main() {
   const year = parseInt(readLine(), 10);
   const month = parseInt(readLine(), 10);
   const day = parseInt(readLine(), 10);

   console.log(getWeekDay(year, month, day));
}

const getWeekDay = (year, month, day) => {
   const names = [
      "Sunday",
      "Monday",
      "Tuesday",
      "Wednesday",
      "Thursday",
      "Friday",
      "Saturday"
   ];

   const date = new Date(year, month, day);
   return names[date.getDay()];
}