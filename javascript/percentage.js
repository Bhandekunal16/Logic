// * normal syntax
const total = 100;
const number = 40;
percentage = (number / total) * 100;
console.log(percentage);

// * name function method
function method() {
  const total = 100;
  const number = 40;
  percentage = (number / total) * 100;
  return percentage;
}
console.log(method());

// * arrow function method
method = () => {
  const total = 100;
  const number = 40;
  percentage = (number / total) * 100;
  return percentage;
};
console.log(method());
