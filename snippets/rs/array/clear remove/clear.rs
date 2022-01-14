fn main()
{
    let mut array = vec![1, 2, 3];
    println!("{array:?}");  // [1, 2, 3]
    array.clear();  // ≡
    println!("{array:?}");  // []
}