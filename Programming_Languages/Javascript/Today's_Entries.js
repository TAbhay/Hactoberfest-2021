//Given an array of details of persons logged in (for example) into a website ,this funtion will filter the Names of the persons entered for current day's date and return 
//them as 'comma seperated values' 

/* 
For example, here's an array of three entries and assume the date now is 2021-10-25.

[{ name: "Johny" , date: "2021-10-25T02:53:42+05:30" }, { name: "Sugar" , date: "2021-10-22T02:53:42+05:30" }, { name: "Sun" , date: "2021-10-25T03:53:42+05:30" }]

The function will return: ``` Johny,Sun ```
*/

function todaysEntries(entries) {
  
  var today = new Date();

  var date =
    today.getFullYear() + "-" + (today.getMonth() + 1) + "-" + today.getDate();

  if (today.getMonth() < 10 && today.getDate() < 10) {
    var date =
      today.getFullYear() +
      "-" +
      "0" +
      (today.getMonth() + 1) +
      "-" +
      "0" +
      today.getDate();
  } else if (today.getMonth() < 10) {
    var date =
      today.getFullYear() +
      "-" +
      "0" +
      (today.getMonth() + 1) +
      "-" +
      today.getDate();
  } else if (today.getDate() < 10) {
    var date =
      today.getFullYear() +
      "-" +
      (today.getMonth() + 1) +
      "-" +
      "0" +
      today.getDate();
  } else {
    var date = date;
  }

  let Result = entries.filter((item) => item.date.includes(date));
  product_names = "";
  for (let i = 0; i < Result.length; i += 1) {
    if (i === Result.length - 1) {
      product_names += Result[i].name;
    } else {
      product_names += Result[i].name + ",";
    }
  }
  return product_names;
}

console.log(todaysEntries(entries));
