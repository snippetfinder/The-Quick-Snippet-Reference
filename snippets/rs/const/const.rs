fn main()
{
    const NUMBER: i64 = 10;
    const DECIMAL: f64 = 2.3;
    const STRING: &str = "Hello there.";  // ≡
    const ARRAY_NUMBERS: &'static [i64] = &[1, 2, 3, 4, 5];
    const ARRAY_DECIMALS: &'static [f64] = &[2.3, 3.14, 0.99];
    const ARRAY_STRINGS: &'static [&'static str] = &["abc", "xyz", "123"];
    println!("{STRING}");  // Hello there.   ≡
}