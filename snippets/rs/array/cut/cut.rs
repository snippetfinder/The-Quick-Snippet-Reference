fn main()
{
    let mut array = vec![5, 4, 3, 2, 1];
    let start = 1;  // 0: first item, 1: second item...
    let count = 3;
    println!("{array:?}");      // [5, 4, 3, 2, 1]
    let array_cut: Vec<_> = array.drain(start..(start + count)).collect();  // ≡
    println!("{array:?}");      // [5, 1]
    println!("{array_cut:?}");  // [4, 3, 2]
}