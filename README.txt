https://github.com/DanielPHenricks/CS3891_Project

wget -O 2023_09_28_16_19_25_2T3MWRFVXLW056972microstrain_record.bag.zip "https://cps-vo.org/sites/cps-vo.org/files/2024-09/2023_09_28_16_19_25_2T3MWRFVXLW056972microstrain_record.bag_.zip"
unzip 2023_09_28_16_19_25_2T3MWRFVXLW056972microstrain_record.bag.zip
docker build --tag rosblank .
docker network create localros
docker run -it --rm --net localros --name master --env ROS_HOSTNAME=master --env ROS_MASTER_URI=http://master:11311 rosblank

git clone git@github.com:jmscslgroup/ros2ascii.git && cd ros2ascii && docker build -t ros2ascii . && docker run -it --rm --net localros --name test1 --env ROS_HOSTNAME=ros2ascii --env ROS_MASTER_URI=http://master:11311 ros2ascii bash  