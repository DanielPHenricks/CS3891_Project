% choose your file!
filename='2023_09_28_16_19_25_2T3MWRFVXLW056972microstrain_record.bag';
bag = rosbag(filename);

%% extract the x velocity information
vel_x_bag = select(bag,'Topic','/car/state/vel_x');
vel_x = timeseries(vel_x_bag);

%% extract relative velocity of lead car
rel_vel_bag = select(bag,'Topic','/rel_vel');
rel_vel = timeseries(rel_vel_bag);

%% extract relative distance of lead car
lead_dist_bag = select(bag,'Topic','/lead_dist');
lead_dist = timeseries(lead_dist_bag);

%% plot the results
figure
hold on
plot(vel_x)
% plot(rel_vel)
scatter(rel_vel.Time(:),rel_vel.Data(:),marker='.');
% plot(lead_dist);
scatter(lead_dist.Time(:),lead_dist.Data(:),marker='.')
legend({'vel x (m/s)','rel vel (m/s)','lead dist (m)'})
ylabel('meters or meters/second')
xlabel('Unix time in GMT')
title('Speed, Relative Velocity, and Relative Distance')
axis equal


%% what can we see from radar data?
tracka0_bag = select(bag,'Topic','/car/radar/track_a0');
tracka0 = timeseries(tracka0_bag,'Point.X','Point.Y');

%%
figure
scatter(tracka0.Data(:,1),tracka0.Data(:,2));
title('Radar signatures in (x,y) of tracka0')
xlabel('Distance (x) in m')
ylabel('Distance (y) in m')
axis equal

%% okay, what about lots of other radar data?

tracka0_bag = select(bag,'Topic','/car/radar/track_a0');
tracka0 = timeseries(tracka0_bag,'Point.X','Point.Y');
tracka1_bag = select(bag,'Topic','/car/radar/track_a1');
tracka1 = timeseries(tracka1_bag,'Point.X','Point.Y');
tracka2_bag = select(bag,'Topic','/car/radar/track_a2');
tracka2 = timeseries(tracka2_bag,'Point.X','Point.Y');
tracka3_bag = select(bag,'Topic','/car/radar/track_a3');
tracka3 = timeseries(tracka3_bag,'Point.X','Point.Y');
tracka4_bag = select(bag,'Topic','/car/radar/track_a4');
tracka4 = timeseries(tracka4_bag,'Point.X','Point.Y');
tracka5_bag = select(bag,'Topic','/car/radar/track_a5');
tracka5 = timeseries(tracka5_bag,'Point.X','Point.Y');
tracka6_bag = select(bag,'Topic','/car/radar/track_a6');
tracka6 = timeseries(tracka6_bag,'Point.X','Point.Y');
tracka7_bag = select(bag,'Topic','/car/radar/track_a7');
tracka7 = timeseries(tracka7_bag,'Point.X','Point.Y');
% tracka8_bag = select(bag,'Topic','/car/radar/track_a8');
% tracka8 = timeseries(tracka8_bag,'Point.X','Point.Y');

%% and plot all of these
figure
hold on
scatter(tracka0.Data(:,1),tracka0.Data(:,2));
scatter(tracka1.Data(:,1),tracka1.Data(:,2));
scatter(tracka2.Data(:,1),tracka2.Data(:,2));
scatter(tracka3.Data(:,1),tracka3.Data(:,2));
scatter(tracka4.Data(:,1),tracka4.Data(:,2));
scatter(tracka5.Data(:,1),tracka5.Data(:,2));
scatter(tracka6.Data(:,1),tracka6.Data(:,2));
scatter(tracka7.Data(:,1),tracka7.Data(:,2));
title('Radar signatures in (x,y) of tracks a0-a7')
xlabel('Distance (x) in m')
ylabel('Distance (y) in m')
axis equal

%% what about the other tracks?

tracka8_bag = select(bag,'Topic','/car/radar/track_a8');
tracka8 = timeseries(tracka8_bag,'Point.X','Point.Y');
tracka9_bag = select(bag,'Topic','/car/radar/track_a9');
tracka9 = timeseries(tracka9_bag,'Point.X','Point.Y');
tracka10_bag = select(bag,'Topic','/car/radar/track_a10');
tracka10 = timeseries(tracka10_bag,'Point.X','Point.Y');
tracka11_bag = select(bag,'Topic','/car/radar/track_a11');
tracka11 = timeseries(tracka11_bag,'Point.X','Point.Y');
tracka12_bag = select(bag,'Topic','/car/radar/track_a12');
tracka12 = timeseries(tracka12_bag,'Point.X','Point.Y');
tracka13_bag = select(bag,'Topic','/car/radar/track_a13');
tracka13 = timeseries(tracka13_bag,'Point.X','Point.Y');
tracka14_bag = select(bag,'Topic','/car/radar/track_a14');
tracka14 = timeseries(tracka14_bag,'Point.X','Point.Y');
tracka15_bag = select(bag,'Topic','/car/radar/track_a15');
tracka15 = timeseries(tracka15_bag,'Point.X','Point.Y');

