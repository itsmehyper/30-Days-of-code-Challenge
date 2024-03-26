// Day 17 of 30 Days 👾
fn recursive_factorial(n: i32) -> i32 {
    if n == 0 {
        return 1;
    } else {
        return n * recursive_factorial(n - 1);
    }
}


// Examples
fn main() {
    let n = 5;
    println!("Factorial of {} is {}", n, recursive_factorial(n)); // Output: 120
    let n = 1;
    println!("Factorial of {} is {}", n, recursive_factorial(n)); // Output: 1
    let n = 3;
    println!("Factorial of {} is {}", n, recursive_factorial(n)); // Output: 6
}