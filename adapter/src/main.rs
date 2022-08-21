use rand::thread_rng;
use rand::Rng;

pub trait EnemyAttacker {
    fn new(&self, enemy_robot: EnemyRobot) -> Self;
    fn fire_weapon(&self);
    fn drive_forward(&self);
    fn assign_driver(&self, driver_name: &str);
}

pub struct EnemyRobotAdapter {
    pub robot: EnemyRobot,
}

impl EnemyAttacker for EnemyRobotAdapter {
    fn new(&self, new_robot: EnemyRobot) -> Self {
        Self { robot: new_robot }
    }

    fn fire_weapon(&self) {
        self.robot.smash_with_hands();
    }
    fn drive_forward(&self) {
        self.robot.walk_forward();
    }
    fn assign_driver(&self, driver_name: &str) {
        self.robot.react_to_human(driver_name);
    }
}

pub struct EnemyTanker;
impl EnemyAttacker for EnemyTanker {
    fn new(&self, _enemy_robot: EnemyRobot) -> Self {
        Self
    }
    fn fire_weapon(&self) {
        let mut rng = thread_rng();
        let attack_damage: u32 = rng.gen_range(2, 20);
        println!("Enemy Tank does {} Damage", attack_damage);
    }
    fn drive_forward(&self) {
        let mut rng = thread_rng();
        let movement: u32 = rng.gen_range(2, 5);
        println!("Enemy Tank moves {} spaces", movement);
    }
    fn assign_driver(&self, driver_name: &str) {
        println!("{} is driving the thank", driver_name);
    }
}

#[derive(Clone)]
pub struct EnemyRobot;

impl EnemyRobot {
    pub fn smash_with_hands(&self) {
        let mut rng = thread_rng();
        let attack_damage: u32 = rng.gen_range(2, 20);

        println!("Enemy Robot causes {} damage with its hands", attack_damage);
    }

    pub fn walk_forward(&self) {
        let mut rng = thread_rng();
        let movement: u32 = rng.gen_range(2, 5);

        println!("Enemy Robot walks forward {} spaces", movement);
    }

    pub fn react_to_human(&self, driver_name: &str) {
        println!("Enemy Robot tramps on {}", driver_name);
    }
}
fn main() {
    let rx7_tank: EnemyTanker = EnemyTanker;
    let fred_the_robot: EnemyRobot = EnemyRobot;
    let robot_adapter: EnemyRobotAdapter = EnemyRobotAdapter {
        robot: fred_the_robot.clone(),
    };

    println!("The robot");
    fred_the_robot.react_to_human("Paul");
    fred_the_robot.walk_forward();
    fred_the_robot.smash_with_hands();
    println!("");

    println!("The enemy tank");
    rx7_tank.assign_driver("Frank");
    rx7_tank.drive_forward();
    rx7_tank.fire_weapon();
    println!("");

    println!("The robot with Adapter");
    robot_adapter.assign_driver("Mark");
    robot_adapter.drive_forward();
    robot_adapter.fire_weapon();
}