%% and plot all of these
figure
hold on
scatter(tracka8.Data(:,1),tracka8.Data(:,2));
scatter(tracka9.Data(:,1),tracka9.Data(:,2));
scatter(tracka10.Data(:,1),tracka10.Data(:,2));
scatter(tracka11.Data(:,1),tracka11.Data(:,2));
scatter(tracka12.Data(:,1),tracka12.Data(:,2));
scatter(tracka13.Data(:,1),tracka13.Data(:,2));
scatter(tracka14.Data(:,1),tracka14.Data(:,2));
scatter(tracka15.Data(:,1),tracka15.Data(:,2));
title('Radar signatures in (x,y) of tracks a8-a15')
xlabel('Distance (x) in m')
ylabel('Distance (y) in m')
axis equal

%% plot some of all of them on ONE plot
figure
hold on
scatter(tracka0.Data(1:20:end,1),tracka0.Data(1:20:end,2),'r');
scatter(tracka1.Data(1:20:end,1),tracka1.Data(1:20:end,2),'r');
scatter(tracka2.Data(1:20:end,1),tracka2.Data(1:20:end,2),'r');
scatter(tracka3.Data(1:20:end,1),tracka3.Data(1:20:end,2),'r');
scatter(tracka4.Data(1:20:end,1),tracka4.Data(1:20:end,2),'r');
scatter(tracka5.Data(1:20:end,1),tracka5.Data(1:20:end,2),'r');
scatter(tracka6.Data(1:20:end,1),tracka6.Data(1:20:end,2),'r');
scatter(tracka7.Data(1:20:end,1),tracka7.Data(1:20:end,2),'r');
% second set
scatter(tracka8.Data(1:20:end,1),tracka8.Data(1:20:end,2),'b');
scatter(tracka9.Data(1:20:end,1),tracka9.Data(1:20:end,2),'b');
scatter(tracka10.Data(1:20:end,1),tracka10.Data(1:20:end,2),'b');
scatter(tracka11.Data(1:20:end,1),tracka11.Data(1:20:end,2),'b');
scatter(tracka12.Data(1:20:end,1),tracka12.Data(1:20:end,2),'b');
scatter(tracka13.Data(1:20:end,1),tracka13.Data(1:20:end,2),'b');
scatter(tracka14.Data(1:20:end,1),tracka14.Data(1:20:end,2),'b');
scatter(tracka15.Data(1:20:end,1),tracka15.Data(1:20:end,2),'b');
title('Radar signatures in (x,y) of 1/20 of all tracks a0-15')
xlabel('Distance (x) in m')
ylabel('Distance (y) in m')
axis equal


%% can we visualize this as a video?

% create the figture
figure
title('Video playback of radar signatures in (x,y) of 1/20 of all tracks a0-15')
xlabel('Distance (x) in m')
ylabel('Distance (y) in m')

% start partway through
starttime = round(length(tracka0.Data(:))/4);
% iterate over from starttime, choosing every 5 elements, and end at least
% one full cycle early in case all data are not the same len
for jj=starttime:5:(length(tracka0.Data(:))-20)
    scatter(tracka0.Data(jj,1),tracka0.Data(jj,2),'r');
    % necessary to put on a hold so that all the data will show up
    hold on
    scatter(tracka1.Data(jj,1),tracka1.Data(jj,2),'r');
    scatter(tracka2.Data(jj,1),tracka2.Data(jj,2),'r');
    scatter(tracka3.Data(jj,1),tracka3.Data(jj,2),'r');
    scatter(tracka4.Data(jj,1),tracka4.Data(jj,2),'r');
    scatter(tracka5.Data(jj,1),tracka5.Data(jj,2),'r');
    scatter(tracka6.Data(jj,1),tracka6.Data(jj,2),'r');
    scatter(tracka7.Data(jj,1),tracka7.Data(jj,2),'r');
    % second set
    scatter(tracka8.Data(jj,1),tracka8.Data(jj,2),'b');
    scatter(tracka9.Data(jj,1),tracka9.Data(jj,2),'b');
    scatter(tracka10.Data(jj,1),tracka10.Data(jj,2),'b');
    scatter(tracka11.Data(jj,1),tracka11.Data(jj,2),'b');
    scatter(tracka12.Data(jj,1),tracka12.Data(jj,2),'b');
    scatter(tracka13.Data(jj,1),tracka13.Data(jj,2),'b');
    scatter(tracka14.Data(jj,1),tracka14.Data(jj,2),'b');
    scatter(tracka15.Data(jj,1),tracka15.Data(jj,2),'b');
    % setting limits on axis labels to help make more clear
    xlim([0 300])
    ylim([-50 50])
    % equalize lengths
    axis equal
    % waits short time to visualize the video
    pause(0.05)
    % resets the figure to clear previous values plotted
    hold off
end
