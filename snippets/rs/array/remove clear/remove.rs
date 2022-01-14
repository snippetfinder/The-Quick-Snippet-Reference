fn main()
{
    let mut array = vec![5, 4, 3, 2, 1];
    let index = 1;  // 0: first item, 1: second item...
    println!("{array:?}");  // [5, 4, 3, 2, 1]
    array.remove(index);  // ≡
    println!("{array:?}");  // [5, 3, 2, 1]

    // many items:
    let mut array = vec![5, 4, 3, 2, 1];
    let index = 1;  // 0: first item, 1: second item...
    let count = 3;
    println!("{array:?}");  // [5, 4, 3, 2, 1]
    array.drain(index..(index + count));  // ≡
    println!("{array:?}");  // [5, 1]

    // many items at the end:
    let mut array = vec![5, 4, 3, 2, 1];
    let index = 2;  // 0: first item, 1: second item...
    println!("{array:?}");  // [5, 4, 3, 2, 1]
    array.truncate(index);  // ≡
    println!("{array:?}");  // [5, 4]
}