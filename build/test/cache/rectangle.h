









typedef struct rectangle

{

    uint16_t r_length;

    uint16_t r_width;

} rectangle_t;



static rectangle_t rect;



void rectangle_init(uint16_t length, uint16_t width);



uint16_t rectangle_get_area(void);



uint16_t rectangle_get_perimeter(void);





_Bool 

    rectangle_is_square(void);
