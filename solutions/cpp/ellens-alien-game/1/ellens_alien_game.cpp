namespace targets {
class Alien {
    private:
        int health = 3;
        
    public:
        int x_coordinate;
        int y_coordinate;
    
        Alien(int x, int y) {
            x_coordinate = x;
            y_coordinate = y;  
        }
    
        int get_health() {
            return this->health;
        }
        bool hit() {
            if (this->health > 0) {
                this->health -= 1;
            }
            return true;
        }
        bool is_alive() {
            if (this->health > 0) {
                return true;
            } else {
                return false;
            }
        }
        bool teleport(int x_new, int y_new) {
            this->x_coordinate = x_new;
            this->y_coordinate = y_new;

            return true;
        }
        bool collision_detection(Alien alien) {
            if (this->x_coordinate == alien.x_coordinate && this->y_coordinate == alien.y_coordinate){
                return true;
            } else {
                return false;
            }
        }
};

}  // namespace targets
