## Github repository
https://github.com/DanielPHenricks/CS3891_Project

## in project root directory
wget -O mytest.bag.zip "https://cps-vo.org/sites/cps-vo.org/files/2024-09/2023_09_28_16_19_25_2T3MWRFVXLW056972microstrain_record.bag_.zip"
unzip mytest.bag.zip

## Addendum
This controller will flatten the oscillation curves by using a linear combination of the traditional constant time gap controller
and its derivative. Based on our simulations, it provides a much more smooth and near constant velocity, especially as beta
is increased.

When running the multi vehicle simulation with simulink, you should see that the time gap line is near flat, especially if beta
is increased past 1, while lead_vel, ego val, and space_gap slightly oscillate. lead_vel and ego_vel have nearly opposite
concavities, but due to their small amplitude the effect does not create large oscillations in the space gap.

The car can be tested at any speed. It's possible that it would work less efficiently at certain speeds, but we currently
aren't sure. 

The controller also performs well when the lead and ego car begin moving from rest, meaning that it follows a similar
acceleration and velocity. This is practical for regular driving. The controller should provide nice acceleration when the driver
begins driving again after a red light turns green.