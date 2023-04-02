#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        double a;
        scanf("%lf", &a);

        for (int h = 0; h < 12; h++) {
            for (int m = 0; m < 60; m++) {
                double hour_angle = fmod(0.5 * (60 * h + m), 360.0);
                double minute_angle = fmod(6 * m, 360.0);
                double angle_diff = fabs(hour_angle - minute_angle);

                if (angle_diff > 180.0) {
                    angle_diff = 360.0 - angle_diff;
                }

                if (fabs(angle_diff - a) < (1.0 / 120)) {
                    printf("%02d:%02d\n", h, m);
                }
            }
        }
    }

    return 0;
}
