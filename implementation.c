#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "utilities.h"  // DO NOT REMOVE this line
#include "implementation_reference.h"   // DO NOT REMOVE this line

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param offset - number of pixels to shift the object in bitmap image up
 * @return - pointer pointing a buffer storing a modified 24-bit bitmap image
 * Note1: White pixels RGB(255,255,255) are treated as background. Object in the image refers to non-white pixels.
 * Note2: You can assume the object will never be moved off the screen
 **********************************************************************************************************************/
unsigned char *processMoveUp(unsigned char *buffer_frame, unsigned width, unsigned height, int offset) {
    return processMoveUpReference(buffer_frame, width, height, offset);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param offset - number of pixels to shift the object in bitmap image left
 * @return - pointer pointing a buffer storing a modified 24-bit bitmap image
 * Note1: White pixels RGB(255,255,255) are treated as background. Object in the image refers to non-white pixels.
 * Note2: You can assume the object will never be moved off the screen
 **********************************************************************************************************************/
unsigned char *processMoveRight(unsigned char *buffer_frame, unsigned width, unsigned height, int offset) {
    return processMoveRightReference(buffer_frame, width, height, offset);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param offset - number of pixels to shift the object in bitmap image up
 * @return - pointer pointing a buffer storing a modified 24-bit bitmap image
 * Note1: White pixels RGB(255,255,255) are treated as background. Object in the image refers to non-white pixels.
 * Note2: You can assume the object will never be moved off the screen
 **********************************************************************************************************************/
unsigned char *processMoveDown(unsigned char *buffer_frame, unsigned width, unsigned height, int offset) {
    return processMoveDownReference(buffer_frame, width, height, offset);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param offset - number of pixels to shift the object in bitmap image right
 * @return - pointer pointing a buffer storing a modified 24-bit bitmap image
 * Note1: White pixels RGB(255,255,255) are treated as background. Object in the image refers to non-white pixels.
 * Note2: You can assume the object will never be moved off the screen
 **********************************************************************************************************************/
unsigned char *processMoveLeft(unsigned char *buffer_frame, unsigned width, unsigned height, int offset) {
    return processMoveLeftReference(buffer_frame, width, height, offset);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param rotate_iteration - rotate object inside frame buffer clockwise by 90 degrees, <iteration> times
 * @return - pointer pointing a buffer storing a modified 24-bit bitmap image
 * Note: You can assume the frame will always be square and you will be rotating the entire image
 **********************************************************************************************************************/
unsigned char *processRotateCW(unsigned char *buffer_frame, unsigned width, unsigned height,
                               int rotate_iteration) {
    return processRotateCWReference(buffer_frame, width, height, rotate_iteration);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param rotate_iteration - rotate object inside frame buffer counter clockwise by 90 degrees, <iteration> times
 * @return - pointer pointing a buffer storing a modified 24-bit bitmap image
 * Note: You can assume the frame will always be square and you will be rotating the entire image
 **********************************************************************************************************************/
unsigned char *processRotateCCW(unsigned char *buffer_frame, unsigned width, unsigned height,
                                int rotate_iteration) {
    return processRotateCCWReference(buffer_frame, width, height, rotate_iteration);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param _unused - this field is unused
 * @return
 **********************************************************************************************************************/
unsigned char *processMirrorX(unsigned char *buffer_frame, unsigned int width, unsigned int height, int _unused) {
    return processMirrorXReference(buffer_frame, width, height, _unused);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param _unused - this field is unused
 * @return
 **********************************************************************************************************************/
unsigned char *processMirrorY(unsigned char *buffer_frame, unsigned width, unsigned height, int _unused) {
    return processMirrorYReference(buffer_frame, width, height, _unused);
}

/***********************************************************************************************************************
 * WARNING: Do not modify the implementation_driver and team info prototype (name, parameter, return value) !!!
 *          Do not forget to modify the team_name and team member information !!!
 **********************************************************************************************************************/
void print_team_info(){
    // Please modify this field with something interesting
    char team_name[] = "shoe-crew";

    // Please fill in your information
    char student1_first_name[] = "Xiuyan";
    char student1_last_name[] = "Yu";
    char student1_student_number[] = "1000756719";

    // Please fill in your partner's information
    // If yon't have partner, do not modify this
    char student2_first_name[] = "Jingchen";
    char student2_last_name[] = "Xu";
    char student2_student_number[] = "1000544574";

    // Printing out team information
    printf("*******************************************************************************************************\n");
    printf("Team Information:\n");
    printf("\tteam_name: %s\n", team_name);
    printf("\tstudent1_first_name: %s\n", student1_first_name);
    printf("\tstudent1_last_name: %s\n", student1_last_name);
    printf("\tstudent1_student_number: %s\n", student1_student_number);
    printf("\tstudent2_first_name: %s\n", student2_first_name);
    printf("\tstudent2_last_name: %s\n", student2_last_name);
    printf("\tstudent2_student_number: %s\n", student2_student_number);
}

void process_transform(int x, int y, int r, bool mx, bool my, unsigned char *frame_buffer, unsigned int width, unsigned int height) {
    // printf("---\nHandling transformation: x=%d, y=%d, r=%d, mx=%d, my=%d\n", x, y, r, mx, my);

    // handle translations
    if (x != 0) {
        // printf("Moving horizontally by %d\n", x);
        frame_buffer = processMoveRight(frame_buffer, width, height, x);
    }
    if (y != 0) {
        // printf("Moving vertically by %d\n", y);
        frame_buffer = processMoveUp(frame_buffer, width, height, y);
    }

    // assimilate double-mirrors into rotations
    if (mx && my) {
        // printf("Combining double-mirror into 180 deg rotation\n");
        r += 2;
        mx = false;
        my = false;
    }

    r = (r % 4 + 4) % 4; // positive modulo
    // printf("Reduced rotation to %d turns CW\n", r);

    // handle rotations
    if (r == 1) {
        // printf("Rotating CW\n");
        frame_buffer = processRotateCW(frame_buffer, width, height, 1);
    } else if (r == 3) {
        // printf("Rotating CCW\n");
        frame_buffer = processRotateCCW(frame_buffer, width, height, 1);
    } else if (r == 2) {
        // printf("Rotating 180 degs\n");
        frame_buffer = processRotateCW(frame_buffer, width, height, 2); // TODO replace with rotate 180
    }

    // handle mirrors
    if (mx) {
        // printf("Flipping along x-axis\n");
        frame_buffer = processMirrorX(frame_buffer, width, height, 0);
    } else if (my) {
        // printf("Flipping along y-axis\n");
        frame_buffer = processMirrorY(frame_buffer, width, height, 0);
    }
}

/***********************************************************************************************************************
 * WARNING: Do not modify the implementation_driver and team info prototype (name, parameter, return value) !!!
 *          You can modify anything else in this file
 ***********************************************************************************************************************
 * @param sensor_values - structure stores parsed key value pairs of program instructions
 * @param sensor_values_count - number of valid sensor values parsed from sensor log file or commandline console
 * @param frame_buffer - pointer pointing to a buffer storing the imported  24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param grading_mode - turns off verification and turn on instrumentation
 ***********************************************************************************************************************
 *
 **********************************************************************************************************************/
void implementation_driver(struct kv *sensor_values, int sensor_values_count, unsigned char *frame_buffer,
                           unsigned int width, unsigned int height, bool grading_mode) {
    int x = 0;
    int y = 0;
    int r = 0;
    bool mx = false;
    bool my = false;

    int tMod[4][2] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
    int temp[2];
    int rMod = 1;

    for (int sensorValueIdx = 0; sensorValueIdx < sensor_values_count;) {
        // printf("---\nReading sensor value #%d: %s, %d\n", sensorValueIdx, sensor_values[sensorValueIdx].key,
        //     sensor_values[sensorValueIdx].value);

        char* incomingKey = sensor_values[sensorValueIdx].key;
        int incomingVal = sensor_values[sensorValueIdx].value;

        if (*incomingKey == 'W') {
            // printf("Adding translation of (%d, %d)\n", tMod[0][0] * incomingVal, tMod[0][1] * incomingVal);
            x += tMod[0][0] * incomingVal;
            y += tMod[0][1] * incomingVal;

        } else if (*incomingKey == 'A') {
            // printf("Adding translation of (%d, %d)\n", tMod[1][0] * incomingVal, tMod[1][1] * incomingVal);
            x += tMod[1][0] * incomingVal;
            y += tMod[1][1] * incomingVal;

        } else if (*incomingKey == 'S') {
            // printf("Adding translation of (%d, %d)\n", tMod[2][0] * incomingVal, tMod[2][1] * incomingVal);
            x += tMod[2][0] * incomingVal;
            y += tMod[2][1] * incomingVal;

        } else if (*incomingKey == 'D') {
            // printf("Adding translation of (%d, %d)\n", tMod[3][0] * incomingVal, tMod[3][1] * incomingVal);
            x += tMod[3][0] * incomingVal;
            y += tMod[3][1] * incomingVal;

        } else if (*incomingKey == 'C') {
            if (incomingKey[1] == 'C') { // "CCW"
                // printf("Changing CCW of %d ", incomingVal);
                incomingVal *= -1;
                // printf("to CW of %d\n", incomingVal);
            }

            // incomingVal *= rMod;
            // // printf("Mirror mod to %d\n", incomingVal);

            incomingVal = (incomingVal % 4 + 4) % 4; // positive modulo
            // printf("Reduced CW to %d\n", incomingVal);

            r += (incomingVal * rMod);
            // r += incomingVal;

            if (incomingVal == 1){
                // printf("Rotating translation modifiers CCWx1\n");
                temp[0] = tMod[0][0];
                temp[1] = tMod[0][1];
                for (int i = 0; i < 3; i++){
                    tMod[i][0] = tMod[i+1][0];
                    tMod[i][1] = tMod[i+1][1];
                }
                tMod[3][0] = temp[0];
                tMod[3][1] = temp[1];

            } else if (incomingVal == 2) {
                // printf("Flipping both translation modifiers\n");
                for (int i = 0; i < 4; i++) {
                    tMod[i][0] *= -1;
                    tMod[i][1] *= -1;
                }

            } else if (incomingVal == 3) {
                // printf("Rotating translation modifiers CWx1\n");
                temp[0] = tMod[3][0];
                temp[1] = tMod[3][1];
                for (int i = 3; i > 0; i--){
                    tMod[i][0] = tMod[i-1][0];
                    tMod[i][1] = tMod[i-1][1];
                }
                tMod[0][0] = temp[0];
                tMod[0][1] = temp[1];
            }

        } else if (*incomingKey == 'M') {
            if (incomingKey[1] == 'X') { // "MX"
                // printf("Swapping modifiers for W and S\n");
                mx = !mx;
                temp[0] = tMod[2][0];
                temp[1] = tMod[2][1];
                tMod[2][0] = tMod[0][0];
                tMod[2][1] = tMod[0][1];
                tMod[0][0] = temp[0];
                tMod[0][1] = temp[1];

            } else {                     // "MY"
                // printf("Swapping modifiers for A and D\n");
                my = !my;
                temp[0] = tMod[3][0];
                temp[1] = tMod[3][1];
                tMod[3][0] = tMod[1][0];
                tMod[3][1] = tMod[1][1];
                tMod[1][0] = temp[0];
                tMod[1][1] = temp[1];

            }

            // printf("Flipping rotation modifier\n");
            rMod *= -1;
        }

        // printf("CURRENT TRANSFORMATION: x=%d, y=%d, r=%d, mx=%d, my=%d\n", x, y, r, mx, my);
        // printf("CURRENT MODIFIERS: W=(%d, %d), A=(%d, %d), S=(%d, %d), D=(%d, %d), R=%d\n", tMod[0][0], tMod[0][1], tMod[1][0], tMod[1][1], tMod[2][0], tMod[2][1], tMod[3][0], tMod[3][1], rMod);

        // do verification every 25, just like reference impl
        if (++sensorValueIdx % 25 == 0) {
            process_transform(x, y, r, mx, my, frame_buffer, width, height);
            // printBMP(width, height, frame_buffer);
            verifyFrame(frame_buffer, width, height, grading_mode);

            // reset vars
            x = 0;
            y = 0;
            r = 0;
            mx = false;
            my = false;
            tMod[0][0] = 0;
            tMod[0][1] = 1;
            tMod[1][0] = -1;
            tMod[1][1] = 0;
            tMod[2][0] = 0;
            tMod[2][1] = -1;
            tMod[3][0] = 1;
            tMod[3][1] = 0;
            rMod = 1;
        }
    }

    process_transform(x, y, r, mx, my, frame_buffer, width, height);
    return;
}
