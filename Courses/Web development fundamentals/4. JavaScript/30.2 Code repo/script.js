const validateValue = (value) => {
  if (value < 0) {
    value = 0;
  }

  return value;
};

let adults = 42;
let children = 8;

adults = validateValue(adults);
children = validateValue(children);
