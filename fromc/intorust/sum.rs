#![crate_type = "lib"]

#[no_mangle]
pub extern "C" fn sum(a:i32, b:i32) -> i32 {
    return a+b;
}
