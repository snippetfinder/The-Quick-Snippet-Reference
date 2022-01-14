fn main()
{
    let mut array = vec![3, 2];
    let item = 1;
    println!("{array:?}");  // [3, 2]
    array.push(item);  // ≡
    println!("{array:?}");  // [3, 2, 1]
}