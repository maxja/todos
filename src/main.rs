use std::fs::{OpenOptions};
use std::io::Write;

fn main() {
    let mut todofile = OpenOptions::new()
        .append(true)
        .open("todo.lst")
        .unwrap();
    todofile.write_all("test TODOS".as_bytes());
    todofile.flush().unwrap();
}
