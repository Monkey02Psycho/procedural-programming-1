use std::collections::HashMap;

fn main(){
    
    // we might have to use an rr<cell<HashMap<String>, <i32>> to make this work
    let mut accounts: Vec<HashMap<String, i32>> = vec![HashMap::new()];
    
    accounts[0].insert("1".to_string(), 542);
    accounts[0].insert("2".to_string(), 431);
    
    println!("{}", accounts[0].get(&"1".to_string()).unwrap());
    
    get_account("2".to_string(), &accounts)
    
}

fn get_account(name: String, accounts: &Vec<HashMap<String, i32>>){
    for account in accounts{
        match account.get(&name){
            Some(acc) => println!("{}", acc),
            None => panic!("account dont exist") // should we panic or just return Result<(), Error>?
        }
    }
}
