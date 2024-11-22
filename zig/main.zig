const std = @import("std");

const LIMIT: usize = 100;

fn generate_fibonacci() void {
    var fib: [LIMIT]u128 = undefined;
    fib[0] = 0;
    fib[1] = 1;
    for (2..LIMIT) |i| {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return;
}

pub fn main() void {
    var now = std.time.Timer.start() catch return;
    generate_fibonacci();
    const elapsed = now.read();
    std.debug.print("Zig: in {} nanoseconds.", .{elapsed});
}
