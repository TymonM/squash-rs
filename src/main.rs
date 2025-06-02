use crate::squasher::Squasher;

mod squasher;

fn main() {
    let args = std::env::args().collect::<Vec<String>>();
    if args.len() < 2 {
        eprintln!("Usage: {} <directory>", args[0]);
        return;
    }
    let dir = &args[1];

    let mut squasher = Squasher::new();

    squasher.squash_directory(dir);

    // print to dir/squash/squash.cpp
    let output_path = format!("{}/squash/squash.cpp", dir);
    let path = std::path::Path::new(&output_path);
    std::fs::create_dir_all(format!("{}/squash", dir)).unwrap();
    squasher.write_file(path);
}
