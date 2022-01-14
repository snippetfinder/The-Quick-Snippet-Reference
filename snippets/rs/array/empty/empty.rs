fn main()
{
    let mut array = vec![];
    if array.is_empty() { println!("array is empty") };    // ≡
    array.push(100);
    if !array.is_empty() { println!("array has items") };  // ≡
    array.clear();
    if array.is_empty() { println!("array is empty again") };
}