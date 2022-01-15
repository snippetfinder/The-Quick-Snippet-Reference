const number = 10;
const decimal = 2.3;
const string = "Hello there.";              // ≡
const array = [2.3, 'Hello there.', [1, 2], {a: 1, b: 2}];
const dictionary = {number: 2.3, "list": [1, 2], 'values': {a: 1, b: 2}};
console.log(string);  // Hello there.          ≡

try
{
    string = "Goodbye";                     // ≡
}
catch (error)
{
    console.log('can\'t change constant');  // ≡
}