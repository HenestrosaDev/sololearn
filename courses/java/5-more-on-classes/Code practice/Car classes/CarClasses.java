class Main {
	public static void main(String[] args) {
		Vehicle vehicle = new Vehicle();
		vehicle.start();
		vehicle.resource();

		Vehicle electric = new ElectricVehicle();
		electric.start();
		electric.resource();

		Vehicle hybrid = new HybridVehicle();
		hybrid.start();
		hybrid.resource();
	}
}

class Vehicle {
	public void start() {
		System.out.println("Starting");
	}

	public void resource() {
		System.out.println("I use petrol");
	}
}

class ElectricVehicle extends Vehicle {
	@Override
	public void resource() {
		System.out.println("I use electricity");
	}
}

class HybridVehicle extends Vehicle {
	@Override
	public void resource() {
		System.out.println("I use both petrol and electricity");
	}
}