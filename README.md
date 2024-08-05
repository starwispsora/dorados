***

###### 31Jul2024 <br>

#### set-up
1.       cd /opt/ros/humble/
2.       source /opt/ros/humble/setup.bash
3.       sudo nano ~/.bashrc
 - +alias r='ros2 topic list'
 - +alias cw='cd ~/sora_ws'
 - +alias cs='cd ~/sora_ws/src'
 - +alias sb='colcon build --symlink-install'
 - +alias nb='sudo nano ~/.bashrc'

<br>

***

## ros2 3 key communication mechanisms between nodes
## 1.Topics

Topics: For streaming data, many-to-many communication (e.g., sensor data). 

<br>

Topics are used for asynchronous(요청을 보낸 후 응답과 관계없이 다음 동작을 실행할 수 있는 방식을 의미한다), many-to-many communication. They are ideal for streaming data, such as sensor readings or control commands, where the data is continuously produced and consumed. 

<br>

   - Publisher: A node that sends messages on a topic.
   - Subscriber: A node that receives messages from a topic.
   - Message: The data structure sent over a topic, defined in .msg files.
     
 <br>
 
Example use cases: sensor data (e.g., camera images, laser scans), command velocities for robots.

<br>

## 2.Services

Services: For synchronous(요청을 보낸 후 해당 요청의 응답을 받아야 다음 동작을 실행하는 방식을), request-reply interactions (e.g., querying a database).

<br>

Services are used for synchronous, one-to-one communication. They are ideal for request-reply interactions where a node sends a request and waits for a response. 

<br>

   - Service Server: A node that provides a service.
   - Service Client: A node that calls a service.
   - Service Definition: Defined in .srv files, including a request and a response message.

<br>
 
Example use cases: resetting a robot, querying a database.

<br>

## 3.Actions

Actions: For asynchronous, long-running tasks with feedback (e.g., moving a robot to a location).

<br>

Actions are used for asynchronous, long-running tasks that can provide feedback and be preempted. They are ideal for tasks that may take a while to complete and where you want to track progress. 

<br>

   - Action Server: A node that performs the action.
   - Action Client: A node that requests the action.
   - Action Definition: Defined in .action files, including goal, result, and feedback messages.
<br>

Example use cases: moving a robot to a location, processing an image.

***

###### 1Aug2024 <br>
#### the first day actually run and controlled my Turtlebot3 : <br>
   +pkgxml, +cmakelist -> pub-sub -> compile -> run(controlled by keyboard) <br>

***

#### my laptop  <->  DDC  <->  my bot <br>
ex) <br>
 laptop <br>
 node1 <br>	
 node2 <br>
bring-up : open ros2 - 

      ros2 launch turtlebot3_bringup robot.launch.py
| <br>
| <br>
DDS(multi port<-UDP,TDP) (weaker security)    (X) <br>
DDS(router id:turtle, pw:turtlebot3) 	      (O) <br>
| <br>
| <br>
turtlebot3 (Raspberry Pi) <br>

<br><br>

#### turtlebot3 setting order  <br>
 1. link mine to bot's router
 2. (vmware connect)

<br><br>

#### turtlebot3 info  <br>
- 12v <br>
- speed limit : 0.3m/s <br>
- has 2 moters : DC moters(simplest way we can set up)(diameter cell) <br>

<br><br>

#### turtlebot3 set-up
1. http://192.168.14.1
2. admin-set up-network-LAN
3. nb(mine 02, turtlebot=burger)
4.       ssh ubuntu@192.168.14.50
6.       apt list --upgradable
7.       nb

<br><br>

#### turtlebot3 running order <br>
 1. write code (cmake, pkg.xml -> header, cpp)
 2. compile the code
 3.      gazebo
 4. turtlebor3 log in
 5. turtlebot3 run :

         ros2 launch turtlebot3_bringup robot.launch.py
 7. user, code run :

         ros2 run turtlebot3_teleop teleop_keyboard

<br><br>

#### on vscode  <br>
 - vscode open remote : 

         SSH - ubuntu@192.168.14.50
 (turtle's)
 
<br><br>

#### gazebo simulator  <br>
 - install(on my laptop)  <br>
 - run :

         gazebo
 - stop(to abvoid gazebos conflict) :

         killgazebo

<br><br>

#### tips..  <br>

      unset GTK_PATH
 - use it when you get " qt.qpa.plugin: Could not find the Qt platform plugin "wayland" in ...... "

***

##### 2Aug2024 <br>
## Service Code(User-Made Interface)
 - Why Necessary? Custom services allow for tailored communication between nodes, addressing specific needs of your application.
  
 - How: Input commands on your terminal (p289). <br>
 - .srv File and Class Naming: The .srv file defines the service interface. The file name should start with a capital letter (MyService.srv), and the class name should follow CamelCase conventions. <br>
 - Run: Start the server and then the client.

<br><br>

## Parameters
 - Use Across Multiple Functions: Parameters are often preferred over variables for maintaining consistent values across different functions. <br>
 - Commands: <br>
 List parameters:

         ros2 param list
 - Get a parameter: <br>
 
         ros2 param get /node_name parameter_name
         ros2 param get /turtlesim background_b
 - Set a parameter: <br>
 
         ros2 param set /node_name parameter_name value
         ros2 param set /turtlesim background_b 20
 - Save Current Parameters: <br>
 - Dump parameters to a file: <br>
 
         ros2 param dump /node_name 
         ros2 param dump /turtlesim

 - Save as YAML File:Save parameters as a <br>

         YAML file: ros2 param dump /node_name > turtlesim.yaml 
         ros2 param dump /turtlesim > turtlesim.yaml 

 - Show Saved File Version: <br>
    Load parameters from a YAML file: <br>

         ros2 param load /node_name turtlesim.yaml 
         ros2 param load /turtlesim turtlesim.yaml 

 - Run with Parameters File:
 Launch node with parameters from a file: <br>

         ros2 run package_name node_name --ros-args --params-file turtlesim.yaml
         ros2 run turtlesim turtlesim_node --ros-args --params-file turtlesim.yaml 
 - Why Used: Using parameters files can help manage and load configurations consistently across different runs. <br>
 - Launch Files + Parameters: Using launch files with parameters is preferred as it provides a more organized way to manage configurations and node launches.
 - get(bring parameter)-set(adjust)

***

##### 5Aug

### action :
client -------------goal(order)----------->server <br>
client <----feedback(partial-sequence)----server <br>
client <---------sequence------------------server <br>
 - to run server -> to run multiple clients 
 - allows simplify just service-topic

 <br>

      ros2 run simple_pkg_cpp simple_action_server
      ros2 action send_goal /fibonacci interface_example/action/fibonacci {"order" : 4}

 ***
