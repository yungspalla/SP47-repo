var clientsInRestaurant = 14;
var clientsWaiting = 0;
var clientsInCashier = 0;
let maxSeats = 40;
let seatsAvailable = maxSeats - clientsInRestaurant;

class MenuElement{
    constructor(food, price){
        this.food = food;
        this.price = price;
    }   
    }

const food1 = new MenuElement("Pizza", 10);
const food2 = new MenuElement("Pasta", 15);
const food3 = new MenuElement("Salad", 5);
const food4 = new MenuElement("Soup", 7);
const food5 = new MenuElement("Cake", 20);

function doorbellRings() {
    newClientArrive();
}

function newClientArrive() {
    clientsWaiting++;
    checkSeats();
}

function checkSeats() {
    if (clientsInRestaurant < maxSeats) {
        console.log("There are seats available");
        clientsInRestaurant++;
        clientsWaiting--;
        bringMenu();
    } else {
        console.log("There are no seats available");
        clientsWaiting--;
    }
}

function bringMenu() {
    console.log("Menu: ");
    console.log(food1.food + " " + food1.price);
    console.log(food2.food + " " + food2.price);
    console.log(food3.food + " " + food3.price);
    console.log(food4.food + " " + food4.price);
    console.log(food5.food + " " + food5.price);
    clientsWaiting--;
}

function newClientLeave() {
    clientsInRestaurant--;
    clientsInCashier++;
}

function newClientCashier() {
    clientsInCashier--;
}