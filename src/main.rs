use std::collections::HashMap;

main(){
    println!("hello world");
    
    // we might have to use an rr<cell<HashMap<String>, <i32>> to make this work
    let accounts: Vec<HashMap<String>, <i32>> = HashMap::new();
}

fn get_account(name: String){
    for account in accounts{
        match account.get(name){
            Some(acc) => return acc,
            None => panic!("account dont exist")
        }
    }
}
