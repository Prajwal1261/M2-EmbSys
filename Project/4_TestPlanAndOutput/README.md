# High Level Test Plan

| Test_Id | Description | I/P | Exp O/P | Actual Output | Type of Test |
| ----- | ----- | ------- | ----- | ------- | ------ |
|HL01|Check if distance is correctly sensed| Valid input | correct output | correct output | Manual Testing |
|HL02|By considering distance condition check if Led is working correctly|  Valid input | correct output | correct output | Manual Testing |

# Low level Test Plan

| Test_Id | Description | I/P | Exp O/P | Actual Output | Type of Test |
| ----- | ----- | ------- | ----- | ------- | ------ |
|LL01|Sensing the distance of object or person| Ultrasonic sensor in cm | Successfully sensed | Successfully sensed | Requirement based |
|LL02|Display distance value on lcd| Potentiometer value | Successfully displayed distance in cm | Successfully displayed distance in cm | Requirement based |
|LL03|Person is far from the door (distance>50 cms)| Led value | Led OFF | Led OFF | Requirement based |
|LL04|Person approaching near the door (distance<50 cms)| Led value | Led ON | Led ON | Requirement based |