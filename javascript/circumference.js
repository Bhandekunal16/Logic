// * this is normal statement
const radius = 10;
const pi = 3.14;
circumference = 2 * pi * radius;
console.log(circumference);

// * this is name method
function method() {
  const radius = 10;
  const pi = 3.14;
  circumference = 2 * pi * radius;
  return circumference;
}
console.log(method());

// * this arrow function method
const method = () => {
  const radius = 10;
  const pi = 3.14;
  circumference = 2 * pi * radius;
  return circumference;
};
console.log(method());
