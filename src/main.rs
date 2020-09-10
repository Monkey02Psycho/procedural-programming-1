use std::collections::HashMap;
// We def should not use RUST
fn main(){
    
    // we might have to use an rc<cell<HashMap<String>, <i32>> to make this work
    let mut accounts: Vec<HashMap<String, i32>> = vec![HashMap::new()];
    
    accounts[0].insert("1".to_string(), 542);
    accounts[0].insert("2".to_string(), 431);
    
    println!("{}", accounts[0].get(&"1".to_string()).unwrap());
    
    println!("{:?}",get_account("2".to_string(), &accounts))
    
}

fn get_account(name: String, accounts: &mut Vec<HashMap<String, i32>>) -> &HashMap<String, i32>{
    for account in accounts{
        match account.get(&name){
            Some(acc) => account,
            None => panic!("account dont exist"); // should we panic or just return Result<(), Error>?
        }
    }
}

fn deposit(name: String, amount: i32, &Vec<HashMap<String, i32>>){
}
