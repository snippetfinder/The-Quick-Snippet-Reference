fn main()
{
    let mut number = 10;
    let mut decimal = 2.3;
    let mut string = "Hello there.";
    let mut array_numbers = vec![1, 2, 3, 4, 5];
    let mut array_decimals = vec![2.3, 3.14, 0.99];
    let mut array_strings = vec!["abc", "xyz", "123"];
    println!("{string}");  // Hello there.  ≡
    string = "Goodbye!";
    println!("{string}");  // Goodbye!      ≡
}