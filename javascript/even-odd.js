// * normal use method
const a = 10;
if (a % 2 == 0) {
  console.log("number is even");
} else {
  console.log("number is odd");
}

// * name function method
function method() {
  const a = 10;
  if (a % 2 == 0) {
    console.log("number is even");
  } else {
    console.log("number is odd");
  }
}
console.log(method());

// * arrow function method
method = () => {
  const a = 10;
  if (a % 2 == 0) {
    console.log("number is even");
  } else {
    console.log("number is odd");
  }
};
console.log(method());
