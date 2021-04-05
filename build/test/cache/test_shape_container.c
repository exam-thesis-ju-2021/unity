#include "build/test/mocks/mock_hardware.h"
#include "build/test/mocks/mock_rectangle.h"
#include "src/shape_container.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.0/vendor/unity/src/unity.h"


void test_shape_container_calc_rect_is_square(void)

{

    init_CMockExpect(8);

    init();



    digital_write(4, HIGH);

    PinState state = digital_read(4);



    UnityAssertEqualNumber((UNITY_INT)((state)), (UNITY_INT)((HIGH)), (

   ((void *)0)

   ), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);

}
