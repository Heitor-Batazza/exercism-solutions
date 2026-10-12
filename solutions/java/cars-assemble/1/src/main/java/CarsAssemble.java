public class CarsAssemble {

    public double productionRatePerHour(int speed) {
        float production = (221 * speed);
        if (speed <= 4) {
            return production;
        } else if (speed <= 8) {
            return 0.9 * production;
        } else if (speed == 9) {
            return 0.8 * production;
        } else {
            return 0.77 * production;
        }
    }

    public int workingItemsPerMinute(int speed) {
        float productionPerMinute = (221 * speed)/60.0f;
        if (speed <= 4) {
            return (int) Math.floor(productionPerMinute);
        } else if (speed <= 8) {
            return (int) Math.floor(0.9 * productionPerMinute);
        } else if (speed == 9) {
            return (int) Math.floor(0.8 * productionPerMinute);
        } else {
            return (int) Math.floor(0.77 * productionPerMinute);
        }
    }
}
