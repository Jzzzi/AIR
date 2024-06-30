# AIR

## PreTask

我们主要关注环境表征在环境变化、移动设备交互下的持续（终身）更新，现在主要精力是在nerf/3dgs for robotics这个宽泛的方向上，用nerf和3dgs作为环境三维表征进行导航和机械臂操作任务，并且用nerf和3dgs做photorealistic的仿真环境（用于一些端到端模型的训练）。包括动态环境下的nerf-slam、自动化nerf建图、自动化3dgs建图（sensor包括结构光和lidar）、开集语义的在线建图、物体解耦的nerf/3dgs编辑等等。机器人应用上我们也在做一些object-goal和image-goal的导航工作。学习理论相关我们更关注多任务持续表征学习，以及网络不确定性推断的相关工作。

相关论文的话，基础的nerf和3dgs原文肯定要看一下，知道differentiable rendering做参数优化的基本概念。相关的topic可以看下面两个整理名录：https://github.com/MrNeRF/awesome-3D-gaussian-splatting
https://github.com/zubair-irshad/Awesome-Implicit-NeRF-Robotics
我们比较关注少样本的重建问题：https://davidcharatan.com/pixelsplat/

Nerf-slam/3dgs-slam的经典工作可以优先看下面四个（和跑跑实验）
https://github.com/HengyiWang/Co-SLAM
https://github.com/SYSU-STAR/H2-Mapping
https://github.com/muskie82/MonoGS
https://github.com/spla-tam/SplaTAM

nerf/3dgs做路径规划可以看Mac Schwager组的下面两篇：
Nerf-navigation https://github.com/mikh3x4/nerf-navigation
Splatnav https://arxiv.org/abs/2403.02751

导航和移动抓取任务来说：
GOAT: https://theophilegervet.github.io/projects/goat/OK-ROBOT: https://ok-robot.github.io/

仿真器相关的：
https://github.com/buaacyw/GaussianEditor
https://real-to-sim-to-real.github.io/RialTo/

学习相关的和其它方向有一些gap:
https://openreview.net/pdf?id=RiwPYAMLur
https://openaccess.thecvf.com/content/CVPR2023/papers/Humayun_SplineCam_Exact_Visualization_and_Characterization_of_Deep_Network_Geometry_and_CVPR_2023_paper.pdf
https://arxiv.org/pdf/2109.14035
2

你现在大概知道3dgs的效果了，你考完之后我建议你可以跑一下这三个code
离线nerf：https://github.com/nerfstudio-project/nerfstudio
在线nerf(ROS接口,RGBD传感器我们这里有): https://github.com/SYSU-STAR/H2-Mapping 
在线3dgs(live demo, RGBD传感器我们这里有): https://github.com/muskie82/MonoGS

这样你应该能大概知道在线和离线现在的效果到什么程度，看看你的兴趣在实时重建任务上还是离线重建任务上，我们都有相应的课题可以给你