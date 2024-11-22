use std::time::Instant;

const LIMIT: usize = 100_000;

fn generate_fibonacci() {
    let mut fib = [0u128; LIMIT];
    fib[0] = 0;
    fib[1] = 1;
    for i in 2..LIMIT {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

fn main() {
    let now = Instant::now();
    generate_fibonacci();
    let elapsed = now.elapsed();
    println!("Rust: in {} nanoseconds.", elapsed.as_nanos());
}