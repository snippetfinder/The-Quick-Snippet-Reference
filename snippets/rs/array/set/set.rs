fn main()
{
    let mut array = vec![3, 2, 1];
    let index = 1;  // 0: first item, 1: second item...
    let item = 100;
    println!("{array:?}");  // [3, 2, 1]
    array[index] = item;  // ≡
    println!("{array:?}");  // [3, 100, 1]
}